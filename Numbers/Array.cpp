#include<iostream>
using namespace std;

int main()
{
    int n[5];
    
    cout << "Enter The Element Of Array";

    for(int i=0;i<5;i++)
    {
        cin >> n[i];
    }
    for(int i=0;i<5;i++)
    {
        cout << n[i] << " ";
    }

    return 0;
}