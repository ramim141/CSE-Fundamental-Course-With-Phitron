#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int mathMarks;
    int engMarks;
    int totalMarks;
};

bool cmp(Student s1, Student s2)
{
    if (s1.totalMarks != s2.totalMarks)
    {
        return s1.totalMarks > s2.totalMarks;
    }
    else
    {
        return s1.id < s2.id;
    }
}

int main()
{
    int N;
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].mathMarks >> students[i].engMarks;
        students[i].totalMarks = students[i].mathMarks + students[i].engMarks;
    }

    sort(students, students + N, cmp);

    for (int i = 0; i < N; i++)
    {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " "
             << students[i].id << " " << students[i].mathMarks << " " << students[i].engMarks << endl;
    }

    return 0;
}
