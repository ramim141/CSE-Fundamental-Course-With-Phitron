#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        stack<char> v;

        for (char ch : s) {
            if (ch == 'A') {
                if (!v.empty() && v.top() == 'B') {
                    v.pop();
                } else {
                   v.push(ch);
                }
            } else if (ch == 'B') {
                if (!v.empty() && v.top() == 'A') {
                    v.pop();
                } else {
                    v.push(ch);
                }
            }
        }

        if (v.empty()) {
            cout << "YES" << endl;
        } else {
           cout << "NO" << endl;
        }
    }

    return 0;
}
