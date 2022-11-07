#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    float n1, n2, n3, sum;
    cout << " Нахождение среднего арифметическго числа :)" << endl;
    cout << "\n 1-ое число = ";
    cin >> n1;
    cout << "\n 2-ое число = ";
    cin >> n2;
    cout << "\n 3-е число = ";
    cin >> n3;
    sum = (n1 + n2 + n3) / 3;
    cout << "\n==============================\n\n Результат: " << sum << "\n\n==============================";
    getch();
}
