#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    cout << "Enter num1 ";
    cin >> a;
    cout << "Enter num2 ";
    cin >> b;
    cout << "Enter num3 ";
    cin >> c;

    if(a>b && a>c)
    {
        cout << a << " is greatest";
    }
    else if(b>c)
    {
        cout << b << " is greatest";
    }
    else
    {
        cout << c << " is greatest";
    }
    return 0;
}