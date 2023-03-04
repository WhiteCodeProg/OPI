#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>

struct Data {
    std::string first;
    std::string second;
};

int main() {
    setlocale(LC_ALL, "Russian");

    std::ifstream file("C:\Users\Анастасия\Desktop\prog\lab5.csv");

    if (!file.is_open()) {
        std::cerr << "Error: unable to open file" << std::endl;
        return 1;
    }

    std::map<std::string, std::vector<Data>> data;
    std::string line;

    std::getline(file, line);
    while (std::getline(file, line)) {

        std::string::size_type pos1 = line.find(';');
        std::string::size_type pos2 = line.find(';', pos1 + 1);

        std::string col1 = line.substr(0, pos1);
        std::string col2 = line.substr(pos1 + 1, pos2 - pos1 - 1);
        std::string col3 = line.substr(pos2 + 1);

        Data value{ col2, col3 };
        data[col1].push_back(value);
    }

    file.close();

    for (const auto& kv : data) {
        std::cout << "Число элементов для Nmax = " << kv.first << ": " << kv.second.size() << std::endl;

        for (const Data& value : kv.second) {
            std::cout << value.first << " ";
            std::cout << value.second << std::endl;
        }
    }

    return 0;
}
