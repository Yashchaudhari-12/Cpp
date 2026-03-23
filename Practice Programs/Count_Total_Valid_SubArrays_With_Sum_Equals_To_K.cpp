#include<iostream>
using namespace std;

int count1(int arr[],int n,int k)
{
    int i=0,sum=0,count=0;

    for(int j=0;j<n;j++)
    {
        sum += arr[j];

        int current_sum=sum;
        
        while(sum>k)
        {
            sum -= arr[i];
            i++;
        }
        if(sum==k)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,k;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Sum : ";
    cin >> k;

    int count = count1(arr,n,k);

    cout << "The No Of SubArray That Has Sum Equals To Given Sum Are : " << count ;

    return 0;
}