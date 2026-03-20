#include<iostream>
#include<climits>
using namespace std;

int max_sum(int arr[],int n)
{
    int current_sum=0;
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > current_sum + arr[i])
        {
             current_sum = arr[i];
        }
        else
        {
            current_sum = current_sum + arr[i];
        }

        if(current_sum > max_sum)
        {
            max_sum = current_sum;
        }
    }
    return max_sum;
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
    int maximum_sum=max_sum(arr,n);

    cout << "The Maximum Sum Of SubArray Is : " << maximum_sum;
    return 0;
}