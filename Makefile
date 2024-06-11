# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -Wextra

# Directories
SRC_DIR = src
BUILD_DIR = build

# Target executable name
TARGET = iMate

# Find all the C++ files in the src/ directory
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
# Get corresponding object file names
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

# Rule for making the target
$(BUILD_DIR)/$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Rule for making object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Phony target for cleaning up
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)