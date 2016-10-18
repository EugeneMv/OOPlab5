#include "stdafx.h"
#include "myClasses.h"
#include "Template.h"
#include <iostream>

using namespace std;

void main(){
setlocale (LC_CTYPE, "Russian");
Hours h;
Flowers f;
Tort t;
Candy c, c2, c3;
Akustic a;
Instector i;
Towar tow; 
Curator cur;

h.setCost(15);
h.setLand("Deutschland");

f.setCost(7.5);
f.setKol(6);

t.setcolor("шоколадный");
t.setCost(2.1);
t.setOsn("шоколад");

c.setCost(4);
c.setcolor("белый");
c.setOsn("крем");

h.b.setBud(false);
h.isBudilnik();

a.SetGuitarCost(12);
a.setStruni("metal");

cout << "часы\n";
h.getCost();
h.getLand();

cout << "\nцветы\n";
f.getCost();
f.getKol();

cout << "\nторт\n";
t.getcolor();
t.getCost();
t.getOsn();

cout << "\nконфеты\n";
c.getCost();
c.getcolor();
c.getOsn();

cout << "\nАкустическая гитара\n";
a.GetGuitarCost();
a.getStruni();
a.KolOnStash();

cout << "\nДрузья\n";
i.IKnowAllAboutYou(f);

cout << "\nТовар\n";
ICanModify(tow);
cur.ICanModify2(tow);
tow.getCost();




Tort *trt = new Tort;
trt->setSize(10);
trt->setName(" медовик ");
trt->add();

Pirog *prg = new  Pirog;
prg->setSize(15);
prg->setName(" яблочный пирог ");
prg->add();

Candy *cnd = new Candy;
cnd->setSize(3);
cnd->setName(" конфета ");
cnd->add();

cout << "\nвесь список подарков:\n";
Control::show();

cout << endl << "удалим конфету" << endl;
Control::del(" конфета ");
Control::show();

cout << "подарок наименьшего размера: " << Control::minSize()->getName();
}