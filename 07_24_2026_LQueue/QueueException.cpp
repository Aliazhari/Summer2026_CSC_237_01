#ifndef QUEUEEXCEPTION_CPP
#define QUEUEEXCEPTION_CPP
/* **********************************************************
*  Author : Ali Azhari   
*  Created On : Fri Jul 24 2026
*  File : QueueException.cpp
*  Description: The QueueException class defines a simple custom 
*               exception that is thrown when an attempt is made 
*               to dequeue an element from en empty queue. 
*               It stores an error message that can be customized 
*               through its constructor, while providing a default 
*               message of "Queue Exception". 
*               The what() member function returns the error message, 
*               allowing the program to report the reason for the 
*               exception when it is caught.
*****************************************************************/
#include <string>
class QueueException {
    private:
    std::string msg;

    public:
    QueueException() {
        msg = "Queue Exception";
    }
    QueueException(std::string msg) {
        this->msg = msg;
    }
    std::string what() {
        return msg;
    }
};
#endif
