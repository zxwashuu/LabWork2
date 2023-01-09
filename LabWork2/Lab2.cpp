
#include <iostream>
#include <Windows.h>
using namespace std;

double CalculationMahnager(double first, double second, char diya);

int main()
{
    SetConsoleOutputCP(1251);
    std::cout << "******Labaratorna 2******\n";
    double firstNum = 0;
    double secondNum = 0;
    char diya;

    cout << "Enter first number\n";
    cin >> firstNum;
    cout << "Enter second number\n";
    cin >> secondNum;
    cout << "Set an action\n";
    cout << "(+)or(-)or(*)or(/)\n";
    cin >> diya;
    CalculationMahnager(firstNum, secondNum, diya);

}
double CalculationMahnager(double first, double second, char diya)
{
    double result;
    switch (diya) 
    {
    case '+':
        result = first + second;
        break;
    case '-':
        result = first - second;
        break;
    case '*':
        result = first * second;
        break;
    case '/':
        result = first / second;
        break;
    default:
        cout << "Wrong input\n";
        return 0;
    }
    cout << "Result is: " << result; 
}
