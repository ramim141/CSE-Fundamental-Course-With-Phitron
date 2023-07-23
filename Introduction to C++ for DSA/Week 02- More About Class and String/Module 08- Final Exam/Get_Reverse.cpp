#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int mathMarks;
    int engMarks;
};

int main()
{
    int N;
    cin >> N;

Student students[N];

for (int i = 0; i < N; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].mathMarks >> students[i].engMarks;
    }

    for (int i = N - 1; i >= 0; i--)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " "
             << students[i].mathMarks << " " << students[i].engMarks << endl;
    }

    return 0;
}
