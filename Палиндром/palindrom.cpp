#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i];
    }
    getch();
}