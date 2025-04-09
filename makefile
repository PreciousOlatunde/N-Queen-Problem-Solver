stack: main.cpp stack.cpp stack.h
	g++ main.cpp stack.cpp -o queenStack
clean: 
	rm queenStack
run: stack
	./queenStack
