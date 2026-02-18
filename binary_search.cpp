#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0, end = n - 1;
    int target;

    cout << "Enter the element to search:\n";
    cin >> target;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            cout << mid;
            return 0;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "element not found";
    return 0;
}