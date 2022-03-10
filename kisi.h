

using namespace std;

class kisi{
	private:
		//Kullan�lacak de�i�kenler s�n�fa �zel
		int id;
		string name;
		string number;
		string email;
	public:
		//D��ar�dan eri�ilebilir �ye fonksiyonlar
		
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
		
		//Overload operat�r fonksiyonlar�
		kisi operator= (const kisi&)const;
		bool operator== (const kisi&)const;
};


