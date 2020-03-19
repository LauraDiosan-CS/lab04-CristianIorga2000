#pragma once
#include "bills.h"

class Repo {
private:
	Bill bills[10];
	int size;
public:
	Repo();
	~Repo();
	void addElem(Bill& s);
	int getSize();
	Bill getElemFromPos(int pos);

};