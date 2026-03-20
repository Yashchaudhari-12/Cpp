#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int target)
{
       int Low = 0;
       int High = n-1;
       while(Low <= High)
       {
          int mid = (Low+High)/2;

          if(arr[mid]==target)
          {
              return mid;
          }
          else if(arr[mid]<target)
          {
              Low = mid+1;
          }
          else
          {
              High = mid-1;
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
    cout << "Enter Element To Find : ";
    cin >> target;

    int elem = binary_search(arr,n,target);

    if(elem==-1)
    {
        cout << "Element Not Found ";
    }
    else 
    {
        cout << "Element Present At Index No : " << elem;
    }
    return 0;
}