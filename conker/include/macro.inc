# Assembly Macros

.set K0BASE, 0x80000000
.set K1BASE, 0xA0000000
.set K2BASE, 0xC0000000

.macro glabel label
    .global \label
    .type \label, @function
    \label:
.endm

.macro dlabel label
    .global \label
    \label:
.endm

.macro jlabel label
    .global \label
    \label:
.endm

# Non-matching marker emitted by newer spimdisasm (ASM_NM_LABEL) before a
# function's glabel. Purely informational for tooling; expands to nothing so
# it contributes zero bytes and does not affect byte-matching.
.macro nonmatching name, size
.endm

# End-of-symbol markers emitted by newer spimdisasm (ASM_TEXT_END_LABEL /
# ASM_DATA_END_LABEL) after a function/data symbol. No-op markers; emit nothing.
.macro endlabel name
.endm

.macro enddlabel name
.endm
