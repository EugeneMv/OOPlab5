#include "stdafx.h"
#include <iostream>
#include "myClasses.h"

using namespace std;

void Towar::setCost(float f){
	Towar::cost = f;
}

void Towar::getCost(){
	cout << "stoimost: " << Towar::cost << endl; 
}

void Product::setcolor(char *c){
	Product::col = c;
}

void Product::getcolor(){
	cout << "color: " << Product::col << endl; 
}

void Tort::setOsn(char *c){
	Tort::osnova = c;
}

void Tort::getOsn(){
	cout << "osnova: " << Tort::osnova << endl;
}

void Hours::setLand(char *c){
	Hours::land = c;
}

void Hours::getLand(){
	cout << "strana: " << Hours::land << endl;
}

void Flowers::setKol(int i){
	Flowers::Kol = i;
}

void Flowers::getKol(){
		cout << "koli4estvo: " << Flowers::Kol << endl;
}