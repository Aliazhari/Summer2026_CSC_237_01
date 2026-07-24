# Stack Implementation in C++ Using a Linked List

A simple implementation of the **Stack** data structure in C++ using a **singly linked list**. This project demonstrates how a stack can grow dynamically without requiring a fixed-size array.

## Overview

A **Stack** is a linear data structure that follows the **Last-In, First-Out (LIFO)** principle. The last element inserted into the stack is the first one to be removed.

Unlike an array-based implementation, this version stores each element in a dynamically allocated node. The top of the stack is represented by a pointer to the first node in the linked list.

## Features

- Push an element onto the stack
- Pop the top element
- View the top element (`peek`)
- Check if the stack is empty
- Get the current size of the stack
- Display all elements in the stack
- Automatic memory management through dynamic allocation

## Stack Operations

### Push

Creates a new node and inserts it at the beginning of the linked list.

**Time Complexity:** `O(1)`

---

### Pop

Removes the node at the top of the stack and deallocates its memory.

**Time Complexity:** `O(1)`

---

### Peek (Top)

Returns the value stored at the top of the stack without removing it.

**Time Complexity:** `O(1)`

---

### isEmpty

Returns `true` if the stack contains no elements.

**Time Complexity:** `O(1)`

---

### Size

Returns the number of elements currently stored in the stack.

**Time Complexity:** `O(n)` (unless a size variable is maintained)

---

### Display

Prints all elements from the top of the stack to the bottom.

**Time Complexity:** `O(n)`

## Node Structure

Each node contains two members:

| Member | Description |
|--------|-------------|
| `data` | Stores the value of the node |
| `next` | Pointer to the next node |

Example:

```cpp
struct Node
{
    int data;
    Node* next;
};
```

## Data Members

| Variable | Description |
|----------|-------------|
| `top` | Pointer to the top node of the stack |
| `size` *(optional)* | Number of elements currently stored |

## Example

```cpp
Stack s;

s.push(10);
s.push(20);
s.push(30);

cout << s.peek() << endl;   // 30

s.pop();

cout << s.peek() << endl;   // 20

s.display();
```

Output

```
30
20
20 10
```

## How It Works

Initially, the stack is empty.

```
top
 |
 v
nullptr
```

After pushing `10`, `20`, and `30`:

```
top
 |
 v
+------+-----+     +------+-----+     +------+------+
|  30  |  o------->|  20  |  o------->|  10  | NULL |
+------+-----+     +------+-----+     +------+------+
```

After one `pop()`:

```
top
 |
 v
+------+-----+     +------+------+
|  20  |  o------->|  10  | NULL |
+------+-----+     +------+------+
```

## Advantages

- Dynamic size (no fixed capacity)
- Efficient insertion and deletion at the top
- No wasted memory from unused array elements
- No stack overflow due to a fixed-size array (limited only by available system memory)

## Limitations

- Requires additional memory for pointers.
- Dynamic memory allocation is slightly slower than array access.
- More complex implementation than an array-based stack.
- Poor cache locality compared to arrays.

## Memory Management

Since nodes are allocated dynamically using `new`, they should be released using `delete` when removed from the stack.

The stack class should also implement a destructor to deallocate any remaining nodes and prevent memory leaks.

## Possible Improvements

- Make the stack a template class to support any data type.
- Implement a copy constructor.
- Implement the assignment operator.
- Implement move constructor and move assignment operator.
- Add exception handling for stack underflow.
- Add iterators for traversing the stack.
- Support initializer lists.

## Project Structure

```
Stack/
│── Node.h           // Node structure (optional)
│── Stack.h          // Class declaration
│── Stack.cpp        // Class implementation
│── main.cpp         // Demo program
│── README.md
```

## Compilation

Using **g++**

```bash
g++ main.cpp Stack.cpp -o stack
```

Run

```bash
./stack
```

## Concepts Demonstrated

- Classes and Objects
- Linked Lists
- Dynamic Memory Allocation
- Pointers
- Constructors and Destructor
- Encapsulation
- Time Complexity
- LIFO (Last-In, First-Out)
- Memory Management

## Array vs. Linked List Implementation

| Feature | Array Stack | Linked List Stack |
|---------|-------------|-------------------|
| Memory Allocation | Fixed size | Dynamic |
| Push | `O(1)` | `O(1)` |
| Pop | `O(1)` | `O(1)` |
| Peek | `O(1)` | `O(1)` |
| Overflow | Possible when full | Only when system memory is exhausted |
| Extra Memory | None | One pointer per node |
| Cache Performance | Better | Slightly worse |

## Author

**Ali Azhari**

Computer Science • C++