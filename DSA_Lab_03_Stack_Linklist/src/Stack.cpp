#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack()
{
    Top=NULL;
}

Stack::~Stack()
{
    if(!empty())
    {
        Node* ptr=Top;
        while(Top!=NULL)
        {
            ptr=Top;
            Top=Top->nptr;
            delete ptr;
        }
    }
}

Stack::Stack(const Stack& other)
{
    Top=NULL;
    Node*curr=other.Top;
    while(curr!=NULL)
    {
        Node*ptr=new Node;
        ptr->data=curr->data;
        curr=curr->nptr;
        ptr->nptr=Top;
        Top=ptr;
    }
}

bool Stack::empty() const
{
    if(Top==NULL)
    {
        return true;
    }
    else{
        return false;
    }
}

double Stack::top() const
{
    return Top->data;
}

void Stack::print() const
{
    if(!empty())
    {
        Node*curr=Top;
        cout<<"\nTop-->";
        while(curr!=NULL)
        {
            cout<<"\t|\t"<<curr->data<<"\t|";
            curr=curr->nptr;
        }
        cout<<"\t----------------\n";
    }
    else{
        cout<<"\nStack is empty\n";
    }
}

double Stack::pop()
{
    if(!empty())
    {
        Node*curr=Top;
        Top=Top->nptr;
        return curr->data;
    }
    else{
        return ;
    }
}

void Stack::push(const double x)
{
    Node*ptr=new Node;
    ptr->data=x;
    ptr->nptr=Top;
    Top=ptr;
}

