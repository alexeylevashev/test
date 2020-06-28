#include <iostream>
using namespace std;

// Левашев Алексей Георгиевич
// Задание 5. Написать программу, которая выводит на экран таблицу
// умножения на k, где k – номер варианта. Например, для 7-го варианта:
//7 x 2 = 14
//7 x 3 = 21


int main() {
    system("chcp 65001");

    int number = 7;
    int i = 2;

    while (i < 10)
    {

        cout << number << " x " << i << " = " << i*number << "\n";
        i++;
    }

    return 0;
}
