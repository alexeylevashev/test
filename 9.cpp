#include <iostream>
using namespace std;

// Левашев Алексей Георгиевич
// Задание 9. Пользователь с клавиатуры вводит числа.
// Посчитать их сумму и вывести на экран, как только пользователь введет ноль.

int main() {
    system("chcp 65001");
    int number;
    int sum=0;
    cout << "Введите числа: \n";
    cin >> number;

    while (number!=0) {
        sum+=number;
        cout << "Еще: \n";
        cin >> number;
    }

    cout << "Сумма всех чисел: " << sum << "\n";

    return 0;
}

jjjjjjjjj
