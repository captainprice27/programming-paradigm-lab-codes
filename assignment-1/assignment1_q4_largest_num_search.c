#include <stdio.h>

// return largest number in arr
// n is the no. of elements in arr, give max as -inf
int largest_num_recur(int *arr, int n, int max)
{
    if (n == 0)
        return max;

    if (*arr > max) // max is a big -ve number which is generally lesser than all the inputs of array
        max = *arr; // here first i.e. 0th element of the array will be new max

    return largest_num_recur(++arr, n - 1, max);
}

void main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    //float arr[n]; if float is asked otherwise not needed

    printf("Enter Array: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Max Number: %d\n", largest_num_recur(arr, n, -6969)); // as it is %d so output will be a integer number
    //printf("Max Number: %2.lf\n", largest_num_recur(arr, n, -6969)); // as it is %d so output will be a integer number
                                                                  // if n=0 , then there is no element but we will print max which is a big -ve number
}