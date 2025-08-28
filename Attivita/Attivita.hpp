#ifndef ATTIVITA_HPP
# define ATTIVITA_HPP


#include <iostream>

class Attivita
{
	private:
		std::string name;
		std::string description;
		std::string orarioInizio;
		std::string orarioFine;
	public:
		Attivita();
		Attivita(std::string name);
		Attivita(const Attivita &a);
		const Attivita& operator=(const Attivita &a);
		void			setDescription(const std::string &str);
		const std::string&	getName() const;
		const std::string&	getDescription() const;
		void		setName(const std::string &a);
		void		info( void ) const;
		const std::string&	getOrarioInizio() const;
		void	setOrarioInizio(const std::string &a);
		const std::string&	getOrarioFine() const;
		void	setOrarioFine(const std::string &a);
		~Attivita();
};


#endif