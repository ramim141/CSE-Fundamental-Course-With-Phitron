#include <bits/stdc++.h>
using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;

    while(numTestCases--) {
        int size;
        cin >> size;

        vector<int> numbers(size);
        for(int i = 0; i < size; i++) {
            cin >> numbers[i];
        }

        bool isSorted = true;
        for(int i = 1; i < size; i++) {
            if(numbers[i] < numbers[i-1]) {
                isSorted = false;
                break;
            }
        }

        if(isSorted) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
