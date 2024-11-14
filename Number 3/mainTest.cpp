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

for(int i=0; i<7; i++)
	{
		if(Data[i].Value==60)
		{
			Data[i].Name = "Joko";
		}
	}

Student Check[7] = {                           

	{9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Joko", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Joko", 60},

	
};

bool flag=0;
  
    for(int i=0; i<7; i++)
	{
		if(Data[i].Name!=Check[i].Name) flag=1;
	}

    if(flag) cout<<"UNSUCCESSFULL"<<'\n';
	else cout<<"SUCCESSFULL"<<'\n';
	
}
