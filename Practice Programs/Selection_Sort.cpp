#include<iostream>
using namespace std;

void sort_array(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
       int  min_index = i;
       for(int j=i+1;j<n;j++)
       {
        if(arr[j]<arr[min_index])
        {
             min_index = j;
        }
       }
       int temp = arr[i];
       arr[i] = arr[min_index];
       arr[min_index] = temp;
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
    return 0;

}