#include<iostream>
using namespace std;

void sort_array(int arr[],int n)
{
    for(int i = 1;i<n;i++)
    {
        int Key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>Key)
        {
           arr[j+1] = arr[j];
           j--;
        }
        arr[j+1] = Key;
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
    sort_array(arr,n);
}