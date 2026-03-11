#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter The No You Want The Table For ";
    cin >> n;

    cout << n << " 's Table is \n";
    for(int i=1;i<=10;i++)
    {
        cout << n << "*" << i << "=" << n*i << endl;
    }
    return 0;
}