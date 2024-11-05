#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"veuillez entrer un nombre pour les verifire s'il est pair ou non:";
	cin>>n;
	if(n%2==0)
	{
		cout<<"le nombre "<<n<<" est pair"<<endl;
	}
	else
		cout<<"le nombre "<<n<<" est impair"<<endl;
	return 0;
}
