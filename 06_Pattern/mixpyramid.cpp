#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    //Part-I.
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row;col++)
        {
            cout<<"*";
        }
        for(int col=0;col<2*row+1;col++)
        {
            cout<<" ";
        }
        for(int col=0;col<n-row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //Part-II.
       for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }
        for(int col=0;col<2*(n-row)-1;col++)
        {
            cout<<" ";
        }
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}