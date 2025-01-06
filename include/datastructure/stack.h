#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stdexcept>

namespace datastructure {

class Stack
{
    private:
        int * arr;          //Dynamic array for storing the elements
        int capacity ;      //The size of array
        int top ;           // The Index of top element in the stack
    public:
        //Constructor
        Stack(int size);
        
        //Destructor
        ~Stack();

        //Check if the stack is Empty
        bool IsEmpty();

        //Check if the stack is full
        bool IsFull();

        //Push an element onto the stack
        void push(int value);

        //Pop an element from the stack
        int pop();

        //Get the current size of the stack
        int count();

        //Access the item at the i position
        int peek(int index);

        //Change the item at the i position
        void change(int index, int value);

        //Display the content of the stack
        void display();
        

};
}
#endif