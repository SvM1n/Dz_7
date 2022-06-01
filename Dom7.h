#ifndef DOM7_H
#define DOM7_H
#include <iostream>
#include <math.h>

/////////////////////////////////////////////КРУГ///////////////////////////////////////////////////////
class Circle_dec {
    private:
        int R;
        double x;
        double y;
    public:
        Circle_dec();//конструктор без агрументов
        Circle_dec(int r, double x0, double y0);//конструктор с тремя аргументами
        Circle_dec(const Circle_dec& c);
        ~Circle_dec();
        int getR() const { return R; }
        double getX() const { return x; }
        double getY() const { return y; }
};

/*
class Circle_polar {
    private:
        double p;
        double fi;
    public:
        Circle_polar();//конструктор без агрументов
        Circle_polar(Circle_dec);//конструктор с одним аргументом для перехода из декартовых координат в полярные 
        ~Circle_polar();
};*/
////////////////////////////////////////////////////////////////////////////////////////////////////////




class Vector {
private:
    double x;
    double y;
public:
    Vector();//конструктор без агрументов
    Vector(double x0, double y0);//конструктор с двумя аргументами
    ~Vector();
};



class Complex {
private:
    double re;
    double im;
public:
    Complex();//конструктор без агрументов
    Complex(double re0, double im0);//конструктор с двумя аргументами
    ~Complex();
};

#endif