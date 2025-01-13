#include "../include/datastructure/queue.h"
#include <iostream>

/*****************************************************************************
** File       : queue.cpp                                                    *
** Project    : Data_structure and Algorithim                                *
** Author     : Alie Eldeen                                                  *
** Date       : 12.01.25                                                     *
** Email      : alieldeen81@gmail.com                                        *
**                                                                           *                                                                            *    
** This file contains the implmentation of the Queue class, which implements * 
** a basic queue data structure using a dynamic array. The queue supports    * 
** common operations such as enqueue, dequeue, and count                     *
** as well as utility methods for checking if the queue is empty or full.    *
**                                                                           *
******************************************************************************/

namespace datastructure
{

    /* Constructor of the queue 
    *  Initalize the an array with definied size from the user 
    *  Set the value of top to be -1
    */
    Queue::Queue(int size):capacity(size),front(-1),rear(-1)
    {
        // Create a new array with the size of capacity and make them 0 value
        arr = new int[capacity]();
    }

    /* Destructor of the queue 
    *  Delete  the an array from the heap 
    */
    Queue::~Queue()
    {
        delete[] arr;
    }

    bool Queue::IsEmpty()
    {
        // Check the front and rear if they are not -1  
        if (front != -1 || rear != -1)
        {
            return false;
        }

        return true;
    }
    bool Queue::IsFull()
    {
        // Check the the value of the top if it is same as the capacity - 1. This means it is full if not (Not full)
        if (front != (capacity - 1 ))
        {
            return false;
        }
        
        return true;
    }

    void Queue::enqueue(int value)
    {
        //Check if the queue is full 
        if(IsFull())
        {
            // Output an error as queue overflow
            throw std::overflow_error("Queue overflow: cannot enqueue.");
        }
        else if (IsEmpty())
        {
            front = 0 ;
            rear = 0 ; 
        }
        else
        {
            rear ++;
        }
        arr[rear] = value;
    }

    int Queue::Dequeue()
    {
        int value;
        // Check if the queue is empty 
        if (IsEmpty())
        {
            // Output an error as an queue underflow
            throw std::underflow_error("Queue Underflow: cannot dequeue");
        }
        else if (rear == front)
        {
            value = arr[front];
            arr[front] = 0;
            rear = -1;
            front = -1;
            return value;

        }
        return arr[front++];
    }

    int Queue::count()
    {
        // Return the number of elements in the queue
        if (rear == -1 && front == -1)
        {
            return 0;
        }
        else
        {
            return ((rear - front) + 1);

        }
    }
    void Queue::display()
    {
        for(int i = 0 ;i < capacity ; i ++ )
        {
            std::cout <<arr[i] << " ";
        }
    }
}
