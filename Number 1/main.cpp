#include <iostream>
using namespace std;

struct Student {
    long long NISN;
    string Name;
    int Value;
};

int main() {
    Student Data[7] = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    // Insertion Method
    int DataSize = sizeof(Data) / sizeof(Data[0]);
    for (int i = 1; i < DataSize; i++) {
        int j = i - 1;
        long long temp = Data[i].NISN;
        string temp2 = Data[i].Name;
        int temp3 = Data[i].Value;
        while (j >= 0 && Data[j].NISN < temp) {
            Data[j + 1].NISN = Data[j].NISN;
            Data[j + 1].Name = Data[j].Name;
            Data[j + 1].Value = Data[j].Value;
            j--;
        }
        Data[j + 1].NISN = temp;
        Data[j + 1].Name = temp2;
        Data[j + 1].Value = temp3;
    }

    cout << "NISN insertion method" << '\n';
    for (int i = 0; i < DataSize; i++) {
        cout << Data[i].NISN << ' ' << Data[i].Name << ' ' << Data[i].Value << '\n';
    }

    cout << '\n';

    // Selection Method
    for (int i = 0; i < DataSize; i++) {
        // find the minimum element among element-i to element-(N - 1)
        long long min = Data[i].NISN;
        string min2 = Data[i].Name;
        int min3 = Data[i].Value;
        int indMin = i;
        for (int j = i + 1; j < DataSize; j++) {
            if (Data[j].NISN > min) {
                min = Data[j].NISN;
                min2 = Data[j].Name;
                min3 = Data[j].Value;
                indMin = j;
            }
        }
        // swap the minimum element with element-i
        long long tmp = Data[i].NISN;
        string tmp2 = Data[i].Name;
        int tmp3 = Data[i].Value; // Corrected from .value to .Value

        Data[i].NISN = min;
        Data[i].Name = min2;
        Data[i].Value = min3;

        Data[indMin].NISN = tmp;
        Data[indMin].Name = tmp2;
        Data[indMin].Value = tmp3;
    }

    cout << "NISN selection method" << '\n';
    for (int i = 0; i < DataSize; i++) {
        cout << Data[i].NISN << ' ' << Data[i].Name << ' ' << Data[i].Value << '\n';
    }

    cout << '\n';

 // Bubble sort method
 for (int i = 0; i < DataSize - 1; i++) {
        for (int j = 0; j < DataSize - 1 - i; j++) { // Optimize by reducing the range
            if (Data[j].NISN < Data[j + 1].NISN) {
                long long temp = Data[j].NISN;
                string temp2 = Data[j].Name;
                int temp3 = Data[j].Value;
                
                Data[j].NISN = Data[j + 1].NISN;
                Data[j].Name = Data[j + 1].Name;
                Data[j].Value = Data[j + 1].Value;
                
                Data[j + 1].NISN = temp;
                Data[j + 1].Name = temp2;
                Data[j + 1].Value = temp3;
            }
        }
    }

    cout << "NISN Bubble Method" << '\n';
    for (int i = 0; i < DataSize; i++) {
        cout << Data[i].NISN << ' ' << Data[i].Name << ' ' << Data[i].Value << '\n';
    }

    cout << '\n';
    
    // value sorting
    // insertion method
    
 for (int i = 1; i < DataSize; i++) {
        int j = i - 1;
        long long tempNISN = Data[i].NISN;
        string tempName = Data[i].Name;
        int tempValue = Data[i].Value;
        while (j >= 0 && Data[j].Value < tempValue) {
            Data[j + 1].NISN = Data[j].NISN;
            Data[j + 1].Name = Data[j].Name;
            Data[j + 1].Value = Data[j].Value;
            j--;
        }
        Data[j + 1].NISN = tempNISN;
        Data[j + 1].Name = tempName;
        Data[j + 1].Value = tempValue;
    }

    cout << "Value Insertion Method" << '\n';
    for (int i = 0; i < DataSize; i++) {
        cout << Data[i].NISN << ' ' << Data[i].Name << ' ' << Data[i].Value << '\n';
    }

    cout << '\n';

    // Selection Sort (descending)
    for (int i = 0; i < DataSize; i++) {
        int indMax = i;
        for (int j = i + 1; j < DataSize; j++) {
            if (Data[j].Value > Data[indMax].Value) {
                indMax = j;
            }
        }
        // Swap the found maximum element with the first element
        if (indMax != i) {
            swap(Data[i], Data[indMax]);
        }
    }

    cout << "Value Selection Method" << '\n';
    for (int i = 0; i < DataSize; i++) {
        cout << Data[i].NISN << ' ' << Data[i].Name << ' ' << Data[i].Value << '\n';
    }

    cout << '\n';

    // Bubble Sort (descending)
    for (int i = 0; i < DataSize - 1; i++) {
        for (int j = 0; j < DataSize - 1 - i; j++) { // Optimize by reducing the range
            if (Data[j].Value < Data[j + 1].Value) {
                swap(Data[j], Data[j + 1]);
            }
        }
    }

    cout << "Value Bubble Method" << '\n';
    for (int i = 0; i < DataSize; i++) {
        cout << Data[i].NISN << ' ' << Data[i].Name << ' ' << Data[i].Value << '\n';
    }
}
