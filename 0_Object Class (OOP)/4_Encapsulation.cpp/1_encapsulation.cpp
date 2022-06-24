
// C++ Encapsulation: Tính đóng gói 

/*
    * Hiểu đơn giản, gói dữ liệu và thông tin vào trong một lớp (class) được gọi là tính đóng gói.

    - Có thể nói tính đóng gói (Encapsulation) là cơ chế của che giấu dữ liệu (Data Hiding) bởi chúng được 
    lớp (class) che giấu đi (ở dạng private) một số dữ liệu, hàm và phương thức để đảm bảo rằng các dữ 
    liệu đó sẽ được truy cập và sử dụng đúng mục đích, đúng cách thông qua các hàm và phương thức 
    ở dạng public mà class cung cấp. Đó là lý do bạn không thể truy cập đến các thuộc tính private 
    hoặc gọi đến phương thức private của class từ bên ngoài class đó.


    - Tính đóng gói được thể hiện khi mỗi đối tượng mang trạng thái là private ở bên trong một class và 
    những đối tượng khác không thể truy cập trực tiếp vào phạm vi này. Thay vào đó họ chỉ có thể 
    gọi các hàm mang phạm vi public được gọi là phương thức


    ! => LỢI ÍCH CHÍNH CỦA TÍNH ĐÓNG GÓI MANG LẠI:
    - hạn chế được các truy xuất không hợp lệ tới các thuộc tính của đối tượng
    - giúp cho trạng thái của đối tượng luôn đúng
    - giúp ẩn đi những thông tin không cân thiết về đối tượng
    - cho phép bạn thay đổi cấu trúc bên trong lớp mà không ảnh hưởng tới lớp khác 


*/

#include<iostream>

using namespace std;

class Person {
private:
	int id;
	string name;
	int age;
	string address;
public:
	Person(int id, string name, int age, string address) {
		this->id = id;
		this->name = name;
		this->age = age;
		this->address = address;
	}
	int getId() {
		return id;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	string getAddress() {
		return address;
	}
};

int main() {
	Person p(1001, "Quynh", 24, "Ha Noi");
	cout << "Id: " << p.getId() << endl;
	cout << "Name: " << p.getName() << endl;
	cout << "Age: " << p.getAge() << endl;
	cout << "Address: " << p.getAddress() << endl;
	return 0;
}



