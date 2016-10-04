#include "stdafx.h"
#include "myClasses.h"
#include <iostream>

void main(){
Hours h;
Flowers f;
Tort t;
Candys c;

h.setCost(15);
h.setLand("Deutschland");

f.setCost(7.5);
f.setKol(6);

t.setcolor("green");
t.setCost(2.1);
t.setOsn("shokolad");

c.setCost(4);

h.getCost();
h.getLand();

f.getCost();
f.getKol();

t.getcolor();
t.getCost();
t.getOsn();

c.getCost();

}
