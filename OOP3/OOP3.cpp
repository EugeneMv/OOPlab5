#include "stdafx.h"
#include "myClasses.h"
#include <iostream>

using namespace std;

float del(float *f){
return *f/4;
}

void main(){
setlocale (LC_CTYPE, "Russian");
Hours h;
Flowers f;
Tort t;
Candys c, c2, c3;
Akustic a;
Instector i;
Towar tow; 
Curator cur;

h.setCost(15);
h.setLand("Deutschland");

f.setCost(7.5);
f.setKol(6);

t.setcolor("����������");
t.setCost(2.1);
t.setOsn("�������");

c.setCost(4);
c.setcolor("�����");
c.setOsn("����");

h.b.setBud(false);
h.isBudilnik();

a.SetGuitarCost(12);
a.setStruni("metal");

cout << "����\n";
h.getCost();
h.getLand();

cout << "\n�����\n";
f.getCost();
f.getKol();

cout << "\n����\n";
t.getcolor();
t.getCost();
t.getOsn();

cout << "\n�������\n";
c.getCost();
c.getcolor();
c.getOsn();

cout << "\n������������ ������\n";
a.GetGuitarCost();
a.getStruni();
a.KolOnStash();

cout << "\n������\n";
i.IKnowAllAboutYou(f);

cout << "\n�����\n";
ICanModify(tow);
cur.ICanModify2(tow);
tow.getCost();

Candys *Iriska = new Candys;

Printer Proverka;
Proverka.IAmPrinting(Iriska);

int i1 = 7;
const float i3 = 6;
float i2;
i2 = static_cast<float>(i1);
cout << "\n" <<i2/2 << endl;
cout << del(const_cast<float *>(&i3));

Tort *pt;
Candys *pc = new Candys;
pt = dynamic_cast<Tort *>(pc);
pt->ToConcole();
}
