#include<iostream>
using namespace std;

int main()
{
    char Operator;
    int a,b;
    int c;

    cout << "Enter The First Number :";
    cin >> a;
    cout << "Enter The Second Number :";
    cin >> b;

    cout << "Enter The Operation You Want To Perform :";
    cin >> Operator;

    switch (Operator)
    {
    case '+':
        cout << "You Chose Addition" << endl;
        cout << a + b;
        break;

    case '-':
        cout << "You Chose Subtraction" << endl;
        cout << a - b;
        break;

     case '*':
        cout << "You Chose Multiplication" << endl;
        cout << a * b;
        break; 
        
     case '/':
        cout << "You Chose Division" << endl;
        if (b==0)
        {
            cout << "Division By Zero Is Not Allowed";
        }
        cout << a / b;
        break;

    case '%':
        cout << "You Chose Modulo" << endl;
        cout << a%b;
        break; 

    default:
       cout << "Invalid Operator" << endl;
       break;

    }
    return 0;
}