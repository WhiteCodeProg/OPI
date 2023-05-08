#include <iostream>

int main() {
    system("chcp 65001");
    int code;
    std::cout << "Введите код:" << std::endl;
    std::cin >> code;
    std::cout << "Откроем сейф методом перебора:" << std::endl;
    for (int i = 0; i < 1000; ++i) {
        if (i == code) {
            std::cout << "Kод = " << code << ": Потребовалось " << i << " попыток." << std::endl;
            return 0;
        }
    }
}