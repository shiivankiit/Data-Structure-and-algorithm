#include<iostream>
using namespace std;

int main(){
    int grade;
    cout<<"Enter your grade"<<endl;
    cin>>grade;

    switch (grade)
    {
    case 'A':cout<<"Your marks is betwn 90 t0 100"<<endl;
    break;
    case 'B':cout<<"Your marks is betwn 80 t0 90"<<endl;
    break;
    case 'C':cout<<"Your marks is bten 70 to 80"<<endl;
    break;
    case 'D':cout<<"Your marks is between 60 to 70 "<<endl;
    break;
    default:cout<<"You failed"<<endl;
    }
    return 0;
}