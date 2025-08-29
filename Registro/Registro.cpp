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
	for (int i = 0; i < 10; i++)
		this->a[i] = a.getAttvita(i);
	return ;
}

const Registro& Registro::operator=(const Registro &a)
{
	if (this != &a)
	{
		this->giorno = a.getGiorno();
		for (int i = 0; i < 10; i++)
			this->a[i] = a.getAttvita(i);
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
	   this->a[index].setName("* VUOTO *");
}

const std::string&	Registro::getGiorno() const
{
	return (this->giorno);
}

const Attivita& Registro::getAttvita(int index) const
{
	return (this->a[index]);
}
