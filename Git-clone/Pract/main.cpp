//Аттракцион вмещает несколько человек общим весом не более М кг
//Вес каждого человека, стоящего в очереди, генерируется датчиком случайных чисел ( от 50 до 100)
//Программа должна выводить веса желающих прокатиться, пока суммарный вес не достигнет М

#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {

    system("chcp 65001");   // для отображения русского языка
    system("cls");

    int max_weight; // максимальный вес для аттракциона
    int sum; //сумма рандомного веса
    // int min_gran = 50, max_gran = 100;
    std::cout << "Ввести максимальный вес, который вмещает аттракцион: ";
    std::cin >> max_weight;
    std::cout << std::endl;

    double randomWeight[10]; //датчик случайных чисел от 50 до 100
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        randomWeight[i] = rand() % 50 + 50;
    }

    std::cout << "Вес каждого человека: " << std::endl; //Вывод веса каждого человека желающего прокатиться
    std::cout << std::endl;
    for (int i = 0; i < 10; i++ ) {
        std::cout << "Вес "  << i + 1 << "-го человека - " << randomWeight[i] << " кг " << std::endl;
    }


    return 0;
}