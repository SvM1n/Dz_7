#ifndef DOM7_H
#define DOM7_H
#include <iostream>
#include <math.h>

/////////////////////////////////////////////����///////////////////////////////////////////////////////
class Circle_dec {
    private:
        int R;
        double x;
        double y;
    public:
        Circle_dec();//����������� ��� ����������
        Circle_dec(int r, double x0, double y0);//����������� � ����� �����������
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
        Circle_polar();//����������� ��� ����������
        Circle_polar(Circle_dec);//����������� � ����� ���������� ��� �������� �� ���������� ��������� � �������� 
        ~Circle_polar();
};*/
////////////////////////////////////////////////////////////////////////////////////////////////////////




class Vector {
private:
    double x;
    double y;
public:
    Vector();//����������� ��� ����������
    Vector(double x0, double y0);//����������� � ����� �����������
    ~Vector();
};



class Complex {
private:
    double re;
    double im;
public:
    Complex();//����������� ��� ����������
    Complex(double re0, double im0);//����������� � ����� �����������
    ~Complex();
};

#endif