#include <iostream>
#include "Template.h"

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

class Product :  public Towar, public Podarok{
	char *col;
	char *name;
	int size;
public:
	int getSize(){ return Product::size;};
	void setSize(int f){size = f;};
	void setName(char *c){name = c;};
	char* getName(){ return name;};

	void inform();

	void setcolor(char *col);
	void getcolor();

};

class Tort :  public Product{
	char *osnova;
public:
	void setOsn(char *osnova);
	void getOsn();
};

class Candy :  public Tort{

};

class Pirog : public Product{

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

