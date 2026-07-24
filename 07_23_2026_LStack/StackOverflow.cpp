#ifndef STACKOVERFLOW_CPP
#define STACKOVERFLOW_CPP
/* **********************************************************
*  Author : Ali Azhari   
*  Created On : Thu Jul 23 2026
*  File : StackOverflow.cpp
*  Description: The StackOverflow class defines a simple custom 
*               exception that is thrown when an attempt is made 
*               to push an element onto a full stack. 
*               It stores an error message that can be customized 
*               through its constructor, while providing a default 
*               message of "StackOverflow". 
*               The what() member function returns the error message, 
*               allowing the program to report the reason for the 
*               exception when it is caught.
*****************************************************************/

#include <string>
class StackOverflow {
    private:
        std::string msg;
    public:
        StackOverflow(){
            msg = "StackOverflow";
        } 

        StackOverflow(std::string msg) {
            this->msg = msg;
        }
        std::string what() {
            return msg;
        }
};
#endif

