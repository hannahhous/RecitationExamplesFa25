
# Target executable
TARGET = employee

# Source files
SRCS = main.cpp employee.cpp hourlyemp.cpp salaryemp.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Header files
DEPS = employee.h hourlyemp.h salaryemp.h

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
main.o: main.cpp employee.h
employee.o: employee.cpp employee.h
hourly.o: hourlyemp.cpp hourlyemp.h employee.h
salary.o: salaryemp.cpp salaryemp.h employee.h