#include<iostream>
using namespace std;

void right_rotate(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
       arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    right_rotate(arr,n);
}