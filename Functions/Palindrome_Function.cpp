#include<iostream>
using namespace std;

bool is_palindrome(int n)
{
    int og_n=n,rev=0,temp=0;
    while(n!=0)
    {
    temp=n%10;
    rev = rev*10+temp;
    n=n/10;
    }

    return og_n==rev;
}

int main()
{
    int a;

    cout << "Enter The No To Check If Its Palindrome Or Not : ";
    cin >> a;

    if(is_palindrome(a))
    {
        cout << "Palindrome";
    }
    else
    {
    cout << "Not Palindrome";
    }
    return 0;
}