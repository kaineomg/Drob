#pragma once
#include<iostream>
using namespace std;
class Drob
{
private:
    int chis;
    int znam;
public:
  
    Drob(int chis1, int znam1)
        :chis{ chis1 }, znam{ znam1}
    {
        sokr();
    }
    Drob() :Drob(1, 1) {};
    Drob(int chis) : Drob(chis, 1) {};
   
    void setChis(int chis);
    void setZnam(int znam);
    int getChis();
    int getZnam();
    void showDrob() const;
    friend void showFriend(Drob drob);
    Drob& sloj(Drob drob1,Drob drob2);
    Drob& mult(Drob drob1, Drob drob2);
    Drob& sub(Drob drob1, Drob drob2);
    Drob& sloj(int _number);
   friend Drob& operator+(Drob drob1, Drob drob2);
   friend Drob& operator*(Drob drob1, Drob drob2);
   friend Drob& operator/(Drob drob1, Drob drob2);
    int Nod();
    void sokr();
    
};

