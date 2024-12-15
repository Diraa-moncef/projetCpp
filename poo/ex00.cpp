#include <iostream>
using namespace std ;
class Book{	
	public:
	string title;
	string author;
	int price ;
	int pages ;
};
int main(){
	Book book1;
	book1.price=300;
	book1.pages=700;
	book1.title="safezone";
	cout<<book1.title<<endl;
	cout<<book1.price<<endl;
	cout<<book1.pages<<endl;
	return 0;
};
