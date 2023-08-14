int maxSubArrSum(int arr[], const int size)
{
    int end_here{}, max_so_far{INT_MIN};
    for (int i{}; i < size; ++i) {
        end_here +=arr[i];
        max_so_far < end_here ? max_so_far = end_here : max_so_far;
        end_here < 0 ? end_here = 0: end_here;
   }
   return max_so_far;
}
