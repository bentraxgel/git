#pragma once

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice&);
	Ice& operator=(const Ice&);
	~Ice();
	AMateria* clone() const;
	void use(ICharacter& target);
};
