#include <iostream>
#include <string>

using namespace std;

struct Student {
    long long nisn; // Use long long for large NISN values
    string name;
    int value;
};

int main() {

    Student data[7] = {
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9952382180, "Ari Lutfianto", 65},
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9965653989, "Arief Budiman", 60},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70}
    }; // Assume data is already sorted by NISN

    long long targetNISN = 9950310962; // The NISN we are searching for
    int l = 0;
    int r = 6; // Last index of the array
    bool found = false;
    int ans = 0;

    while (!found && l <= r) {
        int mid = (l + r) / 2;
        if (data[mid].nisn > targetNISN) {
            r = mid - 1;
        } else if (data[mid].nisn < targetNISN) {
            l = mid + 1;
        } else {
            found = true;
            ans = data[mid].value;
        }
    }

    if (found) {
        cout << "Found" << '\n';
        cout << "Value of " << targetNISN << " : " << ans << '\n';
    } else {
        cout << "Not found" << '\n';
    }

    return 0;
}
