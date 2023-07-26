#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Doubly_Linked_List {
private:
    Node* head;
    Node* tail;

public:
    Doubly_Linked_List() {
        head = NULL;
        tail = NULL;
    }

    void insert(int index, int value) {
        Node* newNode = new Node(value);
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL) {
            if (index == 0) {
                head = newNode;
                tail = newNode;
            } else {
                cout << "Invalid" << endl;
                return;
            }
        } else {
            if (index == 0) {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            } else {
                Node* cr = head;
                int crIndex = 0;

                while (cr != NULL && crIndex < index - 1) {
                   cr = cr->next;
                    crIndex++;
                }

                if (cr == NULL) {
                    cout << "Invalid" << endl;
                    return;
                }

                newNode->prev = cr;
                newNode->next = cr->next;

                if (cr->next != NULL)
                   cr->next->prev = newNode;

                cr->next = newNode;

                if (newNode->next == NULL)
                    tail = newNode;
            }
        }

        printLinkedList();
    }

    void printLinkedList() {
        if (head == NULL) {
            cout << "Invalid" << endl;
            return;
        }

        Node* cr = head;

        cout << "L -> ";
        while (cr != NULL) {
            cout << cr->data << " ";
            cr = cr->next;
        }
        cout << endl;

        cr = tail;
        cout << "R -> ";
        while (cr != NULL) {
            cout << cr->data << " ";
            cr = cr->prev;
        }
        cout << endl;
    }
};

int main() {
    int Q;
    cin >> Q;

    Doubly_Linked_List list;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        list.insert(X, V);
    }

    return 0;
}
