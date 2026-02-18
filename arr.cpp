#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size\n";
    cin >> n;

    int arr[n];

    cout << "Enter array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "array elements are\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}