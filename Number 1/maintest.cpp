#include <iostream>
using namespace std;

struct student {
	long long NISN;
	string Name;
	int Value;
};

int main() {

	student Data[7] = {{9960312699, "Handi Ramadhan", 90},
					   {9963959682, "Rio Alfandra", 55},
					   {9950310962, "Ronaldo Valentino Uneputty", 80},
					   {9970272750, "Achmad Yaumil Fadjri R.", 60},
					   {9970293945, "Alivia Rahma Pramesti", 70},
					   {9952382180, "Ari Lutfianto", 65},
					   {9965653989, "Arief Budiman", 60}};

	int DataSize = sizeof(Data) / sizeof(Data[0]);

	// NISN sorting (descending) - Insertion Sort
	for (int i = 1; i < DataSize; i++) {
		int j = i - 1;
		student temp = Data[i];
		while (j >= 0 && Data[j].NISN < temp.NISN) {
			Data[j + 1] = Data[j];
			j--;
		}
		Data[j + 1] = temp;
	}

	// Expected sorted Data by NISN
	student checkNISN[7] = {{9970293945, "Alivia Rahma Pramesti", 70},
							{9970272750, "Achmad Yaumil Fadjri R.", 60},
							{9965653989, "Arief Budiman", 60},
							{9963959682, "Rio Alfandra", 55},
							{9960312699, "Handi Ramadhan", 90},
							{9952382180, "Ari Lutfianto", 65},
							{9950310962, "Ronaldo Valentino Uneputty", 80}};

	bool flagNISN = true;
	for (int i = 0; i < 7; i++) {
		if (Data[i].NISN != checkNISN[i].NISN) {
			flagNISN = false;
			break;
		}
	}

	// Value sorting (descending) - Insertion Sort
	for (int i = 1; i < DataSize; i++) {
		int j = i - 1;
		student temp = Data[i];
		while (j >= 0 && Data[j].Value < temp.Value) {
			Data[j + 1] = Data[j];
			j--;
		}
		Data[j + 1] = temp;
	}

	// Expected sorted Data by Value
	student checkValue[7] = {{9960312699, "Handi Ramadhan", 90},
							 {9950310962, "Ronaldo Valentino Uneputty", 80},
							 {9970293945, "Alivia Rahma Pramesti", 70},
							 {9952382180, "Ari Lutfianto", 65},
							 {9970272750, "Achmad Yaumil Fadjri R.", 60},
							 {9965653989, "Arief Budiman", 60},
							 {9963959682, "Rio Alfandra", 55}};

	bool flagValue = true;
	for (int i = 0; i < 7; i++) {
		if (Data[i].Value != checkValue[i].Value) {
			flagValue = false;
			break;
		}
	}

	// Final test output
	if (flagNISN && flagValue) cout << "SUCCESSFUL" << '\n';
	else cout << "UNSUCCESSFUL" << '\n';

	return 0;
}
