#include<iostream>
using namespace std;

int max_difference(int arr[],int n)
{
    int max_diff=0;
    int smallest=arr[0];
    int small_index=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
            small_index=i;
        }
    }
    int largest=arr[small_index];
    for(int i=small_index+1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    max_diff=largest-smallest;
    return max_diff;
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
    int max_diff=max_difference(arr,n);
    
    cout << "The Maximum Difference Is : " << max_diff;
    return 0;
}