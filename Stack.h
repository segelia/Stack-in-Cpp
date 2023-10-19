#ifndef STACK_H
#define STACK_H

#define INITIAL_CAPACITY 10

class Stack
{
    private:
        int *data;
        int size;
        int capacity;

    public:
        Stack();
        ~Stack();

        void push(int element);
        bool isEmpty() const;
        int pop();
};

#endif
