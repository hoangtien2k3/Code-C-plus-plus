
#include <iostream>

using namespace std;

class Animal {
public:
	// sound là một phương thức trừu tượng // hàm thuần ảo
	virtual void sound() = 0; // hàm thuần ảo hay phương thức trừu tượng
};

class Cat : public Animal {
	void sound() {
		cout << "meow meow" << endl;
	}
};

int main() {
	Animal *a = new Cat();
	a->sound();


	return 0;
}