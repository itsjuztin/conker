import csv
import json
import os
import sys
import time

def main():
    if len(sys.argv) < 3:
        print("Usage: make_latest_json.py <progress.csv> <latest.json>")
        sys.exit(1)

    csv_path = sys.argv[1]
    json_path = sys.argv[2]
    
    sections = {"init": [0, 0, 0, 0], "game": [0, 0, 0, 0], "debugger": [0, 0, 0, 0], "all": [0, 0, 0, 0]}

    with open(csv_path, "r") as f:
        reader = csv.reader(f)
        for row in reader:
            if len(row) < 7: continue
            sec = row[1]
            if row[5] == "length": continue
            size = int(row[5])
            is_c = row[6] == "c"
            
            if sec in sections:
                sections[sec][1] += size
                sections[sec][3] += 1
                sections["all"][1] += size
                sections["all"][3] += 1
                if is_c:
                    sections[sec][0] += size
                    sections[sec][2] += 1
                    sections["all"][0] += size
                    sections["all"][2] += 1

    progress_sections = []
    for sec_name in ["init", "game", "debugger", "all"]:
        counts = sections[sec_name]
        percent = (counts[0] / counts[1] * 100) if counts[1] > 0 else 0
        progress_sections.append({
            "section": sec_name,
            "c": counts[0],
            "total": counts[1],
            "c_functions": counts[2],
            "total_functions": counts[3],
            "percent": round(percent, 4)
        })

    hash_val = os.popen("git rev-parse HEAD").read().strip()

    data = {
        "date": int(time.time()),
        "hash": hash_val,
        "progress": [
            {
                "version": "us",
                "sections": progress_sections
            }
        ]
    }

    with open(json_path, "w") as f:
        json.dump(data, f, indent=2)
        
    print(f"Wrote {json_path}")

if __name__ == "__main__":
    main()
