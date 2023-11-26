#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

void ft()
{
    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    tmp = new Ice();
    me->equip(tmp);
    me->equip(tmp); //free the same adress double times;
    me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
    me->equip(new Ice());
    std::cout<<"------------"<<std::endl;
    delete me;
    std::cout<<"22222222"<<std::endl;
    // delete src;
    // std::cout<<"33333333"<<std::endl;
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(1);
    // me->unequip(2);
    // me->unequip(3);
    // me->equip(tmp);
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
}

int main()
{
    ft();
    system("leaks FinalFantasy");
    return 0;
}