#include<iostream>
using namespace std;
int main()
{
    double num1, num2,result ;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose operation (+, -, *, /): ";
    cin >> op;

    switch(op)
    {
        case '+':
            result= num1 + num2;
            break;
        case '-':
            result= num1 - num2;
            break;
        case '*':
            result= num1 * num2;
            break;
        case '/':
            if (num2 != 0)
            {
            result= num1 / num2;
            } else
            {
                cout << "Error: Cannot divide by zero.";

                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operation." ;
            return 1;
    }
cout<<"result:"<<result;
return 0;
}
