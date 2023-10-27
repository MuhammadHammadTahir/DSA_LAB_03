#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
    public:
        Queue(int size=10);
        Queue(const Queue& other);
        virtual ~Queue();
        bool empty() const;
        void enqueue(double x);
        double dequeue();
        void print();
        bool full() const;

    private:
        double* values;     //address of the arry
        int rear;       //rear index
        int front;      //front index
        int counter;    //number of elements
        int maxsize;    //size of array queue
};

#endif // QUEUE_H
