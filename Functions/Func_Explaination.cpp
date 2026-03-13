#include<iostream>
using namespace std;

void greet()  // No Parameter No Return
{
    cout << "Hello" << endl;
}
void square(int a)   // Parameter But No Return
{
    cout << a*a << endl;
}
int add(int a,int b)    // Parameter And Return
{
    return a+b;
}
int get_num()  // No Parameter But Return
{
    return 10;
}

int main()
{
    greet();
    square(5);
    cout << add(5,3) << endl;
    cout << get_num();
}