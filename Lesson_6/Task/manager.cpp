#include "manager.h"


Manager::Manager()
{

}

void Manager::show_cold_steel()
{
    for (ColdSteel cold_steel : cold_steels)
    {
        cout << "Name: " << cold_steel.get_name() << endl;
        cout << "Damage: " << cold_steel.get_damage() << endl;
        cout << "Weight: " << cold_steel.get_weight() << endl;
        cout << "Company: " << cold_steel.get_company() << endl;
        cout << "Demolished: " << cold_steel.get_demolished() << endl << endl;
    }
}

void Manager::show_firearms()
{
    for (Firearms firearms : firearmss)
    {
        cout << "Name: " << firearms.get_name() << endl;
        cout << "Damage: " << firearms.get_damage() << endl;
        cout << "Weight: " << firearms.get_weight() << endl;
        cout << "Rapidity: " << firearms.get_rapidity() << endl;
        cout << "Range: " << firearms.get_range() << endl;
        cout << "Magazine: " << firearms.get_magazine() << endl << endl;
    }
}

ColdSteel Manager::find_cold_steel(string m_name)
{
    for (ColdSteel cold_steel : cold_steels)
    {
        if (cold_steel.get_name() == m_name)
        {
            return cold_steel;
        }
    }
    ColdSteel buff_knife;
    cout << "We didn`t find your knife" << endl;
    return buff_knife;
}

Firearms Manager::find_firearms(string m_name)
{
    for (Firearms firearms : firearmss)
    {
        if (firearms.get_name() == m_name)
            return firearms;
    }
    Firearms buff_bullet;
    cout << "We didn`t find your bullet" << endl;
    return buff_bullet;
}
