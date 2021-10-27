#include <iostream>
#include <string>
 
class interval {
 
private :
    int min; 
    int max; 
 
public :
    
    interval(int a, int b);
    interval(const interval& i);
    void afficher() const;
    void taille_interval() const;
    interval& operator^(const interval& i); //union
	interval& operator|(const interval& i); //intersection
};
