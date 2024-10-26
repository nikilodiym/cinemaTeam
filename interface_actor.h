#ifndef IACTOR
#define IACTOR

#include "header_lib.h"

class IActor abstract
{
public:
	virtual void set_name(string name) = 0;
	virtual void set_surname(string surname) = 0;
	
	virtual string get_name() = 0;
	virtual string get_surname() = 0;
};


#endif // !IACTOR

