#include <iostream>
using namespace std;

class bidangdatar {
private:
	int x;
public :
	bidangdatar() {
		x = 0;
	}
	virtual void input() {
		
	}
	virtual float luas(int a) {
		return 0;
	}
	virtual float keliling(int a) {
		return 0;
	}
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
};

class Lingkaran :public bidangdatar {
	void input() {
		cout << "Lingkaran dibuat" << endl;
		cout << "Masukkan jejari : ";
		int r;
		cin >> r;
		setX(r);
	}
	float luas(int r) { //menghitung luas lingkaran
		return 3.14 * r * r;
	}
	float keliling(int r) { // menghitung keliling lingkaran
		return 2 * 3.14 * r;
	}
};

class Bujungsangkar : public bidangdatar {
	void input() {
		cout << "bujursangkar dibuat" << endl;
		cout << "Masukkan sisi :";
		int s;
		cin >> s;
		setX(s);
	}
	float luas(int s) { //menghitung luas bujursangkar
		return s * s;
	}
	float keliling(int s) { //menghitung keliling bujursangkar
		return 4 * s;
	}
};

int main() {
	bidangdatar* obj;

	obj = new Lingkaran();
	obj->input();
	cout << "Luas lingkaran = " << obj->luas(obj->getX()) << endl;
	cout << "Keliling lingkaran = " << obj->keliling(obj->getX()) << endl;

	obj = new Bujungsangkar();
	obj->input();
	cout << "Luas Bujursangkar = " << obj->luas(obj->getX()) << endl;
	cout << "Keliling Bujursangkar = " << obj->keliling(obj->getX()) << endl;

	return 0;
}
