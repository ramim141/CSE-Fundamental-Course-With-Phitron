
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


void insert_at_tail(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void removeDuplicates(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    unordered_set<int> uniqueSet;
    Node *current = head;
    Node *previous = NULL;

    while (current != NULL)
    {
        if (uniqueSet.count(current->data) > 0)
        {
            Node *temp = current;
            previous->next = current->next;
            current = current->next;
            delete temp;
        }
        else
        {
            uniqueSet.insert(current->data);
            previous = current;
            current = current->next;
        }
    }

    set<int> sortedSet(uniqueSet.begin(), uniqueSet.end());

    for (int value : sortedSet)
    {
        cout << value << " ";
    }
}


void delete_linked_List(Node *&head)
{
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    Node *head = NULL;
    int value;

    while (cin >> value && value != -1)
    {
        insert_at_tail(head, value);
    }

    removeDuplicates(head);
    delete_linked_List(head);

    return 0;
}
