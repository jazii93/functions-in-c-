#include<iostream>
#include<conio.h>
using namespace std;
int max(int a,int b);
int main(){
	int x,y;
	cout<<"enter first no"<<endl;
	cin>>x;
	cout<<"enter second no "<<endl;
	cin>>y;
	max(x,y);
getch();
return 0;
}
int max(int a,int b){

if(a>b){
cout<<"first greater";
}else{
cout<<"second greater";

}
}
