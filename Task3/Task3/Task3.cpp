#include <iostream>
#include <windows.h>
using namespace std;

bool isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum == n;
}
void findPerfect(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (isPerfect(i))
        {
            cout << i << " ";
        }
    }
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, b;
    cout << "Введіть початок інтервалу: ";
    cin >> a;
    cout << "Введіть кінець інтервалу: ";
    cin >> b;
    cout << "Досконалі числа: ";
    findPerfect(a, b);
    return 0;
}