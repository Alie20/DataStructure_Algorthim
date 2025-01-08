#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stdexcept>

/*************************************************************************
** File       : stack.h                                                   *
** Project    : Data_structure and Algorithim                             *
** Author     : Alie Eldeen                                               *
** Date       : 08.01.25                                                  *
** Email      : alieldeen81@gmail.com                                     *
**                                                                        *                                                                          *    
** This file contains the definition of the Stack class, which implements * 
** a basic stack data structure using a dynamic array. The stack supports * 
** common operations such as push, pop, peek, and change,                 *
** as well as utility methods for checking if the stack is empty or full. *
**                                                                        *
**************************************************************************/

namespace datastructure 
{

    class Stack
    {
        private:
            int * arr;          //Dynamic array for storing the elements
            int capacity ;      //The size of array
            int top ;           // The Index of top element in the stack
        public:
            // Constructor to initialize the stack with a given size
            Stack(int size);
            
            //Destructor to release allocated memory
            ~Stack();

            /***********************************************
            * brief : Check the stack is empty or not      *
            * Arguments : None                             *
            * return : true  : if it is Empty.             *
            *        : false : if it is not Empty.         *
            ***********************************************/
            bool IsEmpty();


            /***********************************************
            * brief : Check the stack is Full or not       *
            * Arguments : None                             *
            * return : true  : if it is full.              *
            *        : false : if it is not full.          *
            ***********************************************/
            bool IsFull();


            /************************************************************************************
            * brief : Push the value onto stack                                                 *
            * Arguments : The integer value to be added to the top of the stack.                *
            * throws std::overflow_error if the stack is full.                                  *
            * return : None                                                                     *
            *************************************************************************************/
            void push(int value);


            /**************************************************************************************
            * brief : pop an element from the stack                                               *
            * Arguments : None                                                                    *
            * throws std::underflow_error if the stack is empty.                                  *
            * return : The integer value that was at the top of the stack.                        *                                                                           *
            **************************************************************************************/
            int pop();


            /**************************************************************************************
            * brief : calculate the total number of elements in the stack                         *
            * Arguments : None                                                                    *
            * return : the total number of elements in the stack                                  *                                                                           *
            **************************************************************************************/
            int count();


            /*****************************************************************************************
            * brief : Accesses the element at the specified index in the stack without modifying it. *                                                                            *
            * Arguments : Index The position (0-based) of the elemennt to access in the stack.       *
            *             Index 0 corresponds to the bottom of the stack and top corresponds         *
            *             to the top of the stack                                                    *
            * return : The integer value at the specified index in the stack.                        *                                                                              *
            ******************************************************************************************/
            int peek(int index);


            /********************************************************************************************
            * brief : Change the value of the specific index with the new value.                        *                                                                            *
            * Arguments : index : Index The position (0-based) of the elemennt to access in the stack.  *
            *           : value : The new value that you want to add                                    *
            * return : The integer value at the specified index in the stack.                           *                                                                              *
            *********************************************************************************************/
            void change(int index, int value);


            /********************************************************************************************
            * brief : Show the content of the stack                            .                         *                                                                            *
            * Arguments : None                                                                           *
            * return : None                           *                                                  * 
            *********************************************************************************************/
            void display();
    };
}
#endif