#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double R,r,a,pi=3.14;
	cout<<"veuillez saisir le rayon du cercle:";
	cin>>r;
	R=pow(r,2);
	a=pi*R;
	cout<<"l'aire du cercle est : "<<a;
	return 0;
}
