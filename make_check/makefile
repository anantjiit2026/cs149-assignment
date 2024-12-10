# Compiler and Flags
CXX = g++
CXXFLAGS = -Iinclude -std=c++17 -Wall

# Directories
SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include

# Source and Object Files
SRCS = $(SRC_DIR)/main.cpp $(SRC_DIR)/utils.cpp
OBJS = $(BUILD_DIR)/main.o $(BUILD_DIR)/utils.o

# Target Executable
TARGET = $(BUILD_DIR)/app

# Default Target
all: $(TARGET)

# Build Target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Object Files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean Target
clean:
	rm -f $(BUILD_DIR)/*.o $(TARGET)

# debug: CXXFLAGS += -g
# debug: all

# Phony Targets
.PHONY: all clean

