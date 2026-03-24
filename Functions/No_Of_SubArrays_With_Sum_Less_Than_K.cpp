#include<iostream>
using namespace std;

int count1(int arr[],int n,int k)
{
    int i=0,count=0,sum=0;

    for(int j=0;j<n;j++)
    {
        sum+= arr[j];
        while(sum>k)
        {
            sum -= arr[i];
            i++;
        }
        if(sum<=k)
        {
            count += (j-i+1);
        }
    }
    return count;
}
int main()
{
    int n,k;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "enter Array Elements : ";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Sum : ";
    cin >> k;

    int count = count1(arr,n,k);

    cout << "No Of Subarray : " << count;
    return 0;
}