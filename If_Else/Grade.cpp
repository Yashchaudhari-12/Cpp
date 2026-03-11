#include<iostream>
using namespace std;

int main()
{
    float marks;

    cout << "Enter Marks of Student ";
    cin >> marks;
 
    if(marks>=95)
    {
        cout << "A+";
    }
    else if(marks>=90)
    {
        cout << 'A';
    }
    else if(marks>=75)
    {
        cout << 'B';
    }
    else if(marks>=50)
    {
        cout << 'C';
    }
    else
    {
        cout << "Fail";
    }
    return 0;
}