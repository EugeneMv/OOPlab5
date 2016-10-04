#include <iostream>

class Towar
{
float cost;
public:
	void setCost(float cost);
	void getCost();
};

class Product : public Towar{
	char *col;
public:
	void setcolor(char *col);
	void getcolor();
};

class Tort : public Product{
	char *osnova;
public: 
	void setOsn(char *osnova);
	void getOsn();
};

class Candys : public Towar{
	
};

class Flowers : public Towar{
	int Kol;
public:
	void setKol(int Kol);
	void getKol();
};

class Hours : public Towar{
	char *land;
public:
	void setLand (char *land);
	void getLand ();
};

