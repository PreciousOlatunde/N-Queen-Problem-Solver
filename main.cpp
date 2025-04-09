//main.cpp

#include <iostream>
#include "stack.h"

bool conflict(Stack s);
void printBoard(Stack s, int n);

int main(){
    int n = 0;
    //ask user for N
    while (n <= 3){
        std::cout << "Please input a number greater than 3: ";
        std::cin >> n;
    }
    
    //initialize stack
    Stack s(n);
    int filled = 0;
    s.push(1); //push first queen into stack

    while(filled < n){
        //if no conflicts, increment filled
        if(!conflict(s)){
            filled++;

            if(filled < n){
                s.push(1);
            }
          
          // if there is conflict, and room to shift, move current queen to the right
        } else if((conflict(s)) && (s.peek() < n)){
            int col = s.peek() + 1;
            s.pop();
            s.push(col);

          // if there is conflict, and no room to shift, backtrack until there is a queen with room to shift
        } else if((conflict(s)) && (s.peek() >= n)) {
            while (s.peek() >= n){
                s.pop();
                filled--;
            }
            int col = s.peek() + 1;
            s.pop();
            s.push(col);
        }

    }

    std::cout << std::endl;
    s.printStack(); //prints the positions of each queen in the stack
    std::cout << std::endl;
    printBoard(s, n); //prints a visual of each queen in its position on the baord
    std::cout << std::endl;
    
    return 0;
}

//checks for conflicts
bool conflict(Stack s){
    //retrieves the row and column number for the queen trying to be added
    int row = s.getTop(); 
    int col = s.peek();
    s.pop();


    /* compares the position of the queen waiting to be added to the position
       of the queens already in the stack for any conflicts */
    while( s.getTop() > -1){
        int row2 = s.getTop();
        int col2 = s.peek();

        if((col == col2) || (abs(row - row2) ==  abs(col - col2) ))  {
            return true;
        }
        s.pop();
    }
    return false;
}

//prints a visual of the board
void printBoard(Stack s,int n){
    for(int i = n-1; i >= 0; i--){
        int col = s.peek();
        int row = s.getTop();
        for(int j = 1; j <=n; j++){
            if((i == row) && (j == col)){
                std::cout << "♛ ";
            } else {
                std::cout << ". ";
            }
        }
        s.pop();
        std::cout << std::endl;

    }
}