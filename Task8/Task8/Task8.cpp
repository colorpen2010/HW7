#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int binaryToDecimal(string binary)
{
    int result = 0;
    for (int i = 0; i < binary.length(); i++)
    {
        result = result * 2 + (binary[i] - '0');
    }
    return result;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    string binary;
    cout << "Введіть двійкове число: ";
    cin >> binary;
    cout << "Десяткове число: "
        << binaryToDecimal(binary);
    return 0;
}