#include<iostream>
using namespace std;

int last_occurence1(int arr[],int n,int target)
{
    int last_occurence=-1;
    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid]==target)
        {
            last_occurence=mid;
            low = mid + 1;
        }
        else if(arr[mid<target])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last_occurence;
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
    cout << "Enter Element To Check Last Occurence : ";
    cin >> target;

    int last_occurence=last_occurence1(arr,n,target);
    
    if(last_occurence==-1)
    {
        cout << "Element Not Present ";
    }
    else 
    {
        cout << "The Elements Last Occurence Is At Index No : " << last_occurence;
    }
    return 0;
}