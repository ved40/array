#include <iostream>
using namespace std;

void maxSubarraySum2(int arr[], int n)
{
    int maxSum = arr[0];

    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum = currSum + arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "max subarray sum is:" << maxSum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSubarraySum2(arr, n);

    return 0;
}