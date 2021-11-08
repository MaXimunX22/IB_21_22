CXX = g++
CXX_Flags = -g -Wall
TARGET = time_decomposition

$(TARGET): $(TARGET).cc
	$(CXX) $(CXX_Flags) -o $(TARGET).out $(TARGET).cc

.PHONY: clean
clean: 
	rm -f *.out