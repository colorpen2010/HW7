#include <iostream>
#include <windows.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int arr[5] = { 2, 4, 5, 8, 9 };
    int key;
    cout << "Введіть число для пошуку: ";
    cin >> key;
    int result = binarySearch(arr, 5, key);
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