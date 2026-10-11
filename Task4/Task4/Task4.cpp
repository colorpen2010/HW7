#include <iostream>
#include <windows.h>
using namespace std;

void printCard(string value, string suit)
{
    cout << "-----" << endl;
    cout << "| " << value << endl;
    cout << "| " << suit << endl;
    cout << "-----" << endl;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    string value, suit;
    cout << "Введіть значення карти: ";
    cin >> value;
    cout << "Введіть масть карти: ";
    cin >> suit;
    printCard(value, suit);
    return 0;
}