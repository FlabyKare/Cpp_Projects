#include <iostream>
#include <conio.h>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int num, checker, result, counter = 0;
    cout << " Укажите размер массива: ";
    cin >> num;
    if (num > 0)
    {
        vector<int> vectArr;

        for (int a = 0; a < num; a++)
        {
            cout << " " << a + 1 << " число = ";
            cin >> checker;
            if (checker > 0)
            {
                vectArr.push_back(checker);
                counter++;
            }
        }
        // result = accumulate(vectArr.begin(), vectArr.end(), 0);
        cout << " Количество положительных элементов: " << counter << endl;
        cout << " Сумма всех элементов: " << accumulate(vectArr.begin(), vectArr.end(), 0) << endl;
    }
    else
    {
        cout << " Пожалуйста укажите размер массива";
    }
    getch();
}
