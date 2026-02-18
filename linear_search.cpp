#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 5, 35, 22, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the value you are looking for\n";
    cin >> target;

    int result = linearSearch(arr, n, target);

    cout << result;

    return 0;
}