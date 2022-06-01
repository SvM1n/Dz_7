#include "Dom7.h"
int main()
{
    //КРУГ
    Circle_dec c1;//вызывает первый конструктор
    Circle_dec c2(4,0,0);//вызывает второй конструктор
    Circle_dec c3(c2);//первый вариант копирующего конструктора
    c1 = c2; //второй вариант копирующего конструктора
   // Circle_polar c4 = c2; //переход из декартовых координат в полярные


    Vector v1;
    Vector v2(5, 4);
    Vector v3 = v2;


    Complex chis1;
    Complex chis2(2, -3);
    Complex chis3(chis1);

}
