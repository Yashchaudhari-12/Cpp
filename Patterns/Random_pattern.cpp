#include<iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter No Of Rows : ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<i;j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;

}