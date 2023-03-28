#Abdelrahman_Mosad

CC=arm-none-eabi-
CFLAGS=-mcpu=arm926ej-s -g
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)
As= $(wildcard *.s)
AsOBJ= $(As:.s=.o)

all: lab2_Ab.hex
	@echo "=======Build is Done======="

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe $(CFLAGS) $(INCS) -c $< -o $@

lab2_Ab.elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o lab2_Ab.elf -Map=Map_file.map

lab2_Ab.hex: lab2_Ab.elf
	$(CC)objcopy.exe -O binary $< $@

clean_all:
	rm *.o *.elf *.hex

clean:
	rm *.elf *.hex