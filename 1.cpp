/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

// Дано ціле число, більше 999. Використовуючи одну операцію 
// цілочисельного ділення і одну операцію взяття залишку від ділення,
// знайти цифру, відповідну розряду тисяч в записі цього числа.

int main() {
    int number;
    
    // Вводимо число
    cout << "Введіть ціле число більше 999: ";
    cin >> number;
    
    // Перевірка на коректність числа
    if (number <= 999) {
        cout << "Число повинно бути більше 999!" << endl;
        return 1;
    }
    
    // Знаходимо цифру тисяч
    int thousands_digit = (number / 1000) % 10;
    
    // Виводимо результат
    cout << "Цифра тисяч в числі: " << thousands_digit << endl;
    
    return 0;
}