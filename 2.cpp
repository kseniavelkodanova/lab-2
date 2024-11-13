// Дано тризначне число. Перевірити істинність висловлювання: 
// «Цифри даного числа утворюють зростаючу або спадаючу послідовність».

#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Вводимо тризначне число
    cout << "Введіть тризначне число: ";
    cin >> number;
    
    // Перевірка на коректність числа
    if (number < 100 || number > 999) {
        cout << "Число повинно бути тризначним!" << endl;
        return 1;
    }
    
    // Розділяємо число на цифри
    int hundreds = number / 100;        // сотні
    int tens = (number / 10) % 10;      // десятки
    int ones = number % 10;             // одиниці
    
    // Перевіряємо, чи цифри утворюють зростаючу або спадаючу послідовність
    bool isIncreasing = (hundreds < tens) && (tens < ones); // зростаюча послідовність
    bool isDecreasing = (hundreds > tens) && (tens > ones); // спадаюча послідовність
    
    if (isIncreasing || isDecreasing) {
        cout << "Цифри числа утворюють зростаючу або спадаючу послідовність." << endl;
    } else {
        cout << "Цифри числа не утворюють зростаючу або спадаючу послідовність." << endl;
    }

    return 0;
}
