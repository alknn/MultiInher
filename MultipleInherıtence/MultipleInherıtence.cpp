
#include <iostream>
#include "MultipleInherıtance.h"

int main()
{

	OverloadClass<A, B, C> oc;
	oc(2);
	oc(3.2);
	oc(3.2f);
}
