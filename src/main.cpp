#include <iostream>
#include "linkedlist.h"
#include "stack.h"
#include "queue.h"
using namespace std;

int main()
{

    linkedlist list;

    list.remove(2);
    list.removefromHead();
    list.traverse(',');
    list.add_to_Head(5);
    list.traverse(',');
    list.add_to_Head(6);
    list.traverse(',');
    list.removefromHead();
    list.add_to_Head(7);
    list.traverse(',');
    list.add_to_Tail(3);
    list.traverse(',');
    list.removefromHead();
    list.traverse(',');
    list.removefromTail();

    list.add_to_Head(10);
    list.traverse(',');
    list.add_to_Head(14);
    list.add_to_Head(18);
    list.add_to_Head(22);
    list.removefromTail();
    list.traverse(',');
    Node node;
    list.retrieve(22, &node);
    std::cout << node.info << std::endl;

    list.searchdata(45);
    list.searchdata(14);

    cout << std::endl;

    std::cout << "Stack impementation of linked list" << std::endl;

    linkedliststack s;
    s.push(10);
    std::cout << "output after push is:" << std::endl;
    s.display();
    s.push(5);
    std::cout << "output after push is:" << std::endl;
    s.display();
    s.pop();
    std::cout << "output after pop is:" << std::endl;
    s.display();
    s.push(6);
    std::cout << "output after push is:" << std::endl;
    s.display();

    cout << std::endl;

    linkedlistqueue q;

    std::cout << "Queue implementation of linked list" << std::endl;

    q.push(10);
    std::cout << "output after enqueue is:" << std::endl;
    q.display();
    q.push(5);
    std::cout << "output after enqueue is:" << std::endl;
    q.display();
    q.pop();
    std::cout << "output after dequeue is:" << std::endl;
    q.display();
    q.push(6);
    std::cout << "output after enqueue is:" << std::endl;
    q.display();
    q.pop();
    std::cout << "output after dequeue is:" << std::endl;
    q.display();
}