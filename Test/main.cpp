#include <iostream>

int main() {
    system("chcp 65001");
<<<<<<< HEAD
    int code;
    std::cout << "Введите код:" << std::endl;
    std::cin >> code;
    std::cout << "Откроем сейф методом перебора:" << std::endl;
    for (int i = 0; i < 1000; ++i) {
        if (i == code) {
            std::cout << "Kод = " << code << ": Потребовалось " << i << " попыток." << std::endl;
=======
    
    int code;
    std::cout << "Введите код:" << std::endl;
    std::cin >> code;
    std::cout << "Откроем сейф методом перебора:" << std::endl;
    for (int i = 0; i < 1000; ++i) {
        if (i == code) {
            std::cout << "Kод = " << code << ": Потребовалось " << i << " попыток." << std::endl;
>>>>>>> test_two_ver2
            return 0;
        }
    }
}