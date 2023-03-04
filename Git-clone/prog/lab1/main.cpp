//Написать программу где пользователь вводит номер месяца программа выводит название месяца, 
//если номер не правильный, то выводится ошибка и предлагается заново ввести число
#include<iostream>
#include "function.cpp"
#include "function.h"

using namespace std;
int main() {
int num;
cout << "Enter numer: " << endl;
cin >> num;
seasonMonth(num);
    return 0;
}
