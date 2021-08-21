#pragma once
#define linkedlist_h

class Node
{
public:
    int info;
    // Node(){}
    Node() : next(nullptr) {}
    Node(int info, Node *next = nullptr) : info(info), next(next) {}
    Node *next;

    ~Node()
    {
        delete next;
    }
};

class linkedlist
{

private:
    Node *head;
    Node *tail;

public:
    linkedlist() : head(nullptr), tail(nullptr) {}

    bool isempty();
    void add_to_Head(int data);
    void add_to_Tail(int data);
    void add(int data, Node *predecessor);
    void remove(int data);
    void removefromHead();
    void removefromTail();
    void retrieve(int data, Node *outptr);
    void searchdata(int data);
    void traverse(char separator = ' ');

    ~linkedlist()
    {
        tail = nullptr;
        delete head;
    }
};