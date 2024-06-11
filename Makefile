
#.--------------------------------------------------------------------------.
#|                                                                          |
#|  iMate 		              chess engine                                  |
#|  Copyright (C) 2024        Martin Newbound                               |
#|                                                                          |
#|  for enquires, contact     martin.nz.dev@gmail.com                       |
#|                                                                          |
#|  This program is free software: you can redistribute it and/or modify    |
#|  it under the terms of the GNU General Public License as published by    |
#|  the Free Software Foundation, either version 3 of the License, or       |
#|  (at your option) any later version.                                     |
#|                                                                          |
#|  This program is distributed in the hope that it will be useful,         |
#|  but WITHOUT ANY WARRANTY; without even the implied warranty of          |
#|  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           |
#|  GNU General Public License for more details.                            |
#|                                                                          |
#|  You should have received a copy of the GNU General Public License       |
#|  along with this program. If not, see https://www.gnu.org/licenses/      |
#|                                                                          |
#'--------------------------------------------------------------------------'

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