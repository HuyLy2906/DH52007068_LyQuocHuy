#include <iostream>
#include <cmath>

using namespace std;

<<<<<<< HEAD
bool kiemTraSoHoanThien(int num) {
	int n = 0;
	for (int i = 1; i < num; i++)
		if (num%i == 0)
			n += i;
	return num == n;
=======
bool kiemTraSoChinhPhuong(int num) {
	int n = sqrt(num);
	return n * n == num;
>>>>>>> chinhphuong
}

int main() {
	int num;
	cout << "Nhap vao 1 so nguyen: ";
	cin >> num;
<<<<<<< HEAD
	if (kiemTraSoHoanThien(num)) {
		cout << "\nSo hoan thien";
=======
	if (kiemTraSoChinhPhuong(num)) {
		cout << num << "\nSo chinh phuong";
>>>>>>> chinhphuong
	}
	return 0;
}

