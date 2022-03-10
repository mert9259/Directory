

using namespace std;

class kisi{
	private:
		//Kullanýlacak deðiþkenler sýnýfa özel
		int id;
		string name;
		string number;
		string email;
	public:
		//Dýþarýdan eriþilebilir üye fonksiyonlar
		
		//Kurucu fonksiyonlar parametreli veya parametresiz
		kisi();
		kisi(string ,string );
		kisi(string ,string ,string );
		//Methodlar
		void setName(string );
		void setNumber(string );
		void setEmail(string );
		string getName();
		string getNumber();
		string getEmail();
		void printScreen();
		
		//Overload operatör fonksiyonlarý
		kisi operator= (const kisi&)const;
		bool operator== (const kisi&)const;
};


