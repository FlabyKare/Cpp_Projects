#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    int number, obr, result;
    cout << "Введите число: ";
    cin >> number;
    while (number > 0)
    {
        number = number % 10;
        if (number % 2 == 0)
        {
            obr = obr * 0 + number;
            result = result * 0 + obr;
        }
        else
            cout << result;
    }

    return 0;
}