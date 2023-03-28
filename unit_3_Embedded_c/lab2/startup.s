/* startup cortexm3

.section .vectors

.word 0x20001000
.word _reset
.word Vector_handler
.word Vector_handler


.section .text

_reset:
	b1 main
	b .
.thumb_func
Vector_handler:
	V_reset
