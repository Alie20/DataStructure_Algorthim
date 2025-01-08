# DataStructure and Algorithm Repository

This repository is dedicated to implementing various data structures and algorithms. We start with the implementation of a **Stack**.

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
Stack/
├── include/
│   └── datastructure/
│       └── Stack.h
├── src/
│   └── stack.cpp
└── README.md
```


## API Reference

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

## Example Usage

### Sample Code

```cpp
#include "datastructure/Stack.h"
#include <iostream>

int main() {
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
```


### Authors
- **Alie Eldeen**

### Date
- Created on: 08.01.2025

