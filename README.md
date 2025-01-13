# DataStructure and Algorithm Repository

This repository is dedicated to implementing various data structures and algorithms. We start with the implementation of a **Stack**,**Queue**.

## Stack

### Definition
A **Stack** is a linear data structure that follows the Last In First Out (LIFO) principle. The most recently added item is the first to be removed. It is commonly used in scenarios like expression evaluation, backtracking algorithms, and function call management.

### Features
- **Dynamic Array-Based Implementation**: Efficient memory allocation for stack operations.
- **Basic Operations**:
  - `push(int value)`: Adds an element to the top of the stack.
  - `pop()`: Removes and returns the top element of the stack.
  - `peek(int index)`: Returns the value at the specified position in the stack.
  - `change(int index, int value)`: Modifies the value at the specified position in the stack.
  - `display()`: Displays all elements of the stack.
  - `IsEmpty()`: Checks if the stack is empty.
  - `IsFull()`: Checks if the stack is full.
  - `count()`: Returns the number of elements in the stack.

## Queue

### Definition
A **Queue** is a linear data structure that follows the First In First Out (FIFO) principle. The first element added is the first one to be removed. It is widely used in scenarios like task scheduling, resource management, and breadth-first traversal.

A **circular_queue** is a linear data structure that overcomes the limitations of a standard linear queue by utilizing space more efficiently. Unlike a linear queue, where the rear pointer can only move in one direction, the rear of a circular queue wraps around to the front when it reaches the end of the array.

### Features
- **Dynamic Array-Based Implementation**: Efficient memory allocation for queue operations.
- **Properties**:
  - **Front**: Points to the frontmost element in the queue.
  - **Rear**: Points to the last element in the queue.
  - **Size**: Tracks the number of elements in the queue.
  - **Capacity**: The maximum number of elements the queue can hold.
- **Basic Operations**:
  - `enqueue(int value)`: Adds an element to the rear of the queue.
  - `dequeue()`: Removes and returns the front element of the queue.
  - `IsEmpty()`: Checks if the queue is empty.
  - `IsFull()`: Checks if the queue is full.
  - `count()`: Returns the number of elements in the queue.

## Getting Started

### Prerequisites

- A C++11-compatible compiler (e.g., g++)

### Installation

Clone the repository or copy the source files into your project:

```bash
git clone https://github.com/Alie20/DataStructure_Algorthim.git
```

### File Structure

```
DataStructure/
├── include/
│   └── datastructure/
│       ├── stack.h
│       └── queue.h
│       └── circular_queue.h
├── src/
│   ├── stack.cpp
│   └── queue.cpp
│   └── circular_queue.cpp
└── README.md
```


## API Reference
## Stack
### Constructor

```cpp
Stack(int size);
```

- **Description**: Initializes a stack with a specified size.
- **Parameters**:
  - `size`: The initial capacity of the stack.

### Destructor

```cpp
~Stack();
```

- **Description**: Frees the dynamically allocated memory used by the stack.

### IsEmpty

```cpp
bool IsEmpty();
```

- **Description**: Checks if the stack is empty.
- **Returns**: `true` if the stack is empty; otherwise, `false`.

### IsFull

```cpp
bool IsFull();
```

- **Description**: Checks if the stack is full.
- **Returns**: `true` if the stack is full; otherwise, `false`.

### push

```cpp
void push(int value);
```

- **Description**: Adds an element to the top of the stack.
- **Parameters**:
  - `value`: The integer value to push onto the stack.
- **Exceptions**: Throws `std::overflow_error` if the stack is full.

### pop

```cpp
int pop();
```

- **Description**: Removes and returns the top element of the stack.
- **Returns**: The integer value of the top element.
- **Exceptions**: Throws `std::underflow_error` if the stack is empty.

### count

```cpp
int count();
```

- **Description**: Returns the current number of elements in the stack.

### peek

```cpp
int peek(int index);
```

- **Description**: Accesses the element at the specified index without modifying the stack.
- **Parameters**:
  - `index`: The 0-based position of the element.
- **Returns**: The integer value at the specified index.
- **Exceptions**: Throws `std::out_of_range` if the index is invalid.

### change

```cpp
void change(int index, int value);
```

- **Description**: Modifies the element at the specified index.
- **Parameters**:
  - `index`: The 0-based position of the element.
  - `value`: The new value to assign to the element.
- **Exceptions**: Throws `std::out_of_range` if the index is invalid.

### display

```cpp
void display();
```

- **Description**: Displays all elements in the stack from bottom to top.

## Queue

#### Constructor

```cpp
Queue(int size);
```

- **Description**: Initializes a queue with a specified size.
- **Parameters**:
  - `size`: The initial capacity of the queue.

#### Destructor

```cpp
~Queue();
```

- **Description**: Frees the dynamically allocated memory used by the queue.

#### IsEmpty

```cpp
bool IsEmpty();
```

- **Description**: Checks if the queue is empty.
- **Returns**: `true` if the queue is empty; otherwise, `false`.

#### IsFull

```cpp
bool IsFull();
```

- **Description**: Checks if the queue is full.
- **Returns**: `true` if the queue is full; otherwise, `false`.

#### enqueue

```cpp
void enqueue(int value);
```

- **Description**: Adds an element to the rear of the queue.
- **Parameters**:
  - `value`: The integer value to enqueue.
- **Exceptions**: Throws `std::overflow_error` if the queue is full.

#### dequeue

```cpp
int dequeue();
```

- **Description**: Removes and returns the front element of the queue.
- **Returns**: The integer value of the front element.
- **Exceptions**: Throws `std::underflow_error` if the queue is empty.

#### count

```cpp
int count();
```

- **Description**: Returns the current number of elements in the queue.

#### Display
```cpp
void display();
```
- **Description**: Show the all contents of the queue.

## Example Usage

### Sample Code

```cpp
#include "datastructure/stack.h"
#include "datastructure/queue.h"
#include "datastructure/ciruclar_queue.h
#include <iostream>

int main() {
    // Stack example
    datastructure::Stack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Stack contents:" << std::endl;
    stack.display();

    std::cout << "Top element: " << stack.pop() << std::endl;

    stack.change(0, 99);
    std::cout << "Modified Stack contents:" << std::endl;
    stack.display();

    // Queue example
    // You can use queue or circular queue (Circular_queue)
    datastructure::Queue queue(5);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << "No of elements in queue "queue.count() <<std::endl ;
    
    std::cout << queue.deque() <<std::endl;
    std::cout << queue.deque() <<std::endl;
    std::cout << queue.deque() <<std::endl;

    std::cout << "No of elements in queue "queue.count() <<std::endl ;

    return 0;
}
```

### Output

```
Stack contents:
10 20 30
Top element: 30
Modified Stack contents:
99 20
No of elements in queue 3
10 
20
30
No of elements in queue 0
```


### Authors
- **Alie Eldeen**

### Date
- Created on: 08.01.2025

