#include<iostream>
using namespace std;

void rev_array(int arr[],int start,int end)
{
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void move_left(int arr[],int n,int k)
{
    rev_array(arr,0,k-1);
    rev_array(arr,k,n-1);
    rev_array(arr,0,n-1);
}

int main()
{
    int n,k;
    cout << "Enter Array Size : ";
    cin >> n;
    int arr[n];

    cout << "Enter Array Elements : ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Places : ";
    cin >> k;

    move_left(arr,n,k);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}