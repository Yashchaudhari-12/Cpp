#include<iostream>
using namespace std;

int ls(int arr[],int n,int a)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            return i;        
        }
    }
    return -1;
}
int main()
{
    int n,a;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Element You Want To Search : ";
    cin >> a;
    int found = ls(arr,n,a);

    if(found==-1)
    {
        cout << "Element Not In Array";
    }
    else
    {
        cout << "Element Present At Index No : " << found;
    }
    return 0;
}