#include <iostream>
#include <string>

using namespace std;

struct Student {
    long long NISN; // Use long long for large NISN Values
    string Name;
    int Value;
};

int main() {

    Student Data[7] = {
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9952382180, "Ari Lutfianto", 65},
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9965653989, "Arief Budiman", 60},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70}
    }; // Assume Data is already sorted by NISN

    long long targetNISN = 9950310962; // The NISN we are searching for
    int l = 0;
    int r = 6; // Last index of the array
    bool found = false;
    int ans = 0;
    int pos = 0;

    while (!found && l <= r) {
        int mid = (l + r) / 2;
        if (Data[mid].NISN > targetNISN) {
            r = mid - 1;
        } 
        else if (Data[mid].NISN < targetNISN) {
            l = mid + 1;
        } 
        else {
            found = true;
            pos = mid + 1 ;
            ans = Data[mid].Value;
        }
    }

    int realPosition=1;
    int realValue=80;

    if(pos==realPosition&&ans==realValue) cout<<"SUCCESSFUL"<<'\n';
    else cout<<"UNSUCCESSFUL"<<'\n';
	
}
