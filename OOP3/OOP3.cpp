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




Tort *trt = new Tort;
trt->setSize(10);
trt->setName(" ������� ");
trt->add();

Pirog *prg = new  Pirog;
prg->setSize(15);
prg->setName(" �������� ����� ");
prg->add();

Candy *cnd = new Candy;
cnd->setSize(3);
cnd->setName(" ������� ");
cnd->add();

cout << "\n���� ������ ��������:\n";
Control::show();

cout << endl << "������ �������" << endl;
Control::del(" ������� ");
Control::show();

cout << "������� ����������� �������: " << Control::minSize()->getName();
}