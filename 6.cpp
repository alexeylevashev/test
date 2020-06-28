#include <iostream>
using namespace std;

// Левашев Алексей Георгиевич
// Задание 6. Вывести на экран все числа от нуля до введенного пользователем числа.


int main() {
    system("chcp 65001");

    int number;
    cout << "Введите число: "; cin>>number;

    while (number < 0)
    {
        cout << "Ошибка - число дожно быть, больше 0 - Попробуйте еще раз!\n";
        cin >> number;
    }

    int i = 0;

    while (i < number+1)
    {
        cout << i << "\n";
        i++;
    }

    return 0;
}

