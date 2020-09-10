#pragma once 

typedef unsigned int uint;

class Queue{
    int* data;
    int* head;
    int* tail;
    int offset;
    int capacity;
    int size;
public:
    Queue(uint);
    ~Queue();
    void enqueue(int);
    int dequeue();
    void display();
    void resize(uint);
    
};
