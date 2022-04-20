

#include<iostream>

class Employee {
    public:
        Employee() {
            std::cout << "Constructor mac dinh duoc goi la ..." << std::endl;
        }
};

int main() {
    Employee e1; // khởi tạo đối tượng Employee
    Employee e2;

    return 0;
}