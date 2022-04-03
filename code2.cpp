
#include <iostream>
#include<typeinfo>

int main() {
    int value = 12;
    // int *ptr = &value;
    std::cout << typeid(value).name() << std::endl;
}