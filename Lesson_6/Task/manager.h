#ifndef MANAGER_H
#define MANAGER_H

#include "coldsteel.h"
#include "firearms.h"
#include <vector>

class Manager: public ColdSteel, public Firearms
{
public:
    Manager();

    void add_cold_steel(ColdSteel m_cold_steel) {cold_steels.push_back(m_cold_steel);};
    void add_firearms(Firearms m_firearms) {firearmss.push_back(m_firearms);};

    void show_cold_steel();
    void show_firearms();
    ColdSteel find_cold_steel(string m_name);
    Firearms find_firearms(string m_name);
private:
    vector <ColdSteel> cold_steels;
    vector <Firearms> firearmss;
};

#endif // MANAGER_H
