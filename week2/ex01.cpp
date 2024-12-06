/*Écrire un programme en C++ permettant d’afficher le mois en lettre selon le numéro saisi au clavier.  (  Si l’utilisateur tape 1 le programme affiche janvier,  si 2  affiche  février, si 3 affiche mars...)*/
#include<iostream>
using namespace std;
int main(){
	int Mois;
	if(Mois ==1){
		cout<<"Janvier"<<endl;
	}
	else if(Mois ==2){
		cout<<"Fevrier"<<endl;
	}
	else if(Mois ==3){
		cout<<"Mars"<<endl;
	}
	else if(Mois ==4){
		cout<<"Avrile"<<endl;
	}
	else if(Mois ==5){
		cout<<"Mai"<<endl;
	}
	else if(Mois ==6){
		cout<<"Juin"<<endl;
	}
	else if(Mois ==7){
		cout<<"Juille"<<endl;
	}
	else if(Mois ==8){
		cout<<"Aout"<<endl;
	}
	else if(Mois ==9){
		cout<<"Septembre"<<endl;
	}
	else if(Mois ==10){
		cout<<"Octobre"<<endl;
	}
	else if(Mois == 11){
		cout<<"Novembre"<<endl;
	}
	else if(Mois == 12){
		cout<<"Decembre"<<endl;
	}
	else
		cout<<"veuillez repeter"<<endl;
	return 0;
}

// la 2eme methode 
#include <iostream>
 using namespace std;
 int main(){
 int mois ;
 cout<<"Entrer un nombre:";  cin>>mois;
 switch (mois) {
 case 1:
  cout<<" Janvier"; break;
case 2:
  cout>>" février"; break;
case 3:
  cout<<" Mars";   break;
case 4:
  cout<<"Avril";   break;
case 5:
  cout<< "Mai";    break;
case 6:
  cout<<"Juin";    break;
case 7:
  cout<<"Juille";  break;
case 8:
  cout<<"Aout";    break;
case 9:
  cout<<"Septembre";  break;
case 10:
  cout<<"Octobre";   break;
case 11:
  cout<<"Novembre";  break;
case 12:
  cout<<"décembre"; break;
 default:
  cout<<"le numéro ne correspondant à aucun mois";
  break;
 }
 return 0;
 }
