#ifndef QUEUEOVERFLOW_CPP
#define QUEUEOVERFLOW_CPP
/* **********************************************************
*  Author : Ali Azhari   
*  Created On : Fri Jul 24 2026
*  File : StackOverflow.cpp
*  Description: The QueueOverflow class defines a simple custom 
*               exception that is thrown when an attempt is made 
*               to enqueue an element onto a full queue. 
*               It stores an error message that can be customized 
*               through its constructor, while providing a default 
*               message of "QueueOverflow". 
*               The what() member function returns the error message, 
*               allowing the program to report the reason for the 
*               exception when it is caught.
*****************************************************************/

#include <string>
class QueueOverflow {
    private:
        std::string msg;
    public:
        QueueOverflow(){
            msg = "QueueOverflow";
        } 

        QueueOverflow(std::string msg) {
            this->msg = msg;
        }
        std::string what() {
            return msg;
        }
};
#endif