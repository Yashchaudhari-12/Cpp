#include<iostream>
using namespace std;

int pivot_search(int arr[],int n,int target)
{
    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid]==target)
        {
            return mid;
        }
        if(arr[low]<=arr[mid])
        {
            if(target<=arr[mid] && target >= arr[low])
            {  
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if(target>=arr[mid] && target <= arr[high])
            {
                low = mid + 1;
            }
            else 
            {
                high = mid - 1;
            }
        }
    }
    return -1;
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
    cout << "Enter Target : ";
    cin >> target;

    int search=pivot_search(arr,n,target);

    if(search==-1)
    {
        cout << "Element Not Present ";
    }
    else
    {
        cout << "Element Present At Index No : " << search;
    }
    return 0;
}