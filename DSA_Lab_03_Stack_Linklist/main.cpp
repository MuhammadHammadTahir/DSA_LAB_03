#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack stack;
    stack.push(5.0);
    stack.push(6.5);
    stack.push(-3.0);
    stack.push(-8.0);
    stack.print();
    cout << "Top: " << stack.top() << endl;
    stack.pop();
    cout << "Top: " << stack.top() << endl;
    while (!stack.empty()) stack.pop();
    stack.print();
    return 0;
}
