#include<iostream>
using namespace std;

int is_second_largest(int arr[],int n)
{
    int largest=INT_MIN;
    int second_largest=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest)
        {
            second_largest=arr[i];
        }
    }
    return second_largest;
}

int main()
{
  int a;

  cout << "Enter The Size Of Array : ";
  cin >> a;

  cout << "Enter Array Elements : ";

  int arr[a];

  for(int i=0;i<a;i++)
  {
    cin >> arr[i];
  }
  int second_largest=is_second_largest(arr,a);
  if(second_largest==INT_MIN)
  {
    cout << "No Second Largest Element";
  }
  else
  {
   cout << "The Second Largest Element Is : " << second_largest;
  }
  return 0;
  
  


}