#include "linkedlist.h"
#include <iostream>

bool linkedlist::isempty()
{

    return head == nullptr;
}

void linkedlist::add_to_Head(int data)
{

    Node *newnode = new Node();
    newnode->info = data;
    newnode->next = head;
    head = newnode;

    if (tail == nullptr)
    {
        tail = head;
    }
}

void linkedlist::add_to_Tail(int data)
{

    if (tail == nullptr)
    {
        add_to_Head(data);
    }

    Node *newnode = new Node();
    newnode->info = data;
    newnode->next = nullptr;
    tail->next = newnode;
    tail = tail->next;
}

void linkedlist::add(int data, Node *predecessor)
{
    Node *newnode = new Node();
    newnode->info = data;
    newnode->next = predecessor->next;
    predecessor->next = newnode;
}

void linkedlist::removefromHead()
{

    if (head != nullptr)
    {
        Node *node_to_delete = head;

        head = node_to_delete->next;
        node_to_delete->next = nullptr;
        delete node_to_delete;
    }

    else if (head == nullptr)
    {
        std::cout << "No data in the list" << std::endl;
    }
}

void linkedlist::removefromTail()
{

    Node *node_to_delete = tail;

    if (head == tail)
    {
        delete head;
        head = tail = nullptr;
    }

    else
    {

        Node *pred;
        pred = head;
        while (pred->next != tail)
        {
            pred = pred->next;
        }
        tail = pred;
        pred->next = nullptr;
        delete node_to_delete;
    }
}

void linkedlist::retrieve(int data, Node *outptr)
{

    Node *p = head;

    while (p != nullptr)
    {
        if (p->info == data)
        {

            outptr->info = p->info;
            return;
        }
        p = p->next;
    }
}

void linkedlist::searchdata(int data)
{

    bool found = false;

    Node *temp = head;

    while (temp != nullptr)
    {
        if (temp->info == data)
        {
            found = true;
        }

        temp = temp->next;
    }
    if (found == true)
    {
        std::cout << "Data founded" << std::endl;
    }

    else
    {
        std::cout << "Data not founded" << std::endl;
    }
}

void linkedlist::traverse(char separator)
{

    if (head == nullptr)
    {
        std::cout << "List is empty" << std::endl;
    }

    else
    {

        Node *p;
        p = head;

        while (p != nullptr)
        {
            std::cout << p->info << separator;
            p = p->next;
        }
        std::cout << std::endl;
    }
}

void linkedlist::remove(int data)
{

    if (head == nullptr)
    {

        std::cout << "Nothing to display...no list" << std::endl;
    }

    else
    {
        // if the deletion node is the first node.....
        if (head->info == data)
        {
            Node *newnode = head;
            head = head->next;
            delete newnode;
        }
        // if the deletion node is from the middle of the nodes...
        else
        {
            Node *newnode = head->next;
            Node *prev = head;
            while (newnode != nullptr)
            {
                {
                    if (newnode->info == data)
                    {
                        prev->next = newnode->next;
                        delete newnode;
                    }
                    prev = newnode;
                    newnode = newnode->next;
                }
            }
        }
    }
}
