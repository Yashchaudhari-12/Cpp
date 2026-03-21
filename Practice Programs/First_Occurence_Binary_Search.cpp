#include<iostream>
using namespace std;

int first_occurence1(int arr[],int n,int target)
{
    int first_occurence=-1;
    int low=0;
    int high = n-1;

    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid]==target)
        {
            first_occurence=mid;
            high = mid-1;
        }
        else if(arr[mid]<target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first_occurence;
}
int main()
{
    int n,target;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Element To Check Its First Occurence : ";
    cin >> target;

    int first_occurence=first_occurence1(arr,n,target);

    if(first_occurence==-1)
    {
        cout << "Element Not Present ";
    }
    else
    {
        cout << "This Elements First Occurence In The Given Array Is At Index No : " << first_occurence;
    }
    return 0;
}