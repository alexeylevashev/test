#include <iostream>
using namespace std;

// Левашев Алексей Георгиевич
// Задание 8. Пользователь вводит две границы диапазона. Посчитать сумму всех чисел диапазона.


int main() {
    system("chcp 65001");

    int number1;
    int number2;
    int sum=0;
    cout << "Введите две границы диапазона: \n";
    cin>>number1;
    cin>>number2;

    int start;
    int end;
    if (number1 < number2) {
        start = number1;
        end = number2;
    }
    else {
        start = number2;
        end = number1;
    }

    int num=start;
    while (num < end+1)
    {
    sum+=num;
    num++;
    }

    cout << "Сумма всех чисел диапазона: " << sum << "\n";


    return 0;
}

