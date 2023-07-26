#include <bits/stdc++.h>
using namespace std;

pair<int, int> highestval(int N, int A[]) {
    map<int, int> mp;

    for (int i = 0; i < N; i++) {
        mp[A[i]]++;
    }

    int max_value = A[0];
    int max_count = mp[A[0]];

    for (int i = 1; i < N; i++) {
        if (mp[A[i]] > max_count || (mp[A[i]] == max_count && A[i] > max_value)) {
            max_value = A[i];
            max_count = mp[A[i]];
        }
    }

    return make_pair(max_value, max_count);
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        pair<int, int> result = highestval(N, A);
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
