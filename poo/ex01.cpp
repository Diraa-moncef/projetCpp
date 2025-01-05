#include<iostream>
using namespace std;

class Rectangle{
	int a,b;
	public:
	Rectangle(){
		a=0;
		b=0;
	}
	Rectangle(int lenght ,int width){
		a=lenght;
		b=width;
	}
	int surface(){
		return a*b;}
};
int main(){
	Rectangle rect1;
	Rectangle rect2(20,30);
	cout<<rect1.surface()<<endl;
	cout<<rect2.surface()<<endl;
	return 0;
}
