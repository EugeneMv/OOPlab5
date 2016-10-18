#include "stdafx.h"
#include <iostream>
#include "Template.h"
#include "myClasses.h"

using namespace std;


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

Podarok *Podarok::head = NULL;

void Podarok::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
		this->prev = NULL;
		
	}
	else
	{
		Podarok * q = head;
		if (q->next == NULL)
		{
			if(this->getSize() > q->getSize()){
				head = this;
				this->next = q;
				this->prev = NULL;
			}
			else{
			q->next = this;
			this->next = NULL;
			this->prev = head;}
		}
		else
		{
			bool exit = false;
			while(q != NULL){
				if(this->getSize() > q->getSize()){
					if(q == head){
					 head = this;
					 this->next = q;
					 this->prev = NULL;
					 q->prev = this;
					 exit = true;
					}
					else{
					q->prev->next = this;
					this->next = q;
					this->prev = q->prev;
					q->prev = this;
					 exit = true;
					}
				}
				else if(q->next == NULL){
					q->next = this;
					this->prev = q;
					this->next = NULL;
					exit = true;
				}
				else
				q = q->next;
				if(exit)
					break;
		}
		}
	}
}

void Control::del(char *Name){
	Podarok *temp = head;
	while (head)
	{
		if (strcmp(temp->getName(),Name)==0)
		{		
			if (temp->next==NULL && temp->prev==NULL)
			{
				cout << "deleted\n";
				head = NULL;
				delete temp;
				break;
			}
			else if (temp->prev == NULL && temp->next != NULL)
			{
				cout << "deleted\n";
				head = temp->next;
				temp->next->prev = head;
				delete temp;
				break;

			}
			else if (temp->next == NULL && temp->prev!=NULL)
			{
				cout << "deleted\n";
				temp->prev->next = NULL;
				delete temp;
				break;

			} 
			else if (temp->next != NULL && temp->prev != NULL)
			{
				cout << "deleted\n";
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				delete temp;
				break;

			}
		}
		if(temp->next != NULL)
		temp = temp->next;
		else break;
	}
}

void Control::show()
{
	Podarok *p = head;
	if (!head)
	{
		cout << "\nEmpty\n" << endl;
	}
	else
	{
		while (p)
		{
			p->inform();
			p = p->next;
		}
	}
}

void Product::inform(){
	cout << "название подарка: " << Product::getName();
	cout << "// его размер(см.куб): "<<Product::getSize() << endl;
}

Podarok* Control::minSize(){
	int min;
	Podarok *q = head, *p = head;
	min = q->getSize();
	while (q != NULL)
	{
		if(min > q->getSize()){
			min = q->getSize(); 
			p = q;
		}
		q = q->next;
	}
	return p;
}