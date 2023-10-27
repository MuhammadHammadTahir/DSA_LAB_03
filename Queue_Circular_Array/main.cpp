#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    Queue queue_1;
    cout<<"Enter the 5 values to enqueue : ";
    for(int i=0;i<5;i++)
    {
        queue_1.enqueue(i);
    }
    cout<<"\nNow attempting to enqueue another element again...."<<endl;
    queue_1.enqueue(5);
    queue_1.print();
    double value;
    value=queue_1.dequeue();
    cout<<"Retrieved element = "<<value<<endl;
    queue_1.enqueue(7);
    queue_1.print();
    Queue queue_2(queue_1);
    queue_2.print();
    return 0;
}
