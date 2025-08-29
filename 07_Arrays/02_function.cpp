#include<iostream>
using namespace std;

//-------------------------Part-1----------------------//

// void print(int arr[],int size)
// {
//     arr[1]=50;
//     return;
// }

// int main(){

//     int arr[]={10,20,30,40,50};
//     int size=5;

//     print(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


//-------------------Part-2-----------------------//
void solve(int num[],int size){
    for(int i=0;i<size;i++)
    {
        num[i]=num[i]+10;
    } 
    return; 
} 
int main(){
    int arr[4]={0};
    int size=4;
    solve(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
