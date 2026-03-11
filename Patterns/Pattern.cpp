#include<iostream>
using namespace std;

int main()
{
    int a,k=1;

    cout << "Enter No Of Rows :";
    cin >> a;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << k;
            k=k+1;
        }
        cout << endl;
    }
    return 0;
}