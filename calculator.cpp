#include "calculator.h"
//сomments are edition too:)
//I can wrote some usefull stuff OR i can quote "Lord of the Rings"
//so
//It's a dangerous business, Frodo, going out your door.
// All we have to decide is what to do with the time that is given us.
//There’s some good in this world, Mr. Frodo… and it’s worth fighting for.


int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
