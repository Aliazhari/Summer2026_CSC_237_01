/* *****************************************
*  Author : Ali Azhari   
*  Created On : Fri Jul 23 2026
*  File : Main.cpp.cpp
*  Description: 
*******************************************/

#include <iostream>
#include "Stack.cpp"
using namespace std;

int main() {

Stack<int> s(4);
s.push(10);
s.push(20);
s.push(30);
s.push(40);
cout << s.toString() << endl;
// to do list

return 0;

}

