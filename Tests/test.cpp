#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int arr[10][10];
    int i, j, strings, s;
    cout << "n: ";
    cin >> strings;
    for (i = 0; i < strings; i++)
        for (j = 0; j < strings; j++)
        {
            cout << j + 1 << " number: ";
            cin >> arr[i][j];
        }

    for (i = 0; i < strings; i++)
    {
        for (j = 0; j < strings; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    getch();
}
// cout << " Укажите размер массива: ";
// cin >> num;
// cout << " Количество положительных элементов: " << counter << endl;

// for (int a = 0; a < num; a++)
// {
//     cout << " " << a + 1 << " число = ";
//     cin >> checker;
//     if (checker > 0)
//     {
//         vectArr.push_back(checker);
//         counter++;
//     }
// }