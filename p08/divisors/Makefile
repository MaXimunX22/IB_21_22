CXX = g++
CXX_Flags = -g -Wall
TARGET = divisors

$(TARGET): $(TARGET).cc
	$(CXX) $(CXX_Flags) -o $(TARGET) $(TARGET).cc

.PHONY: clean
clean: 
	rm -f *.out $(TARGET)