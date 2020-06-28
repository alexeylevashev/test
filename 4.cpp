#include <iostream>
using namespace std;

// Левашев Алексей Георгиевич
// Задание 4. Найти произведение всех целых чисел от a до 20
// (значение a вводится с клавиатуры: 1 <=a <= 20).


int main() {
    system("chcp 65001");

    int number;

    cout << "Введите число, начиная с которого и до 20 будет вычислено произведение чисел:\n";
    cin >> number;
    while (number < 1 || number > 20)
    {
        cout << "Ошибка - число дожно быть от 1 до 20 - Попробуйте еще раз!\n";
        cin >> number;
    }

    int sum = 1;
    int i = number;
    while (i <= 20)
    {
        sum *= i;
        i++;
    }
    cout << "Произведение чисел от " << number << " до 20 = " << sum << endl;
    return 0;
}
