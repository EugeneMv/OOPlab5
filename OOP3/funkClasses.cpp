#include "stdafx.h"
#include <iostream>
#include "myClasses.h"

using namespace std;

int Candys::CandysKol = 0;

void Towar::setCost(float f){
	Towar::cost = f;
}

void Towar::getCost(){
	cout << "стоимость: " << Towar::cost << endl; 
}

void Product::setcolor(char *c){
	Product::col = c;
}

void Product::getcolor(){
	cout << "цвет: " << Product::col << endl; 
}

void Tort::setOsn(char *c){
	Tort::osnova = c;
}

void Tort::getOsn(){
	cout << "основа: " << Tort::osnova << endl;
}

void Hours::setLand(char *c){
	Hours::land = c;
}

void Hours::getLand(){
	cout << "страна-производитель: " << Hours::land << endl;
}

void Flowers::setKol(int i){
	Flowers::Kol = i;
}

void Flowers::getKol(){
		cout << "количество: " << Flowers::Kol << endl;
}

void ICanModify(Towar &tt){
	tt.cost = 5;
}

void Curator::ICanModify2(Towar &ttt){
	ttt.cost = 56;
}