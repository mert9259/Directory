#include <iostream>
#include <fstream>
#include <bits/stdc++.h> 
#include "rehber.h"

using namespace std;


rehber::rehber(){
	int index=0;
	string line;
	string intermediate; 
	vector <string> tokens;
	last_record=0;
	
	ifstream fileR("rehber.txt");
	
	if(fileR.is_open()){
		while(getline(fileR,line)){
			if(kontrol(index)){
				
				stringstream check(line); 
				
				while(getline(check, intermediate, '-')) 
			    { 
			        tokens.push_back(intermediate); 
			    } 
							
				kisiselRehber[index].setName(tokens[index*3+0]);
				kisiselRehber[index].setNumber(tokens[index*3+1]);
				kisiselRehber[index].setEmail(tokens[index*3+2]);
				
				index++;
				last_record++;
			}else{
				break;
			}
		}
		
		fileR.close();
		
	}else
		cout<<"Dosya yok\n";
}

bool rehber::saveRehber(){
	
	int index=0;
	
	ofstream fileW("rehber.txt");
	
	while(index<=last_record){
			if(kisiselRehber[index].getName() != "Isimsiz" && kisiselRehber[index].getNumber() != "Belirlenmedi")
				fileW<<kisiselRehber[index].getName()<<"-"<<kisiselRehber[index].getNumber()<<"-"<<kisiselRehber[index].getEmail()<<"\n";
		index++;
	}
	
	fileW.close();
}

bool rehber::kontrol(int index){
	string str = "Gecerli bir sayi giriniz.";
	
	try 
	{ 
		if (index<0 || index>99 || (index>=last_record && index!=last_record))
			throw str; 
		else
			return true;
	} 
	catch (string messageStr) 
	{ 
		cout << messageStr << endl;
		return false;
	} 

}

bool rehber::delPerson(int index){
	
	if(kontrol(index)){
		kisiselRehber[index].setName("Isimsiz");
		kisiselRehber[index].setNumber("Belirlenmedi");
		kisiselRehber[index].setEmail("Belirlenmedi");
		
		return true;
	}else{
		return false;
	}
}
bool rehber::addPerson(string new_name,string new_number,string new_email){
	
	
	kisiselRehber[last_record].setName(new_name);
	kisiselRehber[last_record].setNumber(new_number);
	kisiselRehber[last_record].setEmail(new_email);
	
	
	last_record++;
	
	return true;
}
bool rehber::addPerson(string new_name,string new_number){
	
	
	kisiselRehber[last_record].setName(new_name);
	kisiselRehber[last_record].setNumber(new_number);
	kisiselRehber[last_record].setEmail("Belirlenmedi");
	
	
	
	last_record++;
	
	return true;
}
bool rehber::editPerson(string new_name,string new_number,string new_email,int index){
	
	if(kontrol(index)){
			
		kisiselRehber[index].setName(new_name);
		kisiselRehber[index].setNumber(new_number);
		kisiselRehber[index].setEmail(new_email);
		
		return true;
	}else{
		return false;
	}
	
}

void rehber::printScreenPerson(string name){
	int index;
	bool isfind=false;
	
	for(index = 0; index<last_record; index++)
		if(kisiselRehber[index].getName() == name){
			cout<<index<<") "<<"Ad Soyad:"<<kisiselRehber[index].getName()<<"\t\tTel No:"<<kisiselRehber[index].getNumber()<<"\t\tE-posta:"<<kisiselRehber[index].getEmail()<<endl;
			isfind=true;
		}
	if(!isfind){
		cout<<"Aradiginiz kayit bulunamadi"<<endl;
	}
		
	
}
void rehber::printScreenRehber(){
	int index;
	
	for(index = 0; index<last_record; index++)
		if(kisiselRehber[index].getName() != "Isimsiz" && kisiselRehber[index].getNumber() != "Belirlenmedi")
			cout<<index<<") "<<"Ad Soyad:"<<kisiselRehber[index].getName()<<"\t\tTel No:"<<kisiselRehber[index].getNumber()<<"\t\tE-posta:"<<kisiselRehber[index].getEmail()<<endl;
}


















