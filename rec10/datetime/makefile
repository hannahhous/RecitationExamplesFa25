# Compiler settings
CXX = g++
CXXFLAGS = -Wall -g

# Target executable (using the Pr15-17 name from your layout)
TARGET = datetime

# Source files
SRCS = datetime.cpp main.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Header files
DEPS = date.h time.h datetime.h

# Main target
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Pattern rule for object files
%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: clean

# Dependencies
date.o: date.h
time.o: time.h
datetime.o: datetime.cpp datetime.h date.h time.h
main.o: main.cpp datetime.h date.h time.h