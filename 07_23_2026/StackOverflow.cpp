#ifndef STACKOVERFLOW_CPP
#define STACKOVERFLOW_CPP
#include <string>
class StackOverflow {
    private:
    std::string message;
    public: 
    StackOverflow() {
        message = "StackOverflow";
    }
    StackOverflow(std::string message) {
        this->message = message;
    }
    std::string what() {
        return message;
    }
};
#endif