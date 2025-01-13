#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#include <iostream>
#include <stdexcept>

/*************************************************************************
** File       : Circular_queue.h                                          *
** Project    : Data_structure and Algorithim                             *
** Author     : Alie Eldeen                                               *
** Date       : 13.01.25                                                  *
** Email      : alieldeen81@gmail.com                                     *
**                                                                        *                                                                          *    
** This file contains the definition of the Circular_queue class,         *
** which implements a basic queue data structure using a dynamic array.   *
** The circular queue supports common operations such as enqueu, deqeue   *                            
** as well as utility methods for checking if the queue is empty or full. *
**                                                                        *
**************************************************************************/

namespace datastructure 
{

    class CircularQueue
    {
        private:
            int *arr;           //Queue 
            int front;          //Front of the queue
            int rear ;          //Rear of the queue
            int capacity ;      //The size of the queue 
            int count_item;     // The number of items in queue
        public:
            // Constructor to initialize the queu with a given size
            CircularQueue(int size);
            
            //Destructor to release allocated memory
            ~CircularQueue();

            /***********************************************
            * brief : Check the queu is empty or not       *
            * Arguments : None                             *
            * return : true  : if it is Empty.             *
            *        : false : if it is not Empty.         *
            ***********************************************/
            bool IsEmpty();


            /***********************************************
            * brief : Check the queue is Full or not       *
            * Arguments : None                             *
            * return : true  : if it is full.              *
            *        : false : if it is not full.          *
            ***********************************************/
            bool IsFull();


            /************************************************************************************
            * brief : enqueue the value onto queue                                              *
            * Arguments : The integer value to be added to the top of the queue.                *
            * throws std::overflow_error if the queue is full.                                  *
            * return : None                                                                     *
            *************************************************************************************/
            void enqueue(int value);


            /**************************************************************************************
            * brief : Dequeue an element from the queue                                           *
            * Arguments : None                                                                    *
            * throws std::underflow_error if the queue is empty.                                  *
            * return : The integer value that was at the top of the queue.                        *                                                                           *
            **************************************************************************************/
            int Dequeue();


            /**************************************************************************************
            * brief : calculate the total number of elements in the queue                         *
            * Arguments : None                                                                    *
            * return : the total number of elements in the queue                                  *                                                                           *
            **************************************************************************************/
            int count();

            /**************************************************************************************
            * brief : display the content of the queue                                            *
            * Arguments : None                                                                    *
            * return : None                                                                       *                                                                           *
            **************************************************************************************/
            void display();



    };
}
#endif