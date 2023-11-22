#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain : public Animal
{
public:
    Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    ~Brain();
};

#endif