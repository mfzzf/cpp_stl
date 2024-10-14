#include <iostream>
#include <list>
#include <string>

int main() {
    std::list<std::string> list1 = {"A", "B", "C"};
    std::list<std::string> list2 = {"X", "Y", "Z"};

    std::cout << "Before splice:" << std::endl;
    std::cout << "list1: ";
    for (const auto& elem : list1) std::cout << elem << " ";
    std::cout << "\nlist2: ";
    for (const auto& elem : list2) std::cout << elem << " ";
    std::cout << std::endl;

    // 1. Move all elements of list2 to list1 at list1.end()
    list1.splice(list1.end(), list2);

    std::cout << "\nAfter splice:" << std::endl;
    std::cout << "list1: ";
    for (const auto& elem : list1) std::cout << elem << " ";
    std::cout << "\nlist2 (now empty): ";
    for (const auto& elem : list2) std::cout << elem << " ";  // list2 is now empty
    std::cout << std::endl;

    return 0;
}
