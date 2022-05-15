
/*
    Constructor : hay còn gọi là hàm tạo

    - Constructor trong C++ là một phương thức đặc biệt được gọi là tự động tại thời điểm tạo đối tượng.
    Nó được sử đụng để khởi tạo thành viên dữ liệu của các đối tượng mới. Constructor đùng tên của lớp hoặc struct

- Constructor: chia làm hai loại
        + constructor mặc định
        + constructor có tham số


- Constructor : không có kiểu trả về

**** Constructor mặc định C++: tên của Constructor trùng với tên của Class( và nó tự gọi hàm)

(một constructor không có đối số được gọi là một constructor mặc định)

*/


#include <iostream>
using namespace std;
class Employee {
public:
    int id; // data member (bien instance)
    string name; // data member(bien instance)
    float salary;
    Employee(int, string, float);
    void display();
};

Employee::Employee(int id, string name, float salary) {
    this->id = id;
    this->name = name;
    this->salary = salary;
}

void Employee::display() {
    cout << id << " " << name << " " << salary << endl;
}


int main(void) {
    Employee e1 = Employee(101, "Phan Van Vinh", 500); // tao doi tuong Employee
    Employee e2 = Employee(102, "Dao Van Hoa", 1000);
    e1.display();
    e2.display();
    return 0;
}