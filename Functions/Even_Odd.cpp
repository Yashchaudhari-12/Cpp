#include<iostream>
using namespace std;

bool is_even_odd(int n)
{
   return n % 2 == 0;
}

int main()
{
  int a;

  cout << "Enter The No : ";
  cin >> a;

  if(is_even_odd(a))
  {
    cout << "Even No";
  }
  else
  {
    cout << "Odd No";
  }
  return 0;
}