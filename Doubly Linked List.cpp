#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node* prev;

    Node(int value)
    {
        this -> value = value;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head -> next = a;
    a -> prev = head;
    a -> next = tail;
    tail -> prev = a;

    return 0;
}
