#include<iostream>
using namespace std;

int main(){
    //Array creation
    // int arr[10];
    //initialize
    // int crr[]={10,20,30,40,50};
    // int drr[4]={0};
    // cout<<drr[0]<<endl;
    // cout<<crr[0]<<endl;

    //Fill method in C++.
    int arr[4];
    fill(arr,arr+4,23);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3] <<endl;

    //Taking input using for loop;
    for(int i=0;i<4;i++){
        cout<<"Enter the value"<<endl;
        cin>>arr[i];
    }
    //Printing the value.
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}