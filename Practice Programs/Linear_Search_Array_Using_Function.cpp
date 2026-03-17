#include<iostream>
using namespace std;

int index(int arr[],int n,int target)
{

    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,find=0;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Element You Want To Find : ";
    cin >> find;
    int found=index(arr,n,find);
    if(found==-1)
    {
       cout << "Element Not Present In The Array ";
    }
    else
    {
       cout << "The Element Is Present At Index No : " << found;
    }
    return 0;
}