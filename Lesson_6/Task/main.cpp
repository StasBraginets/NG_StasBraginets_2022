#include "coldsteel.h"
#include "firearms.h"
#include "manager.h"

int main()
{
    Manager manager;

    // Add some weapons to the slots
    ColdSteel knife1 ("Asura", 25, 35, "Save", 10);
    knife1.set_damage(30);
    manager.add_cold_steel(knife1);

    ColdSteel knife2;
    manager.add_cold_steel(knife2);

    Firearms bullet ("M24", 60, 3750, 0.5, 500, 10);
    bullet.set_range(400);
    manager.add_firearms(bullet);

    Firearms harf("Hall", 50, 2750, 1.5, 100, 30);
    manager.add_firearms(harf);

    // The using of weapons
    cout << "\t\tAll you weapons" << endl;
    cout << "\tKnifes" << endl;
    manager.show_cold_steel();
    cout << "\tFirearms" << endl;
    manager.show_firearms();

    ColdSteel use_cold_one;
    Firearms use_firearms_one;

    char answer;
    cout << "Enter 1 - Cold Steel, or 2 - Firearms: ";
    cin >> answer;

    while (cin.get() != '\n')
        continue;

    if (answer == '1')
    {
        string find_cold_steel;
        cout << "Enter the name: ";
        getline(cin, find_cold_steel);
        use_cold_one = manager.find_cold_steel(find_cold_steel);

        cout << "\tThe checking of demolished" << endl;
        for (short i = 0; i < use_cold_one.get_demolished(); i++)
        {
            use_cold_one.use_cold_steel();
        }
    }
    else if (answer == '2')
    {
        string find_firearms;
        cout << "Enter the name: ";
        getline(cin, find_firearms);
        use_firearms_one = manager.find_firearms(find_firearms);

        cout << "\tThe Checking of misfire" << endl;
        use_firearms_one.shoot();
        use_firearms_one.shoot();
    }
    else {return 0;}
    return 0;
}
