#include <iostream>
using namespace std;

void printallpair(int arr[], int size)

{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i] << "," << arr[j] << endl;
        }
    }
}
void printuparpart(int arr[], int size)
{
    int i = 0;
    int j = i + 1;
    for (j = i + 1; j < size; j++)
    {
        for (i = 0; i < j; i++)
        {
            cout << arr[j] << " " << arr[i] << endl;
        }
    }
}
void printlowerpart(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
}
pair<int, int> checktwoSum(int arr[], int size, int target)
{
    // assuming (-1,-1) as no answer found
    pair<int, int> ans = make_pair(-1, -1);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    // if you reach here you did not get a target.
    return ans;
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = 4;

    // printallpair(arr, size);
    // printuparpart(arr, size);
    //  printlowerpart(arr, size);
    pair<int, int> ans = checktwoSum(arr, size, 60);
    if (ans.first == -1 && ans.second == -1)
    {
        cout << "Pair not found" << endl;
    }
    else
    {
        cout << "Pair found " << ans.first << "," << ans.second << endl;
    }
}