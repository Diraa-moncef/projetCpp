#include<iostream>
using namespace std;
void ft_swap(int a,int b)
{
	int swp;
	swp=a;
	a=b;
	b=swp;
}
int main()
{
	int a,b;
	cout<<"veuillez entrer la valeur de a:";
	cin>>a;
	cout<<"veuillez entrer la veleur de b:";
	cin>>b;
	cout<<a<<endl;
	cout<<b<<endl;
	ft_swap(a,b);
	cout<<a<<endl;
	cout<<b<<endl;
	return 0;
}
