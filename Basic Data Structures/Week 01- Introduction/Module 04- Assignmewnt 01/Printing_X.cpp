#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;

    for (int i = 0; i < size / 2; i++) {
        for (int j = 0; j < i; j++)
            cout << " ";
        cout << "\\";
        for (int j = 0; j < size - 2 * i - 2; j++)
            cout << " ";
        cout << "/" << endl;
    }

    for (int i = 0; i < size / 2; i++)
        cout << " ";
    cout << "X" << endl;

    for (int i = size / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++)
            cout << " ";
        cout << "/";
        for (int j = 0; j < size - 2 * i - 2; j++)
            cout << " ";
        cout << "\\" << endl;
    }

    return 0;
}
