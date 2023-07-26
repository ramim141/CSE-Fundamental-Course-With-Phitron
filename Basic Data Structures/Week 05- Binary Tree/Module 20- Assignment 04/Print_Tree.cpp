#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int value;
    cin >> value;
    Node *root;
    if (value == -1)
        root = NULL;
    else
        root = new Node(value);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {

        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void ReverseTree(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    stack<Node *> s;

    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        s.push(curr);

        if (curr->right != NULL)
            q.push(curr->right);

        if (curr->left != NULL)
            q.push(curr->left);
    }

    while (!s.empty())
    {
        Node *curr = s.top();
        s.pop();

        cout << curr->value << " ";
    }
}

int main()
{

    Node *root = input_tree();
    ReverseTree(root);

    return 0;
}