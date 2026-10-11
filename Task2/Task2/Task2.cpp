#include <iostream>
#include <windows.h>
using namespace std;

int sumRange(int a, int b)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;
    cout << "Сума: " << sumRange(a, b);
    return 0;
}