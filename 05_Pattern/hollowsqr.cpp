#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the side"<<endl;
    cin>>n;


    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++)
        {
            if(row==0||row==n-1)
            {
                cout<<"* ";
            }
            else{
                // middle rows
                if(col==0||col==n-1)
                {
                    cout<<"* ";
                }
                else{
                // middle columns.
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
