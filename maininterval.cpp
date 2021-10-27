#include <iostream>
#include "interval.cpp"
 
using namespace std;
 
int main()
{
    interval i1(2,10);
    interval i2(0,6);
    interval i3(4,6);
    i1.afficher();
    i2.afficher();
	i1.operator^(i2);
	i1.operator|(i3);
	i1.afficher();
}
