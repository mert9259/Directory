#include "kisi.h"
using namespace std;


class rehber{
	private:
		//Son kiþi sayýsýný tutacak
		int last_record;
		kisi kisiselRehber[100];
	public:
		//Dýþarýdan eriþilebilir üye fonksiyonlar
		
		//Kurucu fonksiyonlar parametreli veya parametresiz
		//Kisi header filedan parametresiz kurucu fonksiyonu ile bütün rehberi kur.
		rehber();
		//Methodlar
		//Rehber methodlarý
		bool kontrol(int);
		bool saveRehber();
		bool delPerson(int);
		bool addPerson(string,string,string);
		bool addPerson(string,string);
		bool editPerson(string,string,string,int);
		
		//Rehberi ve kiþiyi ekrana basacak
		void printScreenPerson(string);
		void printScreenRehber();
		
};




