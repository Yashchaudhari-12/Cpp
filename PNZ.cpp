#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a No ";
    cin >> a;

    if(a>0)
    {
        cout << "No is Positive";
    }
    else if(a<0)
    {
        cout << "No is Negative";
    }
    else
    {
        cout << "No is Zero";
    }
    return 0;
}