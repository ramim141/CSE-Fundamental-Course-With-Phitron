#include <iostream>
#include <string>

using namespace std;

string replaceSubstring(string S, string X) {
    size_t pos = 0;
    while ((pos = S.find(X, pos)) != string::npos) {
        S.replace(pos, X.length(), "$");
        pos += 1; // Move to the next character to avoid infinite loop for overlapping occurrences
    }
    return S;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline character after reading T

    while (T--) {
        string S, X;
        getline(cin, S, ' '); // Read S
        getline(cin, X); // Read X
        string result = replaceSubstring(S, X);
        cout << result << endl;
    }

    return 0;
}
