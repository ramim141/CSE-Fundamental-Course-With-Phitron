#include <bits/stdc++.h>
using namespace std;

// struct Node
// {
//     int value;
//     Node *next;
// };
class Node
{
    public:
        int value;
        Node *next;
        Node(int value)
        {
            this->value= value;
            this->next=NULL;
        }

};

Node *linkedlist(int value)
{
    Node *newNode = new Node(value);
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

void MaxMin(Node *head, int &max, int &min)
{
    if (head == NULL)
    {

        max = INT_MIN;
        min = INT_MAX;
        return;
    }

    max = head->value;
    min = head->value;
    Node *cr = head->next;

    while (cr != NULL)
    {
        if (cr->value > max)
        {
            max = cr->value;
        }
        if (cr->value < min)
        {
            min = cr->value;
        }
        cr = cr->next;
    }
}

int main()
{

    Node *head = NULL;
    Node *end = NULL;
    int value;

   
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }

        Node *newNode = linkedlist(value);
        if (head == NULL)
        {
            head = newNode;
            end = newNode;
        }
        else
        {
            end->next = newNode;
            end = newNode;
        }
    }

    int max, min;
    MaxMin(head, max, min);

    cout << max << " " << min << endl;

    Node *cr = head;
    while (cr != NULL)
    {
        Node *tm = cr;
        cr = cr->next;
        delete tm;
    }

    return 0;
}
