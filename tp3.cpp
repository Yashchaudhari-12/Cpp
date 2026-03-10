#include<iostream>
using namespace std;

int main()
{
    int n,count=0,i=0;

    cout << "Enter A No :";
    cin >> n;

    while(i<=count)
    {
        if(n % 10 != 0)
        {
            count += 1;
            n = n/10;
        }
        i++;
    }
    cout << count;
    return 0;
}