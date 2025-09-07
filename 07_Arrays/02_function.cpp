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
bool findTarget(int arr[],int size,int target){
    //traverse the enitre array.
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            //found
            return true;
        }
    }
    //If you reached to the last line you did not found the target
    return false;
}
int main(){
    int arr[4]={10,20,30,40};
    int size=4;
    int target=30;
    solve(arr,size);
    int ans=findTarget(arr,size,target);
    cout<<"ans:"<<ans<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}




