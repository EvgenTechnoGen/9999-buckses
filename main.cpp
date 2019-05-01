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
