#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int low, int high, int k)
{

    if (high < low)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (a[mid] == k)
    {
        int left = mid - 1;

        while (left >= low && a[left] == k)
        {
            left--;
        }
        if (left >= mid - 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (a[mid] < k)
    {
        high = mid+1;
    }
    else if (a[mid] > k)
    {
        low = mid-1;
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;

    int index = BinarySearch(a, 0, n - 1, k);

    if (index == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}