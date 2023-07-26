#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> linkedList;
    set<int> uniqueSet;

    int data;

    while (cin >> data && data != -1)
    {
        linkedList.push_back(data);
        uniqueSet.insert(data);
    }

    for (auto it = uniqueSet.begin(); it != uniqueSet.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}
