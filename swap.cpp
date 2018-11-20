#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *,int *);
int main(){
	int x,y;
	cout<<"enter value of x and y"<<endl;
	cin>>x>>y;
	swap(x,y);
	cout<<"after swap value of x and y"<<x<<y<<endl;
getch();
return 0;
}
void swap(int *a,int *b)
{
int t;
t=*b;
*b=*a;
*a=t;
}