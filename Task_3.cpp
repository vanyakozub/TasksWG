#define N 256
#include <cstdlib>
#include <iostream>

void quicksort(int* arr, int first, int last)
{
    if (first < last)
    {
        int left = first, right = last, middle = arr[(left + right) / 2];
        do
        {
            while (arr[left] < middle) left++;
            while (arr[right] > middle) right--;
            if (left <= right)
            {
                int tmp = arr[left];
                arr[left] = arr[right];
                arr[right] = tmp;
                left++;
                right--;
            }
        } while (left <= right);
        quicksort(arr, first, right);
        quicksort(arr, left, last);
    }
}

int main()
{
   int arr[N];
   for (int i = 0; i < N; i++)
       arr[i] = rand();
   for (int i = 0; i < N; i++)
       std::cout << arr[i] << std::endl;
   quicksort(arr, 0, N - 1);
   for (int i = 0; i < N; i++)
       std::cout << arr[i] << std::endl;
}