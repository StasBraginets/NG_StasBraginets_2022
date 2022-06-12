#ifndef COLDSTEEL_H
#define COLDSTEEL_H


#include <string>
using namespace std;
class ColdSteel
{
public:
    // Two types of constructors
    ColdSteel();
    ColdSteel(string m_name, short m_damage, short m_weight,
              string m_company, short m_demolished);
    //Getters
    string get_name(){return name;}
    string get_company(){return company;}
    short get_damage(){return damage;}
    short get_weight(){return weight;}
    short get_demolished(){return demolished;}

    // Setters
    void set_name(string m_name)        {name = m_name;}
    void set_company(string m_company)  {company = m_company;}
    void set_damage(short m_damage);
    void set_weight(short m_weight);
    void set_demolished(short m_demolished);

    // Using
    void use_cold_steel();
private:
    string name;
    short damage;
    short weight;
    string company;
    short demolished;
    short use_count = 0;
};

#endif // COLDSTEEL_H
