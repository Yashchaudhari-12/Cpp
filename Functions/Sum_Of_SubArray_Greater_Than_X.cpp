#include<iostream>
using namespace std;

int max_sum_greater(int arr[],int n,int k,int a)
{
    int sum=0;

    for(int i=0;i<k;i++)
    {
        sum += arr[i];
        if(sum>a)
        {
            return 0;
        }
    }
    for(int i = k;i<n;i++)
    {
         sum = sum - arr[i-k] + arr[i];
         
         if(sum > a)
         {
            return i-k+1;
         }
    }
    return -1;
}
int main()
{
    int n,k,a;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter SubArray Size : ";
    cin >> k;
    cout << "Enter Comparision Sum : ";
    cin >> a;

    int temp = max_sum_greater(arr,n,k,a);

    if(temp==-1)
    {
        cout << "No SubArray Sum Is Greater Than Given No";
    }
    else
    {
        cout << "The First SubArray Starting Index Whose Sum Is Greater Than Given No Is : " << temp;
    }
    return 0;
}