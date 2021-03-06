#ifndef MURLOK_H
#define MURLOK_H
#include "opponent.h"
#include "playercharacter.h"
#include "worrior.h"



class murlok:public opponentCharacter
{
public:
    murlok(int lvl = 1, std::string name = "Murlok");
    ~murlok();

    // Atakowanie
    virtual int attack();
    virtual void gainDamage(int dmg);

    virtual bool isDead();

    // Zwróc informacje o scieżce do obrazka
    virtual std::string returnImgPath();
    virtual int info(int number);

    
    // Przeciążanie operatora =
    // Przypisuje siłę bohatera do siły murloka
    void operator=(playerCharacter *player);
    
};

#endif // MURLOK_H
