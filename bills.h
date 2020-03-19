 #pragma once

#include <iostream>
#include <string.h>

class Bill {
private:
	int apt;
	char* type;
	int sum;

public:
	Bill();
	Bill(int newApt, const char* newType, int newSum);
	Bill(const Bill& s);
	~Bill();
	int getApt();
	char* getType();
	int getSum();
	void set(int newApt, const char* newType, int newSum);
	Bill& operator=(const Bill& s);
	bool operator==(const Bill& s);
};