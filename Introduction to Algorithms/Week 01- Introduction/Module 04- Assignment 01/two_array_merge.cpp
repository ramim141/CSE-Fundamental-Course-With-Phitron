#include <bits/stdc++.h>
using namespace std;

void merge(int mergearr[], int arr1[], int n1, int arr2[], int n2)
{
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] >= arr2[j])
        {
            mergearr[k++] = arr1[i++];
        }
        else
        {
            mergearr[k++] = arr2[j++];
        }
    }

    while (i < n1)
    {
        mergearr[k++] = arr1[i++];
    }

    while (j < n2)
    {
        mergearr[k++] = arr2[j++];
    }
}

void mergeSort(int arr[], int n)
{
    if (n <= 1)
    {
        return;
    }

    int mid = n / 2;
    int *left = new int[mid];
    int *right = new int[n - mid];

    for (int i = 0; i < mid; ++i)
    {
        left[i] = arr[i];
    }

    for (int i = mid; i < n; ++i)
    {
        right[i - mid] = arr[i];
    }

    mergeSort(left, mid);
    mergeSort(right, n - mid);

    merge(arr, left, mid, right, n - mid);

    // delete[] left;
    // delete[] right;
}

int main()
{
    int n1, n2;
    cin >> n1;

    int *arr1 = new int[n1];
    for (int i = 0; i < n1; ++i)
    {
        cin >> arr1[i];
    }

    cin >> n2;

    int *arr2 = new int[n2];
    for (int i = 0; i < n2; ++i)
    {
        cin >> arr2[i];
    }

    int *mergearr = new int[n1 + n2];
    merge(mergearr, arr1, n1, arr2, n2);

    mergeSort(mergearr, n1 + n2);

    for (int i = 0; i < n1 + n2; ++i)
    {
        cout << mergearr[i] << " ";
    }
    cout << endl;

    // delete[] arr1;
    // delete[] arr2;
    // delete[] mergearr;

    return 0;
}
