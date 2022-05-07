#include "Circle.h"
#include "Vector.h"
#include "Complex.h"
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	Complex a(4, 1);
	Complex b(3, 2);
	a.sum(b);
	a.print();
}