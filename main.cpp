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
    
    if ((sum / 1000) % 10 == 1) std::cout << "Одна тысяча" << std::endl;
    else if ((sum / 1000) % 10 == 2) std::cout << "Две тысячи" << std::endl;
    else if ((sum / 1000) % 10 == 3) std::cout << "Три тысячи" << std::endl;
    else if ((sum / 1000) % 10 == 4) std::cout << "Четыре тысячи" << std::endl;
    else if ((sum / 1000) % 10 == 5) std::cout << "Пять тысяч" << std::endl;
    else if ((sum / 1000) % 10 == 6) std::cout << "Шесть тысяч" << std::endl;
    else if ((sum / 1000) % 10 == 7) std::cout << "Семь тысяч" << std::endl;
    else if ((sum / 1000) % 10 == 8) std::cout << "Восемь тысяч" << std::endl;
    else if ((sum / 1000) % 10 == 9) std::cout << "Девять тысяч" << std::endl;
    
    if ((sum / 100) % 10 == 1) std::cout << "сто " << std::endl;
    else if ((sum / 100) % 10 == 2) std::cout << "двести " << std::endl;
    else if ((sum / 100) % 10 == 3) std::cout << "триста " << std::endl;
    else if ((sum / 100) % 10 == 4) std::cout << "четыреста " << std::endl;
    else if ((sum / 100) % 10 == 5) std::cout << "пятьсот " << std::endl;
    else if ((sum / 100) % 10 == 6) std::cout << "шестьсот " << std::endl;
    else if ((sum / 100) % 10 == 7) std::cout << "семьсот " << std::endl;
    else if ((sum / 100) % 10 == 8) std::cout << "восемьсот " << std::endl;
    else if ((sum / 100) % 10 == 9) std::cout << "девятьсот " << std::endl;

    if ((sum / 10) % 10 == 1)
    {
        if (sum % 10 == 0) std::cout << "десять долларов";
        else if (sum % 10 == 1) std::cout << "одинадцать долларов";
        else if (sum % 10 == 2) std::cout << "двенадцать долларов";
        else if (sum % 10 == 3) std::cout << "тринадцать долларов";
        else if (sum % 10 == 4) std::cout << "четырнадцать долларов";
        else if (sum % 10 == 5) std::cout << "пятнадцать долларов";
        else if (sum % 10 == 6) std::cout << "шестнадцать долларов";
        else if (sum % 10 == 7) std::cout << "семнадцать долларов";
        else if (sum % 10 == 8) std::cout << "восемнадцать долларов";
        else if (sum % 10 == 9) std::cout << "девятнадцать долларов";
    }
    
    else if ((sum / 10) % 10 == 2) std::cout << "двацать " << std::endl;
    else if ((sum / 10) % 10 == 3) std::cout << "тридцать " << std::endl;
    else if ((sum / 10) % 10 == 4) std::cout << "сорок " << std::endl;
    else if ((sum / 10) % 10 == 5) std::cout << "пятьдесят " << std::endl;
    else if ((sum / 10) % 10 == 6) std::cout << "шестьдесят " << std::endl;
    else if ((sum / 10) % 10 == 7) std::cout << "семьдесят " << std::endl;
    else if ((sum / 10) % 10 == 8) std::cout << "восемьдесят " << std::endl;
    else if ((sum / 10) % 10 == 9) std::cout << "девяносто " << std::endl;
    
    if ((sum / 1) % 10 == 1) std::cout << "один " << std::endl;
    else if ((sum / 1) % 10 == 2) std::cout << "два " << std::endl;
    else if ((sum / 1) % 10 == 3) std::cout << "три " << std::endl;
    else if ((sum / 1) % 10 == 4) std::cout << "четыре доллара" << std::endl;
    else if ((sum / 1) % 10 == 5) std::cout << "пять долларов." << std::endl;
    else if ((sum / 1) % 10 == 6) std::cout << "шесть долларов." << std::endl;
    else if ((sum / 1) % 10 == 7) std::cout << "семь долларов." << std::endl;
    else if ((sum / 1) % 10 == 8) std::cout << "восемь долларов." << std::endl;
    else if ((sum / 1) % 10 == 9) std::cout << "девять долларов." << std::endl;
    
    
      
    std::cin.get();
    return 0;
}


