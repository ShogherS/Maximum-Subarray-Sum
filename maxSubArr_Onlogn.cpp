int maxCrossSum(const int arr[], int begin, int mid, int end)
{
    int sumLeft{INT_MIN} , sumRight{INT_MIN}, sum{};
    for (int i{mid}; i >= begin; --i) {
        sum += arr[i];
        sumLeft < sum ? sumLeft = sum : sumLeft;
    }
    sum = 0;
    for (int j{mid + 1}; j <= end; ++j) {
        sum += arr[j];
        sumRight < sum ? sumRight = sum : sumRight;
    }

    int crosSum = sumRight + sumLeft;
    return crosSum;
}
int maxSubArrSum(const int arr[], int const begin, const int end)
{
    //base case
    if (begin == end) {
        return arr[begin];
    }
    //recursive case
    int mid = (begin + end) / 2;
    int left_sum = maxSubArrSum(arr, begin, mid);
    int right_sum = maxSubArrSum(arr, mid + 1, end);
    //progress
    int crosSum = maxCrossSum(arr, begin, mid, end);
    int maxSum = std::max(crosSum, std::max(left_sum, right_sum));
    return maxSum;
}
