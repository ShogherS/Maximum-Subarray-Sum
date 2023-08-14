int BruteMaxSubArr(int arr[], const int begin, const int end)
{
    int sum{INT_MIN};
    int size{end - begin + 1};
    int minIndex{}, maxIndex{};
    for (int i{}; i < size; ++i ) {
        int tmp{};
        for (int j{i}; j < size; ++j) {
            tmp += arr[j];
            if (tmp > sum) {
                sum = tmp;
                minIndex = i;
                maxIndex = j;
            }
        }
    }
    
    std::cout << "MIN Index: " << minIndex << " Max index: " << maxIndex << " Max Subarray sum: " << sum << std::endl;
    return sum;
}
