#include <bits/stdc++.h>
using namespace std;

vector<int> list_sort(vector<int> &arr)
{
    sort(arr.begin(), arr.end(), greater<int>());

    vector<int> uni_val;
    for (int num : arr)
    {
        if (uni_val.empty() || num != uni_val.back())
        {
            uni_val.push_back(num);
        }
    }

    return uni_val;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        vector<int> result = list_sort(A);
        for (int j = 0; j < result.size(); j++)
        {
            cout << result[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
