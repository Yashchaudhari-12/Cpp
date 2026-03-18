#include<iostream>
using namespace std;

int max_loss_(int arr[],int n)
{
    int max=arr[0];
    int max_loss=INT_MAX;

    for(int i=1;i<n;i++)
    {
        int diff=arr[i]-max;

        if(diff<max_loss)
        {
            max_loss=diff;
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    return max_loss;
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
     
    int max_loss=max_loss_(arr,n);
    cout << "The Max Loss Is : " << max_loss;
    return 0;
}