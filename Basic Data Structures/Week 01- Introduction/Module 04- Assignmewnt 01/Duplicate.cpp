#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> numbers(size);
    for(int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    for(int i = 1; i < size; i++) {
        if(numbers[i] == numbers[i-1]) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
