#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float a, b, c, resultSum, resultMultiplication;
    cout << " Сумма и произведение чисел.\n";
    cout << "\nВведите 1-ое число: ";
    cin >> a;
    cout << "\nВведите 2-ое число: ";
    cin >> b;
    cout << "\nВведите 3-е число: ";
    cin >> c;
    cout << "\n\n\n=============================================\n";
    cout << "\n Сумма набранных чисел = " << a + b + c << endl;
    cout << "\n Произведение набранных чисел = " << a * b * c << endl;
    cout << "\n=============================================";
}