#include<iostream>

using namespace std;

int main(){
    // total rows = 4;
    //every rows -> 4star;
    //row -> outer
    //col -> inner

    //outer loop -> 4 rows
    for(int i=0;i<4;i++)
    {
        //inner loop -> 4 star print
        for(int j=0;j<4;j++)
        {
            //he 1 singel column me ,1 start rakhna hai
            cout<< "* " ;
        }
        //4 star print hone ke bad come to the next line
        cout<<endl;
    }
}
