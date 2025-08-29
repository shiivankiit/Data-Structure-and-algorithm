#include<iostream>
using namespace std;

int main(){

    //Full-pyramid.
     int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
     for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    //Inverted half-pyramid.
    for(int row=0;row<n;row++){
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        for(int col=0;col<n-row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}