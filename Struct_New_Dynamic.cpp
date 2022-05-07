
/*
	Sau đó bạn hãy nhập từ bàn phím mảng n phần tử các SinhVien (mảng này được cấp phát động) 
	và hiển thị ra màn hình thông tin của sinh viên có điểm cao nhất

*/

#include<iostream>
using namespace std;

typedef struct Student {
	string name;
	int age;
	int score;
} Student;

Student *alloc_arr_integer(int len) {
    Student *students = new Student[len];
}

Student Information(int n, Student *students) {
    Student s = students[0];
	for (int i = 1; i < n; i++) {
		if (students[i].score > s.score) {
			s = students[i];
		}
	}
	delete[] students;
	cout << "Name: " << s.name << endl;
	cout << "Age: " << s.age << endl;
	cout << "Score: " << s.score;
}

int main() {
	int n;
	cin >> n;
    Student *students;
    students = alloc_arr_integer(100);
	for (int i = 0; i < n; i++) {
		cin >> students[i].name >> students[i].age >> students[i].score;
	}
    Information(n, &*students);
	return 0;
}