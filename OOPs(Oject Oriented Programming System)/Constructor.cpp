
/*
    Constructor
*/

- Constructor trong C++ là một phương thức đặc biệt được gọi là tự động tại thời điểm tạo đối tượng.
    Nó được sử đụng để khởi tạo thành viên dữ liệu của các đối tượng mới. Constructor đùng tên của lớp hoặc struct



- Constructor: chia làm hai loại
    + constructor mặc định
    + constructor có tham số


**** Constructor mặc định C++
(một constructor không có đối số được gọi là một constructor mặc định)

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