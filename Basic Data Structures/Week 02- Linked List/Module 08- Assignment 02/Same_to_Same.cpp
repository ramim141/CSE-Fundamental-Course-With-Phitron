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

bool LinkedlistSame(Node *head1, Node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->value != head2->value)
            return false;

        head1 = head1->next;
        head2 = head2->next;
    }

    if (head1 == NULL && head2 == NULL)
        return true;

    return false;
}

int main()
{

    Node *head1 = NULL;
    Node *end1 = NULL;
    int value;

    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }

        Node *newNode = linkedlist(value);
        if (head1 == nullptr)
        {
            head1 = newNode;
            end1 = newNode;
        }
        else
        {
            end1->next = newNode;
            end1 = newNode;
        }
    }

    Node *head2 = NULL;
    Node *end2 = NULL;

    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }

        Node *newNode = linkedlist(value);
        if (head2 == nullptr)
        {
            head2 = newNode;
            end2 = newNode;
        }
        else
        {
            end2->next = newNode;
            end2 = newNode;
        }
    }

    bool sameLists = LinkedlistSame(head1, head2);

    if (sameLists)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    Node *cr = head1;
    while (cr != NULL)
    {
        Node *temp = cr;
        cr = cr->next;
        delete temp;8
    }

    cr = head2;
    while (cr != NULL)
    {
        Node *temp = cr;
        cr = cr->next;
        delete temp;
    }

    return 0;
}