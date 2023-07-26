#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};

class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{

    int N, M;
    cin >> N >> M;

    myStack st;
    myQueue q;

    for (int i = 0; i < N; i++)
    {
        int value;
        cin >> value;
        st.push(value);
    }

    for (int i = 0; i < M; i++)
    {
        int value;
        cin >> value;
        q.push(value);
    }

    bool sameLists = true;
    while (!st.empty() && !q.empty())
    {
        int stackValue = st.top();
        int queueValue = q.front();
        if (stackValue != queueValue)
        {
            sameLists = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (!st.empty() || !q.empty())
    {
        sameLists = false;
    }

    if (sameLists)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}