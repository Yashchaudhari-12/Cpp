#include<iostream>
using namespace std;

void sort_array(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
         int  largest_index = i;
         for(int j = i+1;j<n;j++)
         {
             if(arr[j]>arr[largest_index])
             {
                largest_index = j;
             }
         }
         int temp = arr[i];
         arr[i] = arr[largest_index];
         arr[largest_index] = temp;
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