#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Inventory {
private:
    int capacity;
    vector<string> items;

public:

    Inventory() : capacity(10) {}
    Inventory(int cap) : capacity(cap) {}
    Inventory(const Inventory& inv) : capacity(inv.capacity), items(inv.items) {}
    ~Inventory() {
    }

    // Getter
    int getCapacity() const {
        return capacity;
    }
    vector<string> getItems() const {
        return items;
    }
    //setter
    void setCapacity(int cap) { capacity = cap; }
    void setItems(vector<string> items) { this->items = items; }
    void SetItems(string item) { items.push_back(item); }

    // Methods
    void addItem(string item) {
        if (capacity > 0) {
            items.push_back(item);
            cout << "Item added: " << item << endl;
        }
        else {
            cout << "Inventory is full!" << endl;
        }
        capacity--;
    }

    void removeItem(string item) {
        for (int i = 0; i < items.size(); i++) {
            if (items[i] == item) {
                items.erase(items.begin() + i);
                cout << "Item removed: " << item << endl;
                capacity++;
                return;
            }
        }
        cout << "Item not found!" << endl;
    }

    void showInventory() const {
        cout << "Inventory: ";
        for (const auto& item : items) {
            cout << item << " ";
        }
        cout << endl;
    }
};

class Character
{
private:
    string name;
    int health;
    Inventory* inventory;
public:
    Character() { name = "Default"; health = 100; Inventory* inventory = new Inventory(); }
    Character(string name, int health, int invCapacity)
    {
        this->name = name;
        this->health = health;
        inventory = new Inventory(invCapacity);
    }
    Character(const Character& c)
    {
        name = c.name;
        health = c.health;
        inventory = new Inventory(*(c.inventory));
    }
    ~Character()
    {
        delete inventory;
    }
    string getName() { return name; }
    int gethealth() { return health; }
    Inventory* getInventory() { return inventory; }
    void setName(string name) { this->name = name; }
    void sethealth(int health) { this->health = health; }
    void setInventory(Inventory* inv) {
        Inventory* inventory = new Inventory;
        inventory->setCapacity(inv->getCapacity());
        inventory->setItems(inv->getItems());
        cout << "Inventory set for " << name << endl;
    }
    void attack(Character& target)
    {
        cout << name << " is attacking " << target.name << endl;
        target.sethealth(target.gethealth() - 5);
    }
    void heal(int amount)
    {
        health += amount;
        health = health > 100 ? 100 : health;
        cout << name << " is healing" << endl;
    }
};

class Warrior : public Character {
public:
    // Additional attributes specific to Warrior
    int strength;
    int armor;

    // Constructor
    Warrior() {
        strength = 10;
        armor = 5;
    }

    Warrior(const string& charName, int hp, int invCapacity, int str, int arm)
        : Character(charName, hp, invCapacity), strength(str), armor(arm) {
    }
    Warrior(const Warrior& w)
        : Character(w), strength(w.strength), armor(w.armor) {
    }

    // Destructor
    ~Warrior() {
    }
    //setters
    void setStrength(int str) { strength = str; }
    void setArmor(int arm) { armor = arm; }
    //getters
    int getStrength() { return strength; }
    int getArmor() { return armor; }

    // Override attack method
    void attack(Character& target) {
        cout << getName() << " is attacking " << target.getName() << " with a sword!" << endl;
        target.sethealth(target.gethealth() - 10);

    }

    // Warrior-specific methods
    void heavyAttack(Character& target) {
        cout << getName() << " performs a heavy attack!" << endl;
        target.sethealth(target.gethealth() - 20);
    }

    void shieldBlock(int damage) {
        cout << getName() << " blocks with a shield, reducing damage by " << armor << "!" << endl;
        sethealth(gethealth() - (damage - armor));
    }
};
void task1()
{
    Warrior w1("Warrior1", 100, 10, 15, 10);
    w1.heavyAttack(w1);
    w1.shieldBlock(10);
}
void task2()
{
    Character c1("Character1", 100, 10);
    Warrior w1("Warrior1", 100, 10, 15, 10);
    c1.attack(w1);
    w1.heavyAttack(c1);

}
void task3()
{
    Character c1("Character1", 100, 10);
    Warrior w1("Warrior1", 100, 10, 15, 10);
    Inventory inv1(5);
    c1.attack(w1);
    w1.heavyAttack(c1);
    inv1.addItem("Sword");
    inv1.addItem("Shield");
    c1.setInventory(&inv1);
    w1.setInventory(&inv1);

}
int main() {
    // task1();
    task2();
    // task3();
    return 0;
}