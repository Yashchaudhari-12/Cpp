#include<iostream>
using namespace std;

int main()
{
    int n,temp,rev=0,a=0;

    cout << "Enter a No :";
    cin >> n;

    a=n;

    while(n!=0)
    {
        temp=n%10;
        rev=rev*10+temp;

        n=n/10;
    }
    if(a==rev)
    {
        cout << "It is a Palindrome " << endl;
    }
    else
    {
        cout << "It is not a Palindrome " << endl;
    }

    cout << rev;
    return 0;
}