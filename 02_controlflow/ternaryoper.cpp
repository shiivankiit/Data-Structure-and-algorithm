// condition ? expression_if_true : expression_if_false;

#include<iostream>
using namespace std;

int main()
{
    int age;
    cin>>age;
    (age>18)?cout<<"You can vote":cout<<"You can't vote";
    return 0;
}
