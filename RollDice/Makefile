CC = gcc
CCFLAGS = -w
TARGET = dice
BUILD_DIR = ./build

all: dice

$(BUILD_DIR)/main.o: main.c
	@echo 'Creating $@...'
	@$(CC) -c $^ -o $@

$(TARGET): $(BUILD_DIR)/main.o
	@echo 'Compiling $(TARGET)...'
	@$(CC) $^ -o $@

.PHONY: clean

clean:
	@echo 'Cleaning directories...'
	@rm -rf ./build/* $(TARGET)