#include "kisi.h"
using namespace std;


class rehber{
	private:
		//Son ki�i say�s�n� tutacak
		int last_record;
		kisi kisiselRehber[100];
	public:
		//D��ar�dan eri�ilebilir �ye fonksiyonlar
		
		//Kurucu fonksiyonlar parametreli veya parametresiz
		//Kisi header filedan parametresiz kurucu fonksiyonu ile b�t�n rehberi kur.
		rehber();
		//Methodlar
		//Rehber methodlar�
		bool kontrol(int);
		bool saveRehber();
		bool delPerson(int);
		bool addPerson(string,string,string);
		bool addPerson(string,string);
		bool editPerson(string,string,string,int);
		
		//Rehberi ve ki�iyi ekrana basacak
		void printScreenPerson(string);
		void printScreenRehber();
		
};




