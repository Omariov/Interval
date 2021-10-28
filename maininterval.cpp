#include <iostream>
#include "interval.cpp"
 
using namespace std;
 
int main()
{
    interval i1(2,3);
    interval i2(4,6);
    //interval i3(4,6);
    i1.afficher();
    i2.afficher();
	i1.operator^(i2);
	//i1.operator|(i3);
	//i1.afficher();
}
