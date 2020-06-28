#include <iostream>
using namespace std;

// Левашев Алексей Георгиевич
// Задание 2. Напишите программу,
// которая запрашивает два целых числа x и y,
// после чего вычисляет и выводит значение x в степени y.

int main() {
    system("chcp 65001");

    int number1;
    int number2;
    cout << "Введите два целых числа, первое из которых будет возведено в степень со значением второго:\n";
    cin >> number1;
    cin >> number2;

// Здесь не понимаю, как избежать ошибки, если человек ввел не целое?

    int result;
    result = pow(number1,number2);
    cout << number1 << " в степени " << number2 << " = " << result << endl;

    return 0;
}
