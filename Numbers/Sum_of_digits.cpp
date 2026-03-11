#include<iostream>
using namespace std;

int main()
{
    int n,temp=0,sum=0;

    cout << "Enter a No :";
    cin >> n;

    while(n!=0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    cout << sum;
    return 0;
}