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
    int search(T ref);
    void edit(int idx, T replace);
    Node<T> *getNode(int idx);
    T &operator[](int idx);
    void all();
    int size();
    bool remove(T ref);
    T pop(int idx);
};

template <typename T>
T LinkedList<T>::pop(int idx)
{
    if(head == NULL)
        return;

    Node<T> *temp = head;
    while(idx--)
        temp = temp->next;
    Node<T> *toFree = temp->next;
    temp->next = temp->next->next;
    free(toFree);
    return toFree->value;
}

template <typename T>
bool LinkedList<T>::remove(T ref)
{
    if(head == NULL)
        return false;
    if(head->next == NULL)
    {
        if(head->value == ref){
            free(head);
            head = NULL;
            return true;
        }
        return false;
    }

    Node<T> *temp = head;
    while(temp->next != NULL)
    {
        if(temp->next->value == ref)
        {
            Node<T> *toFree = temp->next;
            temp->next = temp->next->next;
            free(toFree);
            return true;
        }
    }
    return false;

}

template<typename T>
int LinkedList<T>::size()
{
    int count = 0;
    Node<T> *temp = head;
    while(temp != NULL)
        temp = temp->next; count++;
        
    return count;
}

template<typename T>
void LinkedList<T>::all()
{
    if (head == NULL)
        return;

    Node<T> *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

template<typename T>
T &LinkedList<T>::operator[](int idx)
{
    return this->getNode(idx)->value;
}

template<typename T>
int LinkedList<T>::search(T ref)
{
    Node<T> *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        if (temp->value == ref)
            return i;
        i++;
        temp = temp->next;
    }
    return -1;
}

template<typename T>
void LinkedList<T>::edit(int idx, T replace)
{
    this->getNode(idx)->value = replace;
}

template<typename T>
Node<T> *LinkedList<T>::getNode(int idx)
{
    Node<T> *temp = head;
    for (int i = 0; i < idx; i++)
        temp = temp->next;
    return temp;
}

template<typename T>
void LinkedList<T>::add(T a)
{
    if (head == NULL)
    {
        head = new Node<T>(a);
        return;
    }

    Node<T> *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new Node<T>(a);
}

template<typename T>
void LinkedList<T>::pop()
{
    if (head == NULL)
        return;

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    Node<T> *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

// template <typename T>
// int myCount(vector<T> v, T ref)
// {
//     int cnt = 0;
//     for(T x : v)
//         if(ref == x)
//             cnt++;
//     return cnt;
// }

// template <typename T>
// T maxCount(vector<T> v)
// {
//     int cntMax = 0;
//     T valMax;
//     for(T x : v)
//         if(myCount(v, x) > cntMax)
//         {
//             cntMax = myCount(v, x);
//             valMax = x;
//         }
//     return valMax;

// }

template <typename T>
T maxCount(vector<T> v)
{   


}

int main()
{
    LinkedList<string> v;
    v.add("hasan");
    v.add("amirhossein");
    cout << v.search("amirhossein") << endl;
    return 0;
}