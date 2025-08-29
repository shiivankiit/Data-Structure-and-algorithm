#include<iostream>
using namespace std;

//rectangel 
int main()
{
   int length,width;
   cout<<"Enter length"<<endl;
   cin>>length;
   cout<<"Enter width"<<endl;
   cin>>width;
   //outer
   for(int row=0;row<length;row++){
    //inner
    for(int col=0;col<width;col++){
        cout<<"* ";
    }
    cout<<endl;
   }
   return 0; //primarily signifies a successful program execution
}