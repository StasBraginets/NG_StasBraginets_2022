#include "coldsteel.h"

#include <iostream>
ColdSteel::ColdSteel()
{
    name = "NoName";
    damage = -1;
    weight = -1;
    company = "NoCompany";
    demolished = -1;
}
ColdSteel::ColdSteel(string m_name, short m_damage, short m_weight,
                     string m_company, short m_demolished)
{
    name = m_name;
    damage = m_damage;
    weight = m_weight;
    company = m_company;
    demolished = m_demolished;
}

void ColdSteel::use_cold_steel()
{
    use_count++;                                        // count the number of uses
    if (use_count > demolished / 2)
    {
        cout << "Demolished is high than 50%."
             << "Damage is: " << damage / 2 << endl;
    }
    else {cout << "The damage is: " << damage << endl;}
}

void ColdSteel::set_damage(short m_damage)
{
    if (damage > 0) {damage = m_damage;}
    else            {damage = 0;}
}

void ColdSteel::set_weight(short m_weight)
{
    if (weight > 0) {weight = m_weight;}
    else            {weight = 0;}
}

void ColdSteel::set_demolished(short m_demolished)
{
    if (m_demolished > 0) {demolished = m_demolished;}
    else                  {demolished = 0;}
}
