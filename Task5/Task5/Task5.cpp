#include <iostream>
#include <windows.h>
using namespace std;

bool isLucky(int n)
{
    if (n < 100000 || n > 999999)
    {
        return false;
    }
    int a = n / 100000;
    int b = n / 10000 % 10;
    int c = n / 1000 % 10;
    int d = n / 100 % 10;
    int e = n / 10 % 10;
    int f = n % 10;
    return a + b + c == d + e + f;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введіть шестизначне число: ";
    cin >> n;
    if (isLucky(n))
    {
        cout << "Число щасливе";
    }
    else
    {
        cout << "Число нещасливе";
    }
    return 0;
}