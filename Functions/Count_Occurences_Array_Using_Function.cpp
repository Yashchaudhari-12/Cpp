#include<iostream>
using namespace std;

int Occur_count(int arr[],int n,int occur)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==occur)
        {
            count += 1;
        }
    }
    return count;
}
int main()
{
    int n,occur;
    cout << "Enter Array Size : ";
    cin >> n;
    cout << "Enter Array Elements : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Element You Want To Count Occurences For : ";
    cin >> occur;
    int count = Occur_count(arr,n,occur);

    cout << "The Element Occurs " << count << " Times In The Given Array ";
    return 0;
}