#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    // reverse the array.
    int i = 0;        // start index
    int j = size - 1; // end index
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}