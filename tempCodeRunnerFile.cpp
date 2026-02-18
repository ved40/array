#include <iostream>
using namespace std;

void maxSubarraySum1(int arr[], int n)
{
    int maxSum = arr[0];

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum = currSum + arr[i];
            }
            cout << currSum << ",";
            maxSum = max(currSum, maxSum);
        }
        cout << "\n";
    }
    cout << "maximum subarray sum = " << maxSum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSubarraySum1(arr, n);

    return 0;
}