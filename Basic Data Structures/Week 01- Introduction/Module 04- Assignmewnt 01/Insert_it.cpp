#include <bits/stdc++.h>
using namespace std;

int main() {
    int sizeA, sizeB, index;
    cin >> sizeA;

    vector<int> numbersA(sizeA);
    for(int i = 0; i < sizeA; i++) {
        cin >> numbersA[i];
    }

    cin >> sizeB;

    vector<int> numbersB(sizeB);
    for(int i = 0; i < sizeB; i++) {
        cin >> numbersB[i];
    }

    cin >> index;

    numbersA.insert(numbersA.begin() + index, numbersB.begin(), numbersB.end());

    for(int i = 0; i < numbersA.size(); i++) {
        cout << numbersA[i] << " ";
    }
    cout << endl;

    return 0;
}
