# Stack Implementation in C++ Using an Array

A simple implementation of the **Stack** data structure in C++ using a fixed-size array. This project demonstrates the fundamental concepts of a stack and its common operations.

## Overview

A **Stack** is a linear data structure that follows the **Last-In, First-Out (LIFO)** principle. The last element added to the stack is the first one to be removed.

This implementation uses a fixed-size array to store the stack elements and maintains an index (`top`) to keep track of the current top of the stack.

## Features

- Push an element onto the stack
- Pop the top element
- View the top element (`peek`)
- Check if the stack is empty
- Check if the stack is full
- Get the current size of the stack (returns top)
- Print all elements in the stack

## Stack Operations

### Push

Adds a new element to the top of the stack.

**Time Complexity:** `O(1)`

---

### Pop

Removes the top element from the stack.

**Time Complexity:** `O(1)`

---

### Peek (Top)

Returns the top element without removing it.

**Time Complexity:** `O(1)`

---

### isEmpty

Returns `true` if the stack contains no elements.

**Time Complexity:** `O(1)`

---

### isFull

Returns `true` if the stack has reached its maximum capacity.

**Time Complexity:** `O(1)`

---

### getTop

Returns the number of elements currently stored in the stack.

**Time Complexity:** `O(1)`

---

### Print

Prints all elements from the bottom of the stack to the top.

**Time Complexity:** `O(n)`

## Data Members

| Variable | Description |
|----------|-------------|
| `elements[]` | Array used to store stack elements |
| `top` | Index of the top element |
| `capacity` | Maximum number of elements the stack can hold |

## Example

```cpp
Stack s(5);

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
20
10 20
```

## How It Works

Initially, the stack is empty and `top` is initialized to `-1`.

```
Top = -1

+----+
|    |
+----+
```

After pushing several values:

```
Top = 2

+----+
| 30 | <- Top
+----+
| 20 |
+----+
| 10 |
+----+
```

After one `pop()`:

```
Top = 1

+----+
|    |
+----+
| 20 | <- Top
+----+
| 10 |
+----+
```

## Advantages

- Simple and easy to understand.
- Constant-time insertion and deletion.
- Low memory overhead.
- Excellent for learning stack fundamentals.

## Limitations

- Fixed capacity.
- Cannot grow dynamically.
- May waste memory if the allocated array is much larger than the number of stored elements.

## Possible Improvements

- Implement the stack using dynamic memory.
- Create a generic (template) stack.
- Implement copy constructor and assignment operator.
- Add move constructor and move assignment operator.
- Add exception handling for stack overflow and underflow.
- Replace the array with a dynamically resizing array or `std::vector`.

## Project Structure

```
Stack/
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
- Constructors
- Arrays
- Encapsulation
- Member Functions
- Time Complexity
- LIFO (Last-In, First-Out)
- Basic Data Structures

## Author

**Ali Azhari**

Computer Science • C++