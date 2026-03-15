#include<iostream>
using namespace std;

void move_zero(int arr[],int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
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

    move_zero(arr,n);
}