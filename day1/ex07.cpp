#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"veuillez entrer la valeur a:";
	cin>>a;
	cout<<"veuillez entrer la valeur b:";
	cin>>b;
	cout<<"veuillez entrer la valeur c:";
	cin>>c;
	int max;
	if(a >=b && a>=c)
	{
		max=a;
	}
	else if(b >= a && b>=c)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	cout <<"le plus grand nombre est:"<<max<<endl;
	return 0;
}
