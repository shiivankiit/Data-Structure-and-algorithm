#include <iostream>
using namespace std;

void extremePrint(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (i == j)
        {
            // print only 1 time.
            cout << i << " ";
            i++;
        }
        else
        {
            cout << arr[i] << " ";
            i++;
            cout << arr[j] << " ";
            j--;
        }
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    extremePrint(arr, size);
}