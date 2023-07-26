#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    cin.ignore(); 

    queue<string> ticketLine;
    while (Q--) {
        int command;
        cin >> command;
        if (command == 0) {
            string name;
            cin >> name;
            ticketLine.push(name);
        } else if (command == 1) {
            if (!ticketLine.empty()) {
                cout << ticketLine.front() << endl;
                ticketLine.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
