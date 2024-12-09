CC = gcc                    
CFLAGS = -Wall -Wextra -std=c11  

SRC = main.c firmware.c flows.c
OBJ = $(SRC:.c=.o)            

TARGET = firmware

all: $(TARGET)

$(TARGET): $(OBJ)

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)