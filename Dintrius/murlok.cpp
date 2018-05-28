#include "murlok.h"

#include <ctime>
#include <iostream>

using namespace std;

murlok::murlok(int lvl, std::string name)
{
    currentHealth = 120 + (30*lvl);
    strenght = 6 + (1*lvl); // UWAGA, pierwszy lvl ma 8 siły!
    mana = 0;
}

int murlok::attack(){
    srand(time( NULL ) );
    int critick = rand() % 12 + 1;
    if(critick == 12){
        
        return strenght * 3.5;
    }
    else{
        return strenght * (rand()%(30-15 + 1) + 15) / 10; // losuj z zakresu (nie mozemy randa  double)
    }
}

void murlok::gainDamage(int dmg){
    currentHealth -= dmg;
    this->isDead();
}

void murlok::info(){
    cout << "Info o przeciwniku" << endl;
    cout << currentHealth << endl;
    cout << strenght << endl;
    cout << mana << endl;
}

bool murlok::isDead(){
    if(currentHealth<=0){
        cout << "Murlok nie żyje!" << endl;
        return true;
    }
    else
        return false;}
