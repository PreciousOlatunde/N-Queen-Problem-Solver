//stack.h
//header file for Stack class

#ifndef STACK_H
#define STACK_H

class Stack{
    //data members
    private:
        int top; //holds the index of the most recent element
        int n; //hold the user-created value for N
        int* arr; //pointer to the array for the stack implementation
    
    //methods
    public:
        Stack(int n); //construtor
        ~Stack(); //destructor
        void push(int x); //pushes the value of x onto the top of the stack
        void pop(); //removes the value at the top of the stack
        int peek(); //returns the value at the top of the stack
        int getTop(); //retrieves the index of the top of the stack
        bool isEmpty(); //returns true if stack is empty
        void printStack(); //prints out the positions of each queen (stack element)

};

#endif