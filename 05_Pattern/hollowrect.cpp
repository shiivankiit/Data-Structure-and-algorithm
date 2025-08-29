#include<iostream>
using namespace std;

int main()
{
    int length,width;
    cout<<"Enter the length"<<endl;
    cin>>length;
    cout<<"Enter the width"<<endl;
    cin>>width;

    for(int row=0;row<length;row++){
        for(int col=0;col<width;col++)
        {
            if(row==0||row==length-1)
            {
                cout<<"* ";
            }
            else
            {
                if(col==0||col==width-1)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}