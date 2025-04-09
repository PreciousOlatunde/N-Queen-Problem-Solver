//stack.cpp
//implementation of the Stack class

#include <iostream>
#include "stack.h"

//constructor
Stack::Stack(int n){
    top = -1; //represents an empty stack
    Stack::n = n;
    arr = new int[n]; //declares the array

    for(int i = 0; i < n; i++) {
        arr[i] = 0;
    }  //fills the array with zeros to represent no positions

}

Stack::~Stack(){
    //delete arr;
}

//pushes the value of x onto the top of the stack
void Stack::push(int x){

    if(top < n - 1){
        top++;
        arr[top]= x;
    } else {
        std::cout << "ERROR: Stack overflow" << std::endl;
    }
    
    
}

//removes the value at the top of the stack
void Stack::pop(){
    if(isEmpty()){
        std::cout << "ERROR: Stack underflow" << std::endl;
    } else {
        top--;
    }

}

//returns the value at the top of the stack
int Stack::peek(){
    if(isEmpty()){
        return -1;
    }
    return arr[top];
}

//retrieves the index of the top of the stack
int Stack::getTop(){
    if(isEmpty()){
        return -1;
    }
    return top;
}

//returns true if stack is empty
bool Stack::isEmpty(){
    return (top < 0);
}

//prints out the positions of each stack element
void Stack::printStack(){
    for(int i = n-1; i >= 0; i--){
        std::cout << "ROW: " << i+1 << ", COL: " << arr[i] << " "; std::cout << std::endl;
    }
}