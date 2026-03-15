#include<iostream>
using namespace std;

bool is_sorted(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;

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
    if(is_sorted(arr,n))
    {
        cout << "The Given Array Is Sorted";
    }
    else
    {
       cout << "The Given Array Is Not Sorted ";
    }
    return 0;
}