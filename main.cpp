#include <iostream>
#include <conio.h>
#include <string>
#include "rehber.h"
#define MAX_NUMBER 50

using namespace std;


rehber rehberMert;


getMenu(){
	system("CLS");
	cout<<"1)Listele"<<endl;
	cout<<"2)Ekle"<<endl;
	cout<<"3)Bul"<<endl;
	cout<<"4)Duzenle"<<endl;
	cout<<"5)Sil"<<endl;
	cout<<"6)Cikis"<<endl;
}

addPerson(){
	char a[50];
	string name,surname,email,number;
	
	
	cout<<"Ad giriniz:"<<endl;
	cin>>name;
	cout<<"Soyad giriniz:"<<endl;
	cin>>surname;
	cout<<"Numarayi bosluk birakmadan giriniz:"<<endl;
	cin>>number;
	cout<<"Email giriniz:"<<endl;
	cin>>email;
	
	rehberMert.addPerson(name+" "+surname,number,email);
	
	cout<<"Kayit basarili."<<endl;
	
}

editPerson(){
	string name,surname,email,number;
	int index;
	bool isFind=true;
	
	rehberMert.printScreenRehber();
	cout<<"Duzenlemek istediginiz kisinin sayisini giriniz."<<endl;
	cin>>index;
	
	system("CLS");
	
	while(!rehberMert.kontrol(index))
	{
		rehberMert.printScreenRehber();
		cout<<"Duzenlemek istediginiz kisinin sayisini giriniz. Iptal etmek icin 200 giriniz."<<endl;
		cin>>index;
		
		if(index==200){
			isFind=false;
			cout<<"Duzenleme olmadi"<<endl;
			break;
		}
		
		system("CLS");
	}
	
	if(isFind){
		
		cout<<"Ad giriniz:"<<endl;
		cin>>name;
		cout<<"Soyad giriniz:"<<endl;
		cin>>surname;
		cout<<"Numarayi giriniz:"<<endl;
		cin>>number;
		cout<<"Email giriniz:"<<endl;
		cin>>email;
		
		rehberMert.editPerson(name+" "+surname,number,email,index);
		
		cout<<"Duzenleme basarili."<<endl;
	}
	
	
}

int main(int argc, char** argv) {
	
	int index=0;
	string name,surname;
	
	while(index!=6){
		getMenu();
		cin>>index;
		switch(index){
			case 1:
				system("CLS");
				rehberMert.printScreenRehber();
				cout<<"Geri donmek icin bir tusa basiniz. "<<endl;
				getch();
				break;
			case 2:
				system("CLS");
				addPerson();
				cout<<"Geri donmek icin bir tusa basiniz. "<<endl;
				getch();
				break;
			case 3:
				system("CLS");
				cout<<"Ad giriniz:"<<endl;
				cin>>name;
				cout<<"Soyad giriniz:"<<endl;
				cin>>surname;
				
				rehberMert.printScreenPerson(name+" "+surname);
				cout<<"Geri donmek icin bir tusa basiniz. "<<endl;
				
				getch();
				break;
			case 4:
				system("CLS");
				editPerson();
				cout<<"Geri donmek icin bir tusa basiniz. "<<endl;
				getch();
				break;
			case 5:
				system("CLS");
				rehberMert.printScreenRehber();

				cout<<"Silmek için sayi gir"<<endl;
				cin>>index;
				
				if(rehberMert.delPerson(index))
					cout<<"Basarili sekilde silindi.";
				cout<<"\nGeri donmek icin bir tusa basiniz. "<<endl;
				getch();
				break;
			case 6:
				rehberMert.saveRehber();
				cout<<"Geri donmek icin bir tusa basiniz. "<<endl;
				break;
			default:
				system("CLS");
				cout<<"Gecersiz bir sayi girdiniz."<<endl;
				cout<<"Geri donmek icin bir tusa basiniz. "<<endl;
				getch();
				break;
		}
	}
	
	
	return 0;
}

