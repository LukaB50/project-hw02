SRC=$(wildcard src/*c)
#DEST=$(exe/)
OBJ=$(patsubst %c, %o, $(SRC))
INC=inc/

CFLAGS=-I $(INC)
EXE=$(patsubst %.c, %.elf, $(SRC))

.SECONDARY:

all: $(EXE)

%.elf: $(OBJ)
	gcc $(OBJ) -lm -o $@

%.o: %.c
	gcc -c $< -I inc/ -o $@

run:
	cd src		#cd exe  (kad bude spremao u exe)
	./tes01.elf
	./test02.elf

clean:
	rm -f $(OBJ) $(EXE)
