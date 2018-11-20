#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	std::string str ("there are two needle in this haystack with needle");
	std::string str2("needle");
	std::size_t found=str.find(str2);
	if(found!=std::string::npos)
		std::cout<<"first needle found at"<<found<<"\n";
	found=str.find("needle are small",found+1,6);
	if(found!=std::string::npos)
		std::cout<<"second needle found at"<<found<<"\n";
	found=str.find("haystack");
	if(found!=std::string::npos)
		std::cout<<"haystack also found at"<<found<<"\n";
	found=str.find(',');
	if(found!=std::string::npos)
		std::cout<<"period found at"<<found<<"\n";
	str.replace(str.find(str2),str2.length(),"preposition");
	std::cout<<str<<'\n';
getch();
return 0;
}
