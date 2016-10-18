#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;

class Podarok{
public:
	Podarok *next;
	Podarok *prev;
	static Podarok *head;

	void add();
	virtual void setSize(int) = 0;
	virtual char* getName() = 0;
	virtual int getSize() = 0;
	virtual void inform() = 0;

};

class Control : public Podarok{
public:
		static void del(char*);
		static void show();
		static Podarok* minSize();
};

