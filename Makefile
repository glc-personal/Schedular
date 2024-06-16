# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -I./Scheduler.Core/include -I./Scheduler.Utilities/include

# Directories
CORE_DIR = ./Scheduler.Core
CORE_SRC_DIR = $(CORE_DIR)/src
CORE_INC_DIR = $(CORE_DIR)/include
UTILITIES_DIR = ./Scheduler.Utilities
UTILITIES_SRC_DIR = $(UTILITIES_DIR)/src
UTILITIES_INC_DIR = $(UTILITIES_DIR)/include

# Source files
CORE_SOURCES = $(wildcard $(CORE_SRC_DIR)/*.cpp)
UTILITIES_SOURCES = $(wildcard $(UTILITIES_SRC_DIR)/*.cpp)
MAIN_SOURCE = main.cpp

# Object files
CORE_OBJECTS = $(CORE_SOURCES:.cpp=.o)
UTILITIES_OBJECTS = $(UTILITIES_SOURCES:.cpp=.o)
MAIN_OBJECT = $(MAIN_SOURCE:.cpp=.o)

# Executable
EXEC = Scheduler

# Build the executable
all: $(EXEC)

# Link the executable
$(EXEC): $(CORE_OBJECTS) $(UTILITIES_OBJECTS) $(MAIN_OBJECT)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile main.cpp
$(MAIN_OBJECT): $(MAIN_SOURCE)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compile core sources
$(CORE_OBJECTS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
# Compile utilities sources
$(UTILITIES_OBJECTS): %.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(CORE_OBJECTS) $(UTILITIES_OBJECTS) $(MAIN_OBJECT) $(EXEC)

.PHONY: all clean

