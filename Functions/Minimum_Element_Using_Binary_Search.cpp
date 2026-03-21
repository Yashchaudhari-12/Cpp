#include<iostream>
#include<climits>
using namespace std;

int min_elem(int arr[],int n)
{
    int low = 0;
    int high = n-1;

    while(low<high)
    {
        int mid = (low+high)/2;

        if(arr[mid]>arr[high])
        {
            low = mid+1;
        }
        else
        {
            high = mid;
        }
    }
    return arr[low];
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
    int min=min_elem(arr,n);

    cout << "The Smallest Element In The Given Array Is : " << min;
    return 0;
}