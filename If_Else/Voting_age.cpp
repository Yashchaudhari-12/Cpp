#include<iostream>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter Your Name ";
    cin >> name;

    cout << "Enter Your Age ";
    cin >> age;

    if(age>=18)
    {
        cout << name << " Is Eligible To Vote ";
    }
    else
    {
        cout << name << " Is Not Eligible To Vote ";
    }
    return 0;
}