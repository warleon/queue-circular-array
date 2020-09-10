#include "queue-array.cpp"

using namespace std;

int main(){
    Queue myqueue(10);

    for(int i=0;i<10;i++)
        myqueue.enqueue(i);

    myqueue.display();

    for(int i=0;i<5;i++)
        myqueue.dequeue();

    myqueue.display();

    for(int i=0;i<10;i++)
        myqueue.enqueue(i);

    myqueue.display();
    return 0;
}
