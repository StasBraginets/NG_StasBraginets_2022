#include "firearms.h"

Firearms::Firearms()
{
    name = "NoName";
    damage = -1;
    weight = -1;
    rapidity = -1;
    range = -1;
    magazine = -1;
}
Firearms::Firearms(string m_name, short m_damage, short m_weight, float m_rapidity,
                   short m_range, short m_magazine)
{
    name = m_name;
    damage = m_damage;
    weight = m_weight;
    rapidity = m_rapidity;
    range = m_range;
    magazine = m_magazine;
}

void Firearms::shoot()
{
    srand(time(NULL));
    misfire = rand() % 10;

    if (isFixed == false || misfire > 4)
    {
        char answer[4];

        cout << "The " << name << " misfired... Try to fix it." << endl <<
                "Do you want to fix it, right now? ";
        cin >> answer;
        answer[0] = tolower(answer[0]);

        if (answer[0] == 'y')
        {
            cout << "Alright, you fixed it." << endl;
            isFixed = true;
        }
        else if (answer[0] == 'n')
        {
            cout << "Another time." << endl;
            isFixed = false;
        }
        else
        {
            cout << "You didn`t answer correct.";
        }
    }
    else {cout << "It was great, none misfire!" << endl;}
}

void Firearms::set_damage(short m_damage)
{
    if (damage > 0) {damage = m_damage;}
    else            {damage = 0;}
}
void Firearms::set_weight(short m_weight)
{
    if (weight > 0) {weight = m_weight;}
    else            {weight = 0;}
}
void Firearms::set_rapidity(float m_rapidity)
{
    if (rapidity > 0.0) {rapidity = m_rapidity;}
    else            {rapidity = 0.0;}
}
void Firearms::set_range(short m_range)
{
    if (range > 0) {range = m_range;}
    else            {range = 0;}
}
void Firearms::set_magazine(short m_magazine)
{
    if (magazine > 0) {magazine = m_magazine;}
    else            {magazine = 0;}
}

