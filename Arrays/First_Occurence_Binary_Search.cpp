#include<iostream>
using namespace std;

int first_occurence(int arr[],int n,int target)
{
    int low = 0;
    int high = n-1;
    int store = -1;

    while(low<=high)
    {
       int  mid = (low+high)/2;

       if(arr[mid]==target)
       {
        store = mid;
        high = mid - 1; 
       } 
       else if(arr[mid]<target)
       {
        low = mid + 1;
       }
       else
       {
        high = mid + 1;
       }
    }
    return store;
}
int main()
{
    int n,target;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Element To See Its First Occurence : ";
    cin >> target;
    int index = first_occurence(arr,n,target);

    if(index == -1)
    {
        cout << "Element Not Present";
    }
    else
    {
        cout << "Element First Occurence In The Given Array Is At Index No : " << index;
    }
    return 0;
}