
/*
    ! Syntax: setter
        void set<tên thuộc tính> (<tham số giá trị mới>) {
            this-><tên thuộc tính> = <tham số giá trị mới>;
        }

    Ex:
        void setAddress(string address) {
		    this->address = address;
	    }


    ! Syntax: getter
        <kiểu dữ liệu thuộc tính> get<tên thuộc tính> () {
            return this-><tên thuộc tính>;
        }
    
    Ex:
        string getAddress() {
		    return address;
	    }

*/

//! Cách 1: dùng setter và getter giống như sau
#include<iostream>

using namespace std;

class Person {
private:
	int id;
	string name;
	int age;
	string address;
public:
	int getId() {
		return id;
	}
	void setId(int id) {
		this->id = id;
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this->age = age;
	}
	string getAddress() {
		return address;
	}
	void setAddress(string address) {
		this->address = address;
	}
};

int main() {
	Person p;
	p.setId(1001);
	p.setName("Quynh");
	p.setAge(24);
	p.setAddress("Ha Noi");
	cout << "Id: " << p.getId() << endl;
	cout << "Name: " << p.getName() << endl;
	cout << "Age: " << p.getAge() << endl;
	cout << "Address: " << p.getAddress() << endl;
	return 0;
}






//! Cách 2: dùng Constractor và getter (nên dùng cách này hơn) 
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

