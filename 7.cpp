#include <iostream>
using namespace std;

// Левашев Алексей Георгиевич
// Задание 7. Пользователь вводит две границы диапазона,
// вывести на экран все числа из этого диапазона.
// Предусмотреть, чтобы пользователь мог вводить границы
// диапазона в произвольном порядке.
//      вывести все четные числа из диапазона.
//      вывести все нечетные числа из диапазона.
//      вывести все числа, кратные семи.


int main() {
    system("chcp 65001");
    int number1;
    int number2;
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
    cout << "Все четные числа из диапазона: \n";
    int num=start;
    while (num < end+1)
    {
        if (num%2==0) cout << num << "\n";
        num++;
    }

    cout << "Все нечетные числа из диапазона: \n";
    num=start;
    while (num < end+1)
    {
        if (num%2!=0) cout << num << "\n";
        num++;
    }

    cout << "Все числа из диапазона, кратные 7: \n";
    int check=0;
    num=start;
    while (num < end+1)
    {
        if (num%7==0) {
            cout << num << "\n";
            check=1;
        }
        num++;
    }
    if (check==0) cout << "Нет чисел кратных 7 \n";

    return 0;
}

