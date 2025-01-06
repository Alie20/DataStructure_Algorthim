#include "../include/datastructure/stack.h"
#include <iostream>

namespace datastructure
{

    Stack::Stack(int size):capacity(size),top(-1)
    {
        arr = new int[capacity]();

    }

    Stack::~Stack()
    {
        delete[] arr;
    }

    bool Stack::IsEmpty()
    {
        if (top != -1)
        {
            return false;
        }

        return true;
    }
    bool Stack::IsFull()
    {
        if (top != (capacity - 1 ))
        {
            return false;
        }
        
        return true;
    }

    void Stack::push(int value)
    {
        if(IsFull())
        {
            throw std::overflow_error("Stack overflow: cannot push, stack is full.");
        }
        arr[++top] = value;
    }

    int Stack::pop()
    {
        if (IsEmpty())
        {
            throw std::underflow_error("Stack Underflow: cannot pop");
        }
        return arr[top--];
    }

    int Stack::count()
    {
        return (top + 1);
    }

    int Stack::peek(int index)
    {
        if (IsEmpty())
        {
            std::cout<<"Stack underflow"<<std::endl;
            return 0;
        }
        return arr[index];
    }

    void Stack::change(int index, int value)
    {
        arr[index] = value;
        std::cout<<"Value changed at location "<<index<<std::endl;
    }

    void Stack::display()
    {
        for (int i = 0 ; i < capacity ; i ++ )
        {
            std::cout << arr[i] <<std::endl;
        }
    }
}
