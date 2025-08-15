#ifndef ATTIVITA_HPP
# define ATTIVITA_HPP


#include <iostream>

class Attivita
{
private:
	std::string name;
	std::string description;
	// tempo	inizio
	// tempo	fine

public:
	Attivita();
	Attivita(std::string name);
	Attivita(const Attivita &a);
	const Attivita& operator=(const Attivita &a);
	void	setDescription(const std::string &str);
	const std::string&	getName() const;
	void		setName(const std::string &a);
	void	info( void ) const;
	~Attivita();
};


#endif