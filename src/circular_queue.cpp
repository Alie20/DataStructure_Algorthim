#include "../include/datastructure/circular_queue.h"
#include <iostream>

/*****************************************************************************
** File       : circular_queue.cpp                                           *        
** Project    : Data_structure and Algorithim                                *
** Author     : Alie Eldeen                                                  *
** Date       : 13.01.25                                                     *
** Email      : alieldeen81@gmail.com                                        *
**                                                                           *                                                                            *    
** This file contains the implmentation of the Circular Queue class,         *
** which implements a basic queue data structure using a dynamic array.      *
** The queue supports common operations such as enqueue, dequeue, and count  *                   
** as well as utility methods for checking if the queue is empty or full.    *
**                                                                           *
******************************************************************************/

namespace datastructure
{

    /* Constructor of the queue 
    *  Initalize the an array with definied size from the user 
    *  Set the value of top to be -1
    */
    CircularQueue::CircularQueue(int size):capacity(size),front(-1),rear(-1),count_item(0)
    {
        // Create a new array with the size of capacity and make them 0 value
        arr = new int[capacity]();
    }

    /* Destructor of the queue 
    *  Delete  the an array from the heap 
    */
    CircularQueue::~CircularQueue()
    {
        delete[] arr;
    }

    bool CircularQueue::IsEmpty()
    {
        // Check the front and rear if they are not -1  
        if (front != -1 || rear != -1)
        {
            return false;
        }

        return true;
    }
    bool CircularQueue::IsFull()
    {
        // Check the the value of the top if it is same as the capacity - 1. This means it is full if not (Not full)
        if ((rear+1) % capacity != front)
        {
            return false;
        }
        
        return true;
    }

    void CircularQueue::enqueue(int value)
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
            rear = (rear+1)%capacity; 
        }
        count_item ++;
        arr[rear] = value;
    }

    int CircularQueue::Dequeue()
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

        }
        else
        {
            value = arr[front];
            arr[front] = 0 ;
            front = (front + 1 ) % capacity;
        }
        count_item --;
        return value;

    }

    int CircularQueue::count()
    {
        // Return the number of elements in the queue
        return (count_item);
    }
    void CircularQueue::display()
    {
        for(int i = 0 ;i < capacity ; i ++ )
        {
            std::cout <<arr[i] << " ";
        }
    }
}
