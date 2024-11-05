#include<iostream>
using namespace std;
int main(){
	double n1,n2,n3,moyenne;
	cout<<"veuillez entrer la premiere note:";
	cin>>n1;
	cout<<"veuillez entrer la deusieme note:";
	cin>>n2;
	cout<<"veuillez entrer la troisieme note:";
	cin>>n3;
	moyenne=(n1+n2+n3)/3;
	cout<<"la moyenne est:"<<moyenne;
	return 0;
}
