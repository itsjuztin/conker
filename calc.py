import csv

sections = {"init": [0, 0], "game": [0, 0], "debugger": [0, 0]}
total = [0, 0]
total_size = [0, 0]
sections_size = {"init": [0, 0], "game": [0, 0], "debugger": [0, 0]}

with open("conker/progress.csv", "r") as f:
    reader = csv.reader(f)
    for row in reader:
        if len(row) < 6: continue
        if row[5] == "length": continue
        sec = row[1]
        size = int(row[5])
        is_c = row[6] == "c"
        if sec in sections:
            sections[sec][1] += 1
            total[1] += 1
            sections_size[sec][1] += size
            total_size[1] += size
            if is_c:
                sections[sec][0] += 1
                total[0] += 1
                sections_size[sec][0] += size
                total_size[0] += size

print(f"Total: {total[0]}/{total[1]} ({total_size[0]/total_size[1]*100:.4f}%)")
for sec in sections:
    print(f"{sec}: {sections[sec][0]}/{sections[sec][1]} ({sections_size[sec][0]/sections_size[sec][1]*100:.4f}%)")
