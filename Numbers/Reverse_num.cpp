#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter  Number To Reverse :";
    cin >> n;

    while(n != 0)
    {
        int a = n % 10;
        cout << a;
        n = n / 10;
    }
    return 0;

}