CC = gcc

INC_DIR = -Iinclude

C_FLAGS := -Wall -pedantic $(INC_DIR) -O3


SRC_DIR = src

TARGET  = gcs
SRCS    = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_R_DIR)/*.c)

.PHONY: all
all: clean $(TARGET) run 

$(TARGET): $(SRCS)
	$(CC) $^ $(C_FLAGS) -o $@


run: 
	./$(TARGET)

.PHONY: clean
clean:
	-rm -f $(TARGET)