#include "interval.h"
#include <iostream>
 
using namespace std;
 
interval::interval(int a=0,int b=0)
{
	this->min=a;
	this->max=b;
}
 
interval::interval(const interval& i)
{
    this->min=i.min;
	this->max=i.max;
}
 
void interval::afficher() const
{
    cout << "L'intervalle est [" << this->min << " , " << this->max << "]" << endl;
     
	for(int i=this->min; i<=this->max; i++)
	{
		cout <<i<<",";	
    }
	cout<<endl;  
}

void interval::taille_interval() const
{
	cout<<endl <<"la taille est: "<<(((this->max)-(this->min))+1)<<endl;
	
}

interval& interval::operator^(const interval& i)
{
	if(this->min>i.min)
	{
		this->min=i.min;
	}
	if(this->max<i.max)
	{
		this->max=i.max;
	}
	return *this;
	
}

interval& interval::operator|(const interval& i)
{
	if(this->min<i.min)
	{
		this->min=i.min;
	}
	if(this->max>i.max)
	{
		this->max=i.max;
	}
	return *this;
	
}




 

