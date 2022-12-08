#include <bits/stdc++.h>

using namespace std;

class Node
{
private:
    int value;

public:
    Node *next;
    Node(int _value)
    {
        value = _value;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList();
    void add(int a);
    void pop();
};

void LinkedList::add(int a)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = (new Node(a));
}

void LinkedList::pop()
{
    if (head == NULL)
        return;
    if (head->next = NULL)
    {
        head = NULL;
        return;
    }

    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

int main()
{

    return 0;
}