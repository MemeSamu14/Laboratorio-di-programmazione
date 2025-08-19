#include "Attivita.hpp"

Attivita::Attivita()
{
	// this->name = "* VUOTO *";
	// aggiunta di unamed_1
	return ;
}

Attivita::~Attivita()
{
	return ;
}

Attivita::Attivita(std::string name)
{
	this->name = name;
	return ;
}

Attivita::Attivita(const Attivita &a)
: name(a.name), description(a.description), orarioInizio(a.orarioInizio), orarioFine(a.orarioFine)
{
	return ;
}

const Attivita& Attivita::operator=(const Attivita &a)
{
	if (this != &a)
	{
		this->name = a.name;
		this->description = a.description;
		this->orarioInizio = a.orarioInizio;
		this->orarioFine = a.orarioFine;
	}
	return (*this);
}

void	Attivita::setDescription(const std::string &str)
{
	this->description = str;
	return ;
}

const std::string&	Attivita::getName() const
{
	return (this->name);
}

void	Attivita::info( void ) const
{
	// std::cout << "Attivita" << std::endl;
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Description: " << this->description << std::endl;
	return ;
}

void		Attivita::setName(const std::string &a)
{
	this->name = a;
	return ;
}


const std::string&	Attivita::getDescription() const
{
	return (this->description);
}


const std::string&	Attivita::getOrarioInizio() const
{
	return (this->orarioInizio);
}

void				Attivita::setOrarioInizio(const std::string &a)
{
	this->orarioInizio = a;
}

const std::string&	Attivita::getOrarioFine() const
{
	return (this->orarioFine);
}

void				Attivita::setOrarioFine(const std::string &a)
{
	this->orarioFine = a;
}
