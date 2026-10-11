#include <iostream>
#include <windows.h>
using namespace std;
double average(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return (double)sum / n;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int arr[5] = { 2, 4, 6, 8, 10 };
    cout << "Середнє арифметичне: "
        << average(arr, 5);
    return 0;
}