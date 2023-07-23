#include <iostream>
#include <string>

using namespace std;

bool containsRatul(string s) {
    size_t pos = s.find("Ratul ");
    if (pos != string::npos) {
        // Check if "Ratul" is at the beginning or followed by a space
        if (pos == 0 || s[pos - 1] == ' ') {
            return true;
        }
    }
    return false;
}

int main() {
    string input;
    getline(cin, input);

    if (containsRatul(input)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
