#include <iostream>
#include <windows.h>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int arr[5] = { 4, 8, 2, 9, 5 };
    int key;
    cout << "Введіть число для пошуку: ";
    cin >> key;
    int result = linearSearch(arr, 5, key);
    if (result != -1)
    {
        cout << "Знайдено на позиції: " << result + 1;
    }
    else
    {
        cout << "Число не знайдено";
    }
    return 0;
}