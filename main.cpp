#include <iostream>

using namespace std;

class mystack
{
    int *data;
    int size0=100;
    int pointer;
public:
    mystack();
    mystack(int a);
    ~mystack();
    int peek();
    void pop();
    void push(int a);
    bool isEmpty();
    bool isFull();
};
mystack::mystack()
{
    cout << "constructor called\n";
    data=new int[100];
    pointer=0;
}
mystack::mystack(int a)
{
    cout << "constructor called\n";
    data=new int[a];
    pointer=0;
    size0=a;
}
mystack::~mystack()
{
    cout << "destructor called\n";
    delete data;
}
int mystack::peek()
{
    return data[pointer-1];
}
void mystack::pop()
{
    if(isEmpty())
    {
        cout << "Can't pop an empty stack\n";
        return;
    }
    cout << "Popping " << data[--pointer] << endl;
    data[pointer+1]=0;
}
bool mystack::isEmpty()
{
    return (pointer<=0);
}
bool mystack::isFull()
{
    return (pointer==size0);
}
void mystack::push(int a)
{
    if(isFull())
    {
        cout << "Can't push into a full stack\n";
        return;
    }
    cout << "Pushing " << a << '\n';
    data[pointer++]=a;
}

int main()
{
}
