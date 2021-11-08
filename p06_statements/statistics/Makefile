CXX = g++
CXX_Flags = -g -Wall
TARGET = statistics

$(TARGET): $(TARGET).cc
	$(CXX) $(CXX_Flags) -o $(TARGET).out $(TARGET).cc

.PHONY: clean
clean: 
	rm -f *.out