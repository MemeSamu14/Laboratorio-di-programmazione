#include "Registro.hpp"

Registro::Registro(const std::string &a)
: giorno(a)
{
	return ;
}


Registro::~Registro()
{
	return ;
}

Registro::Registro(const Registro &a)
: giorno(a.giorno)
{
	return ;
}

const Registro& Registro::operator=(const Registro &a)
{
	if (this != &a)
	{
		// this->getAttvita()
	}
	return (*this);
}

void	Registro::addAttivita(const Attivita &a, int index)
{
	if (index >= 10 || index < 0)
		return ;
	this->a[index] = a;
}

void	Registro::deleteAttivita(int index)
{
	if (index >= 10 || index < 0)
		return ;
	this->a->setName("* VUOTO *");
	// this->a[index] = NULL;
}

const std::string&	Registro::getGiorno() const
{
	return (this->giorno);
}

const Attivita& Registro::getAttvita(int index) const
{
	return (this->a[index]);
}
