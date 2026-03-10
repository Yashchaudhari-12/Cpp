#include<iostream>
using namespace std;

int main()
{
    int a;
    int count = 0,i=0;

    cout << "Enter A No :";
    cin >> a;

    while(i<=count)
    {
        if(a % 10 != 0)
        {
            count += 1;
            a= a / 10;
        }
        i++;
    }

    cout << count;
    return 0;


}