#include "queue-array.h"
#include <iostream>

Queue::Queue(uint cap):data(new int[cap]),capacity(cap),size(0){
    head=data;
    tail=data;
}
Queue::~Queue(){
    delete[] data;
    data=nullptr;
    head=nullptr;
    tail=nullptr;
}
void Queue::enqueue(int n){
    if(size>=capacity)
        resize(2*size);
    *tail=n;
    size++;
    tail= &data[(offset+size)%capacity];
}
int Queue::dequeue(){
    int val=*head;
    head=&data[++offset%capacity];
    size--;
    offset%=capacity;
    
    return val;
}
void Queue::display(){
    for(int i=0;i<size;i++)
        std::cout<<data[(offset+i)%capacity]<<" ";
    std::cout<<"\n";
}
void Queue::resize(uint nsize){
    int* ndata= new int[nsize];

    for(uint i=0;i<size;i++)
        ndata[i]=data[(offset+i)%capacity];
    delete[] data;
    data=ndata;

    capacity=nsize;
    
    head=data;
    tail=data+size;
    offset=0;
}
