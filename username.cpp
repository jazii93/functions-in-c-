#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char user [30],pass[30];
	cout<<"enter user name"<<endl;
	gets(user);
	cout<<"enter password "<<endl;
	gets(pass);
	if(user=="jazib" && pass=="pak"){
	cout<<"login successful";
	}else{
	cout<<"error";
	}
	
getch();
return 0;
}