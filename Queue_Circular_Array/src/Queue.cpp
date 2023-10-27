#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue(int size)
{
    values=new double[size];
    rear=-1;
    front=0;
    counter=0;
    maxsize=size;
}

Queue::~Queue()
{
    delete [] values;
}

Queue::Queue(const Queue& other)
{
    if(!other.empty())
    {
        values = new double[other.maxsize];
        rear = -1;
        front = 0;
        counter = 0;
        maxsize = other.maxsize;
        for (int i = 0; i < other.counter; i++) {
        rear = (rear + 1) % maxsize;
        int cpy = (other.front + i) % other.maxsize;
        values[rear] = other.values[cpy];
        counter++;
    }
}
}

bool Queue::empty() const
{
    if(counter==0)
    {
        return true;
    }
    else{
        return false;
    }
}

void Queue::enqueue(double x)
{
    if(full())
    {
        cout<<"Queue is full";
    }
    else{
    rear=(rear+1)% maxsize;
    values[rear]=x;
    counter++;
    }
}

double Queue::dequeue()
{
    if(full())
    {
        cout<<"Queue is full";
    }
    else{
    counter--;
    double dequeue_return=values[front];
    front=(front+1)%maxsize;
    return dequeue_return;
    }
}

void Queue::print()
{
    cout << "front -->";
    for (int i = 0; i < counter; i++) {
    if (i == 0) cout << "\t";
    else cout << "\t\t";
    cout << values[(front + i) % maxsize];
    if (i != counter - 1)
    cout << endl;
    else
    cout << "\t<-- rear" << endl;
    }
}

bool Queue::full() const
{
    if(counter<maxsize)
        return false;
        else return true;

}
