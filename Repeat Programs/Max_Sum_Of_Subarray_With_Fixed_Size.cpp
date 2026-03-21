#include<iostream>
using namespace std;

int max_sum1(int arr[],int n,int t)
{
    int sum =arr[0];
    for(int i=1;i<t;i++)
    {
        sum += arr[i];
    }
    int max_sum=sum;
    for(int j=t;j<n;j++)
    {
        sum = sum - arr[j-t] + arr[j];

        if(sum>max_sum)
        {
            max_sum=sum;
        }
    }
    return max_sum; 
}
int main()
{
    int n,t;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Subarray Size : ";
    cin >> t;

    int max_sum = max_sum1(arr,n,t);

    cout << "The Maximum Sum Is : " << max_sum;
    return 0;

}