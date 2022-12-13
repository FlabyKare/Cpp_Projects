#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> monday({6, 13, 20, 27});
    vector<int> tuesday({7, 14, 21, 28});
    vector<int> wednesday({1, 8, 15, 22, 29});
    vector<int> thursday({2, 9, 16, 23, 30});
    vector<int> friday({3, 10, 17, 24, 31});
    vector<int> saturday({4, 11, 18, 25});
    vector<int> sunday({5, 12, 19, 26});
    int number;
    cout << "Please, enter your number: ";
    cin >> number;
    cout << endl;

    // Понедельник

    if (number == 6 || number == 13 || number == 20 || number == 27)
    {
        cout << "Monday";
    }

    // Вторник

    if (number == 7 || number == 14 || number == 21 || number == 28)
    {
        cout << "Tuesday";
    }

    // Среда

    if (number == 1 || number == 8 || number == 15 || number == 22 || number == 29)
    {
        cout << "Wednesday";
    }

    // Четверг

    if (number == 2 || number == 9 || number == 16 || number == 23 || number == 30)
    {
        cout << "Thursday";
    }

    // Пятница

    if (number == 3 || number == 10 || number == 17 || number == 24 || number == 31)
    {
        cout << "Friday";
    }

    // Суббота

    if (number == 4 || number == 11 || number == 18 || number == 25)
    {
        cout << "Saturday";
    }

    // Воскресенье

    if (number == 5 || number == 12 || number == 19 || number == 26)
    {
        cout << "Sunday";
    }

    getch();
}