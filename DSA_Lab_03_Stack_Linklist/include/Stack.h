#ifndef STACK_H
#define STACK_H


struct Node
{
    double data;
    Node* nptr;
};
class Stack
{
    public:
        Stack();
        virtual ~Stack();
        Stack(const Stack& other);

        bool empty() const;
        void push(const double x);
        double pop();
        double top() const;
        void print() const;

    private:
        Node* Top;
};

#endif // STACK_H
