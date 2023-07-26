#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

 Node *linkedlist(int value)
{
    Node *newNode = new Node(value);
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void insert_At_Head(Node **head, int value)
{
    Node *newNode = linkedlist(value);
    newNode->next = *head;
    *head = newNode;
}

void insert_at_tail(Node **head, int value)
{
    Node *newNode = linkedlist(value);
    if (*head == NULL)
    {
        *head = newNode;
       
    }
    else
    {
        Node *tmp = *head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
    }

    
}


void printHeadAndTail(Node *head)
{
    if (head == nullptr)
    {
        cout << "Empty list!" << endl;
        return;
    }

    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    cout << head->value << " " << tail->value << endl;
}

int main()
{
    Node *head = NULL;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int X, value;
        cin >> X >> value; 

        if (X == 0)
        {
            insert_At_Head(&head, value);
        }
        else if (X == 1)
        {
            insert_at_tail(&head, value);
        }

        printHeadAndTail(head);
    }

    return 0;
}
