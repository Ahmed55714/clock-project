#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>
using namespace std;
const int max_size = 100;
class Stack
{
    int top;
    int item[max_size];

public:
    Stack() : top(-1) {}
    void push(int elemant)
    {
        if (top >= max_size - 1)
        {
            cout << "Stack full on push";
        }
        else
        {
            top++;
            item[top] = elemant;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return top < 0;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack empty on pop";
        }
        else
        {
            top--;
        }
    }
    void pop(int &elemant)
    {
        if (isEmpty())
        {
            cout << "Stack empty on pop";
        }
        else
        {
            elemant = item[top];
            top--;
        }
    }
    void getTop(int&stackTop)
    {
        if (isEmpty())
        {
            cout << "Stack empty on getTop";
        }
        else
        {
            stackTop = item[top];
            //cout << stackTop << endl;
        }
    }
    void print()
    {
        cout<<"[";
        for (int i = top; i >= 0; i--)
        {
            cout<<item[i]<<" ";
        }
        cout<<"]";
        cout<<endl;
        
    }
};
int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.pop();
    s.push(7);
    s.print();
    //int y=0;
    //s.getTop(y);
    //cout<<y<<endl;
    

    return 0;
}