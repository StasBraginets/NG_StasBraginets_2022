#ifndef FIREARMS_H
#define FIREARMS_H


#include <ctime>
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
class Firearms
{
public:
    Firearms();
    Firearms(string m_name, short m_damage, short m_weight, float m_rapidity,
             short m_range, short m_magazine);

    // Getters
    string get_name(){return name;}
    short get_damage(){return damage;}
    short get_weight(){return weight;}
    short get_rapidity(){return rapidity;}
    short get_range(){return range;}
    short get_magazine(){return magazine;}

    // Setters
    void set_name(string m_name){name = m_name;}
    void set_damage(short m_damage);
    void set_weight(short m_weight);
    void set_rapidity(float m_rapidity);
    void set_range(short m_range);
    void set_magazine(short m_magazine);

    void shoot();
private:
    string name;
    short damage;
    short weight;
    float rapidity;
    short range;
    short magazine;
    short misfire;
    bool isFixed = true;
};

#endif // FIREARMS_H
