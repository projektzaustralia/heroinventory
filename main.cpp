// Hero's Inventory 3.0
// Demonstrates iterators
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void weapons()
{
    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter;

    vector<string> weapons;
    weapons.push_back("longsword");
    weapons.push_back("shortsword");
    weapons.push_back("dagger");
    weapons.push_back("dagger");
    weapons.push_back("light crossbow");

    cout << "Your Weapons:\n\n";
    for (iter = weapons.begin(); iter != weapons.end(); ++iter)
	{
        cout << *iter << endl;
	}
}

void armor()
{
    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter;

    vector<string> armor;
    armor.push_back("chainmail");
    armor.push_back("wooden shield");
    armor.push_back("helmet");
    armor.push_back("bracers");

    cout << "\n\nYour Armor:\n\n";
    for (iter = armor.begin(); iter != armor.end(); ++iter)
	{
        cout << *iter << endl;
	}
}

void items()
{
    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter;

    vector<string> items;
    items.push_back("potion");
    items.push_back("potion");
    items.push_back("caltrops");
    items.push_back("torch");
    items.push_back("rope");
    items.push_back("winter fur");
    items.push_back("sharpening stone");

    cout << "\n\nYour Items:\n\n";
    for (iter = items.begin(); iter != items.end(); ++iter)
	{
        cout << *iter << endl;
	}
}
void itemList()
{
    cout << "What would you like to see?" << endl;
    cout << "1. Weapons\n";
    cout << "2. Armor\n";
    cout << "3. Items\n";
    cout << "4. All\n";
    char menu;
    cin >> menu;

    switch(menu)
    {
        case 1:
            weapons();
            break;
        case 2:
            armor();
            break;
        case 3:
            items();
            break;
        default:
            cout << "Please select 1-3." << endl;
    }
}
int main()
{
    cout << "Welcome to Hero Inventory 1.0!\n";
    cout << "Created by David Zammit\n\n";
    cout << "This application is designed to help you keep track of your characters inventory by allowing you to navigate using type. You will be able to add items and remove items as well as manage your money.\n" << endl;

    cout << "Would you like to begin?" << endl;
    char ans;
    cin >> ans;
    switch(ans)
    {
        case 'y':
            cout << "Loading...\n\n" << endl;
            itemList();
            break;
        case 'n':
            cout << "Thank You!" << endl;
            return 0;
            break;
        default:
            cout << "Please select 'y' or 'n' to continue." << endl;
    }

    return 0;
}
