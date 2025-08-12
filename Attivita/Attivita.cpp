#include "Attivita.hpp"

Attivita::Attivita()
{
	this->name = "Unamed";
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
: name(a.name), description(a.description)
{
	return ;
}

const Attivita& Attivita::operator=(const Attivita &a)
{
	this->name = a.name;
	this->description = a.description;
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