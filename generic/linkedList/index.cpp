#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Node
{
public:
    Node *next;
    T value;
    Node(T _value);
};

template <typename T>
Node<T>::Node(T _value)
{
    value = _value;
    next = NULL;
}

template <typename T>
class LinkedList
{
private:
    Node<T> *head;

public:
    LinkedList() { head = NULL; }
    void add(T a);
    void pop();
    T search(T ref);
    void edit(int idx, T replace);
    Node<T> *getNode(int idx);
    T &operator[](int idx);
    void all();
};

void LinkedList::
{
    if (head == NULL)
        return;

    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int &LinkedList::operator[](int idx)
{
    return this->getNode(idx)->value;
}

int LinkedList::search(int ref)
{
    Node *temp = head;
    int i = 0;
    while (temp->next != NULL)
    {
        if (temp->value == ref)
            return i;
        i++;
        temp = temp->next;
    }
    return -1;
}

void LinkedList::edit(int idx, int replace)
{
    this->getNode(idx)->value = replace;
}

Node *LinkedList::getNode(int idx)
{
    Node *temp = head;
    for (int i = 0; i < idx; i++)
        temp = temp->next;
    return temp;
}

void LinkedList::add(int a)
{
    if (head == NULL)
    {
        head = new Node(a);
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new Node(a);
}

void LinkedList::pop()
{
    if (head == NULL)
        return;

    if (head->next == NULL)
    {
        free(head);
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
    LinkedList test;
    test.add(12);
    test.add(13);
    test.add(1);
    test.add(2);
    test.add(9);
    test[1] = -13;
    test.all();
    return 0;
}