#include <iostream>

int main() {
    system("chcp 65001");
    
    int code_of_box;
    std::cout << "Введите код:" << std::endl;
    std::cin >> code_of_box;
    std::cout << "Откроем сейф методом перебора:" << std::endl;
    for (int i = 0; i < 1000; ++i) {
        if (i == code_of_box) {
            std::cout << "Kод = " << code_of_box << ": Потребовалось " << i << " попыток." << std::endl;
            return 0;
        }
    }
}