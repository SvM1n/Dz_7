#include "Dom7.h"


///////////////////////////////////////CIRCLE////////////////////////////////////////////////////////
Circle_dec::Circle_dec() : R(0), x(0), y(0) { };//конструктор без агрументов
Circle_dec::Circle_dec(int r, double x0, double y0) : R(r), x(x0), y(y0) { };//конструктор с тремя аргументами 

Circle_dec::Circle_dec(const Circle_dec& c) {
	this->R = (c.R);
	this->x = (c.x);
	this->y = (c.y);
}
Circle_dec::~Circle_dec() {};
/*
Circle_polar::Circle_polar() : p(0), fi(0) { };//конструктор без агрументов
Circle_polar::Circle_polar(Circle_dec circ)//конструктор с одним аргументом
{ 
	int R = circ.getR();
	double x = circ.getX();
	double y = circ.getY();
	p = sqrt(pow(x, 2) + (y, 2));
	fi = atan(y / x);
};
Circle_polar::~Circle_polar() {};*/
////////////////////////////////////////////////////////////////////////////////////////////////////////






//////////////////////////////////////////////VECTOR//////////////////////////////////////////////////
Vector::Vector() :x(0), y(0) { };
Vector::Vector(double x0, double y0) :x(x0), y(y0) { };
Vector::~Vector(){ };
////////////////////////////////////////////////////////////////////////////////////////////////////////






////////////////////////////////////////////////////////////////////////////////////////////////////////
Complex::Complex():re(0),im(0) { };
Complex::Complex(double re0, double im0) :re(re0), im(im0) { };
Complex::~Complex() { };
////////////////////////////////////////////////////////////////////////////////////////////////////////