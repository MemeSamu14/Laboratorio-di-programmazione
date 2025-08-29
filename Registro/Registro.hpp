#ifndef REGISTRO_HPP
# define REGISTRO_HPP

#include "../Attivita/Attivita.hpp"

class Registro
{
	private:
		std::string			giorno;
		Attivita			a[10];
	public:
		Registro(const std::string &a);
		Registro(const Registro &a);
		const Registro& operator=(const Registro &a);
		~Registro();
		void		addAttivita(const Attivita &a, int index);
		void		deleteAttivita(int index);

		const std::string&	getGiorno() const;
		const Attivita&		getAttvita(int index) const;
};

#endif