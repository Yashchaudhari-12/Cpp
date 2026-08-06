#include<bits/stdc++.h>
using namespace std;

void move_even_odd(vector<int>& arr)
{
    int n = arr.size();
    int left = 0;
    int right = n-1;

    while(left < right){
        if(arr[left] % 2 == 0){
            left++;
        }
        else if(arr[right] % 2 != 0){
            right--;
        }
        else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter Array Elements : ";

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    move_even_odd(arr);

    cout << "After Moving : ";

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}