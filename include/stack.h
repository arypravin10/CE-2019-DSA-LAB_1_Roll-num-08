#pragma once
#include "linkedlist.h"

class stack
{
public:
    virtual bool isempty() = 0;

    virtual void push(int data) = 0;
    virtual void pop() = 0;
    virtual void display() = 0;
};

class linkedliststack : public stack
{
private:
    linkedlist list;

public:
    virtual bool isempty()
    {
        return true;
    }

    virtual void push(int data)
    {
        list.add_to_Head(data);
    }

    virtual void pop()
    {
        list.removefromHead();
    }

    virtual void display()
    {
        list.traverse();
    }
};
