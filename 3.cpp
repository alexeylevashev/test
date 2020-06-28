#include <iostream>
using namespace std;

// Левашев Алексей Георгиевич
// Задание 3. Найти среднее арифметическое всех целых чисел от 1 до 1000.


int main() {
    system("chcp 65001");

    int i = 1;
    int sum = 1;
    while (i < 1000)
    {
        sum += i+1;
        i++;
    }
    double result = (double)sum/i;
    cout << "Cреднее арифметическое всех целых чисел от 1 до " << i << " = " << result;

    return 0;
}