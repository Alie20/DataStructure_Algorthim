#include "../include/datastructure/stack.h"
#include <iostream>

/*****************************************************************************
** File       : stack.cpp                                                    *
** Project    : Data_structure and Algorithim                                *
** Author     : Alie Eldeen                                                  *
** Date       : 08.01.25                                                     *
** Email      : alieldeen81@gmail.com                                        *
**                                                                           *                                                                            *    
** This file contains the implmentation of the Stack class, which implements * 
** a basic stack data structure using a dynamic array. The stack supports    * 
** common operations such as push, pop, peek, and change,                    *
** as well as utility methods for checking if the stack is empty or full.    *
**                                                                           *
******************************************************************************/

namespace datastructure
{

    /* Constructor of the stack 
    *  Initalize the an array with definied size from the user 
    *  Set the value of top to be -1
    */
    Stack::Stack(int size):capacity(size),top(-1)
    {
        // Create a new array with the size of capacity and make them 0 value
        arr = new int[capacity]();

    }

    /* Destructor of the stack 
    *  Delete  the an array from the heap 
    */
    Stack::~Stack()
    {
        delete[] arr;
    }

    bool Stack::IsEmpty()
    {
        // Check the top's value if it is not at the bottom this means it is empty otherwise it is not 
        if (top != -1)
        {
            return false;
        }

        return true;
    }
    bool Stack::IsFull()
    {
        // Check the the value of the top if it is same as the capacity - 1. This means it is full if not (Not full)
        if (top != (capacity - 1 ))
        {
            return false;
        }
        
        return true;
    }

    void Stack::push(int value)
    {
        //Check if the stack is full 
        if(IsFull())
        {
            // Output an error as stack overflow
            throw std::overflow_error("Stack overflow: cannot push, stack is full.");
        }
        // If not add the value and increment the top index for next value
        arr[++top] = value;
    }

    int Stack::pop()
    {
        // Check if the stack is empty 
        if (IsEmpty())
        {
            // Output an error as an stack underflow
            throw std::underflow_error("Stack Underflow: cannot pop");
        }
        // Return the last value and decrement the top value 
        return arr[top--];
    }

    int Stack::count()
    {
        // Return the number of elements in the stack
        return (top + 1);
    }

    int Stack::peek(int index)
    {
        // Check if the stack is empty 
        if (IsEmpty())
        {
            std::cout<<"Stack underflow"<<std::endl;
            return 0;
        }
        // Return the value of the index that user enter
        return arr[index];
    }

    void Stack::change(int index, int value)
    {
        // change the value that enter by the user to index given 
        arr[index] = value;
        std::cout<<"Value changed at location "<<index<<std::endl;
    }

    void Stack::display()
    {
        // Print the values that available on the stack. 
        for (int i = top ; i >= 0 ; i -- )
        {
            std::cout << arr[i] <<std::endl;
        }
    }
}
