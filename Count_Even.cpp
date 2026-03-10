#include<iostream>
using namespace std;

int main()
{
    int n,count=0;

    cout << "Enter The Number Till Which You Want The Count For Even No ";
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            count += 1;
        }
    }
    cout << count;
    return 0;
}