#include <iostream>
#include <string>

int main () {
    setlocale(LC_ALL, "Rus");

    int sum;
    std::cout << "Какую сумму вы желаете обналичить?" << std::endl;
    std::cin >> sum;

    if (sum == 0 || sum > 9999) {
        std::cout << "Число не попадает в диапозон от 1 до 9999!" << std::endl;
    }

    if ((sum / 1000) % 10 == 1) {
        std::cout << "Одна тысяча" << std::endl;
    }
    else if ((sum / 1000) % 10 == 2) {
        std::cout << "Две тысячи" << std::endl;
    }
    else if ((sum / 1000) % 10 == 3) {
        std::cout << "Три тысячи" << std::endl;
    }
    else if ((sum / 1000) % 10 == 4) {
        std::cout << "Четыре тысячи" << std::endl;
    }
    else if ((sum / 1000) % 10 == 5) {
        std::cout << "Пять тысяч" << std::endl;
    }
    else if ((sum / 1000) % 10 == 6) {
        std::cout << "Шесть тысяч" << std::endl;
    }
    else if ((sum / 1000) % 10 == 7) {
        std::cout << "Семь тысяч" << std::endl;
    }
    else if ((sum / 1000) % 10 == 8) {
        std::cout << "Восемь тысяч" << std::endl;
}
