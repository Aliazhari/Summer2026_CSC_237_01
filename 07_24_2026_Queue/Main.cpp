/* *****************************************
*  Author : Ali Azhari   
*  Created On : Fri Jul 24 2026
*  File : Main.cpp
*  Description: Testing the queue
*******************************************/

#include <iostream>
#include "Queue.cpp"
using namespace std;

int main() {

Queue<int> q(4);
try {
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.dequeue();
q.display();

}
catch (QueueOverflow err) {
    cout << err.what() << endl;
}


return 0;

}

