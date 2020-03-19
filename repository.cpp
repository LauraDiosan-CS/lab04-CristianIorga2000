#include "repository.h"

Repo::Repo() {
	this->size = 0;
}

Repo::~Repo() {}
void Repo::addElem(Bill& s){
	this->bills[size++] = s;
}

int Repo::getSize()
{
	return this->size;
}

Bill Repo::getElemFromPos(int pos){
	return this->bills[pos];
}

