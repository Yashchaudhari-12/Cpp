#include<iostream>
using namespace std;

int main()
{
    int n,max=0,temp=0;

    cout << "Enter A No :";
    cin >> n;

    while(n!=0)
    {
        temp=n%10;
        if(temp>=max)
        {
            max=temp;
        }
        n=n/10;
    }
    cout << "The Largest No is :" << max << endl;
    return 0;
}