#include<iostream>
#include<conio.h>
using namespace std;
struct student{
char name[50];
int  roll;
float marks;
};
int main(){
	student s;
	cout<<"enter name";
	cin>>s.name;
	cout<<"enter roll";
	cin>>s.roll;
	cout<<"enter marks";
	cin>>s.marks;
	cout<<"name"<<s.name;
	cout<<"roll"<<s.roll;
	cout<<"marks"<<s.marks;
getch();
return 0;
}
