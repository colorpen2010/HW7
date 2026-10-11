#include <iostream>
#include <windows.h>
using namespace std;

int power(int a, int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result = result * a;
    }
    return result;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, n;
    cout << "Введіть основу: ";
    cin >> a;
    cout << "Введіть показник степеня: ";
    cin >> n;
    cout << "Результат: " << power(a, n);
    return 0;
}