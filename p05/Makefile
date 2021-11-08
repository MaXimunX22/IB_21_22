CXX = g++
CXX_Flags = -g -Wall

Practica 5: data_types change_case references boolean_operators arithmetic_operators short_circuit

data_types: data_types.cc
	$(CXX) $(CXX_Flags) -o data_types.out data_types.cc

change_case: change_case.cc
	$(CXX) $(CXX_Flags) -o change_case.out change_case.cc

references: references.cc
	$(CXX) $(CXX_Flags) -o references.out references.cc

boolean_operators: boolean_operators.cc
	$(CXX) $(CXX_Flags) -o boolean_operators.out boolean_operators.cc

arithmetic_operators: arithmetic_operators.cc
	$(CXX) $(CXX_Flags) -o arithmetic_operators.out arithmetic_operators.cc

short_circuit: short_circuit.cc
	$(CXX) $(CXX_Flags) -o short_circuit.out short_circuit.cc

.PHONY: clean
clean: 
	rm -f *.out