# N-Queen-Problem-Solver
The N-Queens problem challenges you to place N chess queens on an NxN chessboard so that no two queens can attack each other (horizontally, vertically, or diagonally).  The goal is to find an arrangement of N queens on an NxN chessboard where no queen shares a row, column, or diagonal with another queen.  This program solves it.

How to execute/run the N-Queen program

Files needed:
1. stack.h 
2. stack.cpp
3. main.cpp
4. makefile

Execution:
1. All of the aforementioned files should be in the same folder
2. The folder where the files are should be your present working directory
3. On the Terminal, type and enter the command "make clean" to remove any executables from previous compilations
4. Enter the command "make run" in Terminal to compile and execute the program

Using the running program:
1. The program first prompts you to enter an integer greater than 3. This number will serve as the number of rows and columns the board has, as well as the number of queens to be places on the board (N). Type it and hit enter.
2. The program then prints out the layout of the queens on the board in the form of row number and column number.
3. These are the placements of queens on an NxN chess board such that no two queens can attack each other.

Other details:
1. For this project, I wrote my own Stack Class that was an array implementation of the Stack ADT.
2. My Stack class includes the expected "pop()", "push()" and "isEmpty()" methods but also incudes others like "getTop()" that returns the index of the most recently added item, "peek()" that returns the value of the most recently added element, and "printStack()" that prints out the content of the stack in the format necessary for this project.
3. After printing out the position of every queen on the board, the program then prints out a physical layout that helps you visualize where each queen is, on the chess board.
