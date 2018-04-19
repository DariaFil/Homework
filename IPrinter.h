#ifndef CPRINTER
#define CPRINTER

#include "IObject.h"

class IPrinter {
public:
	IPrinter() {}
	~IPrinter() {}
	virtual void print(IObject* object) const = 0;
};

#endif
