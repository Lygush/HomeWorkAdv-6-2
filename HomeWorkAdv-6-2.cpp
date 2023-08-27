#include <iostream>
#include <list>

bool comp(int a, int b) {
    return a > b;
}

int main() {
    std::cout << "Input size: ";
    int size{};
    std::cin >> size;
    std::list<int> list;
    int temp{};
    for (int i{}; i < size; ++i) {
        std::cout << "Input [" << i << "] = ";
        std::cin >> temp;
        list.push_back(temp);
    }
    list.sort(comp);
    list.unique();
    std::cout << "OUT: \n";
    for (const auto& i: list) {
        std::cout << i << "\n";
    }
}