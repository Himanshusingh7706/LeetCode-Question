#include <iostream>
using namespace std;

void SortColors(int *arr, int n)
{
    int zero = 0;
    int one = 0;
    int two = n - 1;
    while (one <= two)
    {
        if (arr[one] == 2)
        {
            swap(arr[one], arr[two]);
            two--;
        }
        else if (arr[one] == 0)
        {
            swap(arr[zero], arr[one]);
            one++;
            zero++;
        }
        else
        {
            one++;
        }
    }
}

int main()
{
    int n = 6;
    int arr[n] = {0, 1, 2, 0, 1, 2};
    SortColors(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Corrected to print array elements
    }
    return 0;
}