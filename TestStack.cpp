#include <iostream>
#include "Stack.h"

int main() {
    Stack myStack;

    // // Pushing and popping a small amount of values
    // myStack.push(10);
    // myStack.push(20);
    // myStack.push(30);

    // while (!myStack.isEmpty()) {
    //     std::cout << "Popped: " << myStack.pop() << std::endl;
    // }

    // // Pushing a lot of values onto the stack
    // for(int i = 0;i<=1000;i++){
    //     myStack.push(i);
    // }

    // while (!myStack.isEmpty()) {
    //     std::cout << "Popped: " << myStack.pop() << std::endl;
    // }

    // Popping from an empty stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    while (!myStack.isEmpty()) {
        std::cout << "Popped: " << myStack.pop() << std::endl;
    }

    myStack.pop();

    return 0;
}
