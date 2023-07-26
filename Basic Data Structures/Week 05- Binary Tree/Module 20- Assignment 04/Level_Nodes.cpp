#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node*> q;
    if (root)
        q.push(root);
    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
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

void printNodesInLevel(Node* root, int X) {
    if (root == NULL) {
        cout << "Invalid" << endl;
        return;
    }

    queue<Node*> Q;
    Q.push(root);
    int currl = 0;
    int count = 1;

    while (!Q.empty()) {
        if (currl == X) {
            for (int i = 0; i < count; i++) {
                Node* node = Q.front();
                Q.pop();
                cout << node->val << " ";
            }
            cout << endl;
            return;
        }

        for (int i = 0; i < count; i++) {
            Node* node = Q.front();
            Q.pop();
            if (node->left)
                Q.push(node->left);
            if (node->right)
                Q.push(node->right);
        }

        count = Q.size();
        currl++;
    }

    cout << "Invalid" << endl;
}

int main() {
    Node* root = input_tree();
    int X;
    cin >> X;
    printNodesInLevel(root, X);
    return 0;
}
