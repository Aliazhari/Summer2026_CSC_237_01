# Queue Implementation Using a Linked List (C++)

## Overview

This project implements a **Queue** data structure in C++ using a **singly linked list**. A queue follows the **First-In, First-Out (FIFO)** principle, meaning the first element inserted into the queue is the first one removed.

Using a linked list allows the queue to grow dynamically without requiring a fixed size.

---

## Features

- Dynamic memory allocation
- Enqueue (Insert)
- Dequeue (Remove)
- View the front element
- Check if the queue is empty
- Get the number of elements
- Display all queue elements
- Clear the queue
- Proper memory management using a destructor
- Exception handling for invalid operations

---

## Queue Operations

| Function | Description | Time Complexity |
|----------|-------------|-----------------|
| `enqueue()` | Adds an element to the rear of the queue | **O(1)** |
| `dequeue()` | Removes the front element | **O(1)** |
| `front()` | Returns the front element | **O(1)** |
| `isEmpty()` | Checks whether the queue is empty | **O(1)** |
| `size()` | Returns the number of elements | **O(1)** |
| `display()` | Displays all elements | **O(n)** |
| `clear()` | Removes all elements | **O(n)** |

---

## Data Structure

Each node contains:

- Data
- Pointer to the next node

```
+------+      +------+      +------+
| 10 | *----->| 20 | *----->| 30 | nullptr
+------+      +------+      +------+
   ^
 Front                          Rear
```

The queue maintains two pointers:

- **Front** – Points to the first node.
- **Rear** – Points to the last node.

---

## Advantages of a Linked List Queue

- Dynamic size
- No predefined capacity
- Constant-time insertion and removal
- Efficient memory usage
- No shifting of elements

---

## Disadvantages

- Requires extra memory for pointers
- Slightly slower than arrays due to pointer traversal and dynamic allocation
- More complex implementation than an array-based queue

---

## Example

```cpp
Queue<int> q;

q.enqueue(10);
q.enqueue(20);
q.enqueue(30);

std::cout << q.front() << std::endl;   // 10

q.dequeue();

std::cout << q.front() << std::endl;   // 20
```

---

## Exception Handling

The queue should throw exceptions when an invalid operation is attempted.

Example:

- Calling `dequeue()` on an empty queue
- Calling `front()` on an empty queue

```cpp
try
{
    q.dequeue();
}
catch(const QueueException& e)
{
    std::cout << e.what() << std::endl;
}
```

---

## Applications of Queues

Queues are commonly used in:

- CPU scheduling
- Printer job management
- Task scheduling
- Breadth-First Search (BFS)
- Network packet processing
- Customer service systems
- Simulation software

---

## Project Files

```
Queue.h
Node.h
main.cpp
README.md
```

---

## Learning Objectives

After completing this project, students should be able to:

- Understand the FIFO principle.
- Implement a queue using linked lists.
- Dynamically allocate and deallocate memory.
- Manipulate pointers safely.
- Analyze queue operation time complexity.
- Apply exception handling in data structures.

---

## Complexity Analysis

| Operation | Complexity |
|-----------|------------|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Front | O(1) |
| isEmpty | O(1) |
| Size | O(1) |
| Display | O(n) |
| Clear | O(n) |

---

## Author

**Author:** *Ali Azhari*

**Course:** Data Structures (C++)

**Description:** Queue implementation using a singly linked list with dynamic memory allocation and exception handling.