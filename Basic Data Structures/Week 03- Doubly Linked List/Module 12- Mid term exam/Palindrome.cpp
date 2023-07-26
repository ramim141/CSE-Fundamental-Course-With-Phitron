
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

void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->data = value;
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

// void insert_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     tail = newNode;
// }

bool is_Palindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }

    Node *slow = head;
    Node *fast = head;
    stack<int> stack;

    while (fast != NULL && fast->next != NULL)
    {
        stack.push(slow->data);
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast != NULL)
    {
        slow = slow->next;
    }

    while (slow != NULL)
    {
        int top = stack.top();
        stack.pop();

        if (slow->data != top)
        {
            return false;
        }

        slow = slow->next;
    }

    return true;
}

void deleteList(Node *&head)
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

    if (is_Palindrome(head))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    deleteList(head);

    return 0;
}
