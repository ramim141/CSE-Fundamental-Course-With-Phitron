#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<long long int> numbers(size);
    for(int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    vector<long long int> prefixSum(size);
    prefixSum[0] = numbers[0];

    for(int i = 1; i < size; i++) {
        prefixSum[i] = prefixSum[i-1] + numbers[i];
    }

    for(int i = size-1; i >= 0; i--) {
        cout << prefixSum[i] << " ";
    }
    cout << endl;

    return 0;
}
