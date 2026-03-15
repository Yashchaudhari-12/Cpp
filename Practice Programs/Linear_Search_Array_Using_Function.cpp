#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int find)
{
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==find)
        {
           return i;
        }
    }
    return -1;
}
int main()
{
    int n,find;
    cout << "Enter Array Size : ";
    cin >> n;

    cout << "Enter Array Elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Element You Want To Search : ";
    cin >> find;

    int found = linear_search(arr,n,find);

    if(found==-1)
    {
        cout << "Element Not Present In The Array ";
    }
    else
    {
        cout << "The Element Is Found At Index No " << found;
    }
    return 0;
}