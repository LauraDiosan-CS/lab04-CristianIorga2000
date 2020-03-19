#include "bills.h"
#include <iostream>
#include <string.h>

Bill::Bill() {
	this->apt = 0;
	this->sum = 0;
	this->type = NULL;
}

Bill::Bill(int newApt, const char* newType, int newSum) {
	this->apt = newApt;
	this->type = new char[strlen(newType) + 1];
	strcpy_s(this->type, sizeof this->type, newType);
	this->sum = newSum;
}

Bill::Bill(const Bill& s) {
	this->apt = s.apt;
	this->sum = s.sum;
	this->type = new char[strlen(s.type) + 1];
	strcpy_s(this->type, sizeof this->type, s.type);
}

Bill::~Bill() {
if (this->type) {
	delete[] this->type;
	this->type = NULL;
	}
}

int Bill::getApt() {
	return this->apt;
}

char* Bill::getType() {
	return this->type;
}

int Bill::getSum() {
	return this->sum;
}

void Bill::set(int newApt, const char* newType, int newSum) {
	if (this->type)
		delete this->type;
	this->apt = newApt;
	this->type = new char[strlen(newType) + 1];
	strcpy_s(this->type, sizeof this->type, newType);
	this->sum = newSum;
}

Bill& Bill::operator=(const Bill& s) {
	this->set(s.apt, s.type, s.sum);
	return *this;
}

bool Bill::operator==(const Bill& s) {
	return ((this->apt == s.apt) && (this->sum == s.sum) && strcmp(this->type, s.type) == 0);
}