//============================================================================
// Name        : heloCPP.cpp
// Author      : szymon
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "animal.h"

int main() {
	Animal a("meow meow", "cat", 3, 10, 2);

	Animal *x = new Monkey(a,2);
	x->getInfo();
	delete x;

	return 0;
}
