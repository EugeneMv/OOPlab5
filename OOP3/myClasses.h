#include <iostream>
using namespace std;

class Instector;
class Towar;


class Curator{
public:
	void ICanModify2(Towar &ttt);
};

void ICanModify(Towar &tt);

class Towar
{
float cost;
public:
	friend void Curator::ICanModify2(Towar &);
	friend void ICanModify(Towar &);
	void setCost(float cost);
	void getCost();
};

class Product :  public Towar{
	char *col;
public:
	void setcolor(char *col);
	void getcolor();
	virtual void ToConcole() = 0;
	virtual void setOsn(char *c) = 0;
};

class Tort : virtual public Product{
	char *osnova;
public:
	 void ToConcole(){
	 }
	void setOsn(char *osnova);
	void getOsn();
};

class Candys :  public Tort{
		static int CandysKol;
public:
	Candys(){CandysKol++;};
	~Candys(){CandysKol--;};
	void getCandysKol(){
		cout << endl << "Количество объектов конфет " << CandysKol << endl;
	}
	 void ToConcole(){
		 cout << "\n Количество объектов конфет " << CandysKol << endl;
	 };
};




class Flowers : public Towar{
private:
	int Kol;
	friend Instector;
public:
	void setKol(int Kol);
	void getKol();
};

class Hours : public Towar{
	class budilnik{
	
	public: 
		void setLand(char *land){this->setLand(land);};
		void setBud(bool b){this->IsBud = b;};
		bool IsBud;
	};
	char *land;
public:
		budilnik b;
	void setLand (char *land);
	void isBudilnik(){if(b.IsBud) cout << "yes\n"; else cout << "no\n";};
	void getLand ();
};

class Guitar : protected Towar{
protected:
	char *struni;
public: 
void SetGuitarCost(float f){
	setCost(f);
	}
void GetGuitarCost(){
	getCost();
	}
};

class Akustic: public Guitar{
public:
		static const int Kol = 9;
	void setStruni(char *c){
		this->struni = c;
	};
	void getStruni(){
		cout << "струны: " << this->struni << endl;
	};
	const void KolOnStash(){
		cout << "штук на складе: " << this->Kol << endl;
	};
};


class Instector{
public:
	void IKnowAllAboutYou(Flowers& fl){
		cout << "количество цветов: " << fl.Kol<< endl;
	}
};

class Printer{
public:
	void IAmPrinting(Candys *t){
		t->ToConcole();
		cout << "Type " << typeid(t).name() << endl;
	}
};