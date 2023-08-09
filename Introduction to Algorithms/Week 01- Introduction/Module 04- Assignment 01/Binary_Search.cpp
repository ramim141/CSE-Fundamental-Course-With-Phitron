#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int> &arr, int k)
{
    int left = 0, right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int index = binarySearch(arr, k);
    if (index != -1)
    {
        cout << index << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}