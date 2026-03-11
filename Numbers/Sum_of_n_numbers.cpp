#include<iostream>
using namespace std;

int main()
{
    int n,i;
    int sum;
    cout << "Enter A No Till Which You Want The Sum ";
    cin >> n;

    for(i=1;i<=n;i++)
    {
      sum=i+sum;
    }
       
    cout << sum;
    return 0;
}