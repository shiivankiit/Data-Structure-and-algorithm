#include<iostream>
using namespace std;

int main(){

    int budget;
    cout<<"Enter your budget"<<endl;
    cin>>budget;
    if(budget>200000)
    {
        cout<<"You can buy scorpio"<<endl;
    }
    else
    {
        cout<<"You can not buy scorpio"<<endl;
    }
    return 0;
}

// if-else if block:-for checking multiple condition.

#include<iostream>
using namespace std;

int main(){
    int marks=85;
    if(marks>90){
        cout<<"A";
    }
    else if(marks>80){
        cout<<"B";
    }
    else if(marks>70)
    {
        cout<<"C";
    }
    else if(marks>60)
    {
        cout<<"D";
    }

    return 0;
}

//Nested if

#include<iostream>
using namespace std;

int main()
{
    int height;
    cout<<"Enter your height"<<endl;
    cin>>height;

    int weight;
    cout<<"Enter your weight"<<endl;
    cin>>weight;

    if(height>5)
    {
        if(weight>70)
        {
            cout<<"Good bmi"<<endl;
        }
        else
        {
            cout<<"Required good diet"<<endl;
        }
    }
    else{
        cout<<"Complain dil du"<<endl;
    }
    return 0;
}