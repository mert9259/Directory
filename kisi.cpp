#include <iostream>
#include "kisi.h"

using namespace std;

kisi::kisi(){
	name="Isimsiz";
	number="Belirlenmedi";
	email="Belirlenmedi";
}
kisi::kisi(string set_name,string set_number){
	name=set_name;
	number=set_number;
	email="Belirlenmedi";
}
kisi::kisi(string set_name,string set_number,string set_email){
	name=set_name;
	number=set_number;
	email=set_email;
}


void kisi::setName(string new_name){
	name=new_name;
}
void kisi::setNumber(string new_number){
	number=new_number;
}
void kisi::setEmail(string new_email){
	email=new_email;
}


string kisi::getName(){
	return name;
}
string kisi::getNumber(){
	return number;
}
string kisi::getEmail(){
	return email;
}
void kisi::printScreen(){
	cout<<"Ad Soyad:"<<name<<"\tTel No:"<<number<<"\tE-posta:"<<email<<endl;
}

kisi kisi::operator= (const kisi& t_kisi)const{
	kisi new_kisi(t_kisi.name,t_kisi.number,t_kisi.email);
	return new_kisi;
}

bool kisi::operator== (const kisi& t_kisi)const{
	return ( name == t_kisi.name && number == t_kisi.number && email == t_kisi.email );
}














