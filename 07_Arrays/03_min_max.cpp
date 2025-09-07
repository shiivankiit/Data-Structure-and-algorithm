#include<iostream>
using namespace std;

// int findmax(int arr[],int size,int max)
// {
//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//   return max;
// }
//We can also do itby using inbuilt function.

int findMax(int arr[],int size)
{
    int max_Ans=INT16_MIN;
    for(int i=0;i<size;i++){
        max_Ans=max(max_Ans,arr[i]);//max is an inbuilt function.
    }
    return max_Ans;
}
int findMin(int arr[],int size)
{
    int min_Ans=INT16_MAX;
    for(int i=0;i<size;i++)
    {
        min_Ans=min(min_Ans,arr[i]);
    }
    return min_Ans;
}

//-----------------------O's and 1's--------------------------
void findZeroOne(int brr[],int size)
{
    int zero=0;
    int one=0;
    for(int i=0;i<size;i++)
    {
        if(brr[i]==0)
        {
            zero++;
        }
        if(brr[i]==1)
        {
            one++;
        }
    }
    cout<<"Zero count is "<<zero<<endl;
    cout<<"One count is "<<one<<endl;
}
int main()
{
    int arr[7]={2,3,4,5,6,7,8};
    int brr[7]={0,1,0,1,0,0,1};
    int size=7;

    int ans=findMax(arr,size);
    int ans2=findMin(arr,size);
    findZeroOne(brr,size);
    cout<<"Min value is "<<ans2<<endl;
    cout<<"Max value is "<<ans<<endl;
}