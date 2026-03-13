#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int sum = add(5,3);
    cout << sum << endl;

    cout << add(10,20);
}