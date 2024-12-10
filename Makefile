CC = gcc                    
CFLAGS = -Wall -Wextra -std=c11  

INSTRS = seamcall_instrs/tdh_mng_create.c 
SRC = main.c firmware.c flows.c $(INSTRS)
OBJ = $(SRC:.c=.o)            

TARGET = firmware

all: $(TARGET)

$(TARGET): $(OBJ)

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)