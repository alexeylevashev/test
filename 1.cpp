#include <iostream>
using namespace std;

// Левашев Алексей Георгиевич
// Задание 1. Напишите программу, которая вычисляет сумму целых
// чисел от а до 500 (значение a вводится с клавиатуры).

int main() {
    system("chcp 65001");

    int number;

    cout << "Введите число, начиная с которого и до 500 будет вычислена сумма чисел:\n";
    cin >> number;
    while (number < 0 || number > 500)
    {
        cout << "Ошибка - число дожно быть от 0 до 500 - Попробуйте еще раз!\n";
        cin >> number;
    }

    int sum = 0;
    int i = number;
    while (i <= 500)
    {
        sum += i;
        i++;
    }
    cout << "Сумма чисел от " << number << " до 500 = " << sum << endl;
    return 0;
}
