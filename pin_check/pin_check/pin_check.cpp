#include <iostream>
#include <fstream>
using namespace std;

int check(int data) {
	int pin = 29760 / 15;

	if (data != pin) {
		return 0;
	}

	if (data == pin) {
		return 1;
	}

	else {
		return 2;
	}
}

int main() {
	ifstream file;
	int data;

	file.open("pin");
	file >> data;
	file.close();

	switch (check(data)) {
	case 0:
		cout << "Incorrect!" << endl;
		break;
	case 1:
		cout << "Correct!" << endl;
		break;
	case 2:
		cout << "ERROR!" << endl;
		break;
	}

	system("PAUSE");

	return 0;
}