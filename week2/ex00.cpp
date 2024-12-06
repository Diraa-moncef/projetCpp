/*Écrire un programme en C++ qui demande l'âge d'un enfant et permet d'informer de sa catégorie sachant que les catégories sont les suivantes: 
"poussin de 6 a 7 ans"   
"pupille de 8 a 9 ans "   
"minime de 10 a 11 ans "  
" cadet après 12 ans ". */

#include<iostream>

using namespace std;
int main(){
	int age;
	cout<<"veuillez entrer l'age de votre enfant:"<<endl;
	cin>>age;
	if(age<=7 && age>=6){
		cout<<"poussin de 6 a 7 ans"<<endl;
	}
	else if(age<=9 &&age>=8){
		cout<<"pupille de 8 a 9 ans"<<endl;
	}
	else if(age <=11 &&age>=10){
		cout<<"minime de 10 a 11 ans"<<endl;
	}
	else if(age>=12){
		cout<<"cadet après 12 ans"<<endl;
	}
	else
	cout<<"error"<<endl;
return 0;
}

