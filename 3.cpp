#include <iostream>
#include <cmath>
#include <stdexcept>
// Математичний вираз №10
double calculateY(double x) {
    // Перевірка допустимості значення x для окремих компонентів функції
    if (x == 0 || std::cos(x) == 0) {
        throw std::invalid_argument("Значення x неприпустимо (розподіл на 0 в tan чи log).");
    }

    // Модулі та необхідні перетворення
    double absX = std::abs(x);
    double cubeRoot = cbrt(x * x);  // Кубічний корінь від x^2
    double sqrtX = std::sqrt(absX); // Корінь квадратний із |x|
    
    // Логарифм основи 2 (всередині перевіряємо аргумент)
    double logArg = std::sin(absX + 29 * M_PI / 180) * std::sin(absX + 29 * M_PI / 180);
    if (logArg <= 0) {
        throw std::invalid_argument("Значення під логарифмом має бути більшим за 0.");
    }
    double log2Val = std::log2(logArg);

    // Тангенс від x (і його модуль)
    double tgX = std::tan(x);
    double absTgX = std::abs(tgX);

    // Підсумкова формула
    double y = (cubeRoot + sqrtX) / log2Val + (M_PI * absTgX) / 2;
    return y;
}

int main() {
    try {
        double x;
        std::cout << "Введіть значення x: ";
        std::cin >> x;

        double y = calculateY(x);
        std::cout << "Значення y: " << y << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
    }

    return 0;
}
