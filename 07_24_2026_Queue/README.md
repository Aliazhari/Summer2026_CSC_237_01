# Queue Implementation in C++ Using an Array

A simple implementation of the **Queue** data structure in C++ using a fixed-size array. This project demonstrates the fundamental concepts of a queue and its common operations.

## Overview

A **Queue** is a linear data structure that follows the **First-In, First-Out (FIFO)** principle. The first element added to the queue is the first one to be removed.

This implementation uses a fixed-size array to store the queue elements and maintains two indices, **front** and **rear**, to keep track of the beginning and end of the queue.

## Features

- Enqueue (insert an element)
- Dequeue (remove an element)
- View the front element (`front`)
- View the rear element (`rear`)
- Check if the queue is empty
- Check if the queue is full
- Get the current size of the queue
- Display all elements in the queue

## Queue Operations

### Enqueue

Adds a new element to the rear of the queue.

**Time Complexity:** `O(1)`

---

### Dequeue

Removes the front element from the queue.

**Time Complexity:** `O(n)`

---

### Front

Returns the front element without removing it.

**Time Complexity:** `O(1)`

---

### Rear

Returns the last element in the queue without removing it.

**Time Complexity:** `O(1)`

---

### isEmpty

Returns `true` if the queue contains no elements.

**Time Complexity:** `O(1)`

---

### isFull

Returns `true` if the queue has reached its maximum capacity.

**Time Complexity:** `O(1)`

---

### Size

Returns the number of elements currently stored in the queue.

**Time Complexity:** `O(1)`

---

### Display

Prints all elements from the front of the queue to the rear.

**Time Complexity:** `O(n)`

## Data Members

| Variable | Description |
|----------|-------------|
| `arr[]` | Array used to store queue elements |
| `front` | Index of the first element |
| `rear` | Index of the last element |
| `capacity` | Maximum number of elements the queue can hold |
| `count` | Current number of elements in the queue |

## Example

```cpp
Queue q(5);

q.enqueue(10);
q.enqueue(20);
q.enqueue(30);

cout << q.front() << endl;   // 10

q.dequeue();

cout << q.front() << endl;   // 20

q.display();
```

Output

```
20
20 30
```

## How It Works

Initially, the queue is empty.

```
Front = -1
Rear  = -1

+----+----+----+----+----+
|    |    |    |    |    |
+----+----+----+----+----+
```

After enqueueing `10`, `20`, and `30`:

```
Front          Rear
  |              |
  v              v
+----+----+----+----+----+
| 10 | 20 | 30 |    |    |
+----+----+----+----+----+
```

After one `dequeue()`:

```
Front     Rear
  |         |
  v         v
+----+----+----+----+----+
| 10 | 20 | 30 |    |    |
+----+----+----+----+----+
       ^     ^
     Front  Rear
```

The logical queue now contains:

```
20 30
```

## Advantages

- Simple and easy to implement.
- Constant-time insertion and removal.
- Fast access to the front and rear elements.
- Low memory overhead.

## Limitations

- Fixed capacity.
- Cannot grow dynamically.
- May waste memory if the allocated array is much larger than the number of stored elements.

## Possible Improvements

- Implement the queue using a circular array.
- Create a generic (template) queue.
- Implement copy constructor and assignment operator.
- Add move constructor and move assignment operator.
- Add exception handling for queue overflow and underflow.
- Replace the array with a dynamically resizing array or `std::vector`.

## Project Structure

```
Queue/
│── Queue.h          // Class declaration
│── Queue.cpp        // Class implementation
│── main.cpp         // Demo program
│── README.md
```

## Compilation

Using **g++**

```bash
g++ main.cpp Queue.cpp -o queue
```

Run

```bash
./queue
```

## Concepts Demonstrated

- Classes and Objects
- Arrays
- Constructors
- Encapsulation
- Member Functions
- FIFO (First-In, First-Out)
- Basic Data Structures
- Time Complexity

## Author

**Ali Azhari**

Computer Science • C++