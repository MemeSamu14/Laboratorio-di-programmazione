#ifndef TESTATTIVITA_HPP
# define TESTATTIVITA_HPP

#include "Attivita.hpp"

class TestAttivita
{
	private:
		TestAttivita(){};
		~TestAttivita(){};
		static void	testDefaultConstructor();
		static void	testNormalConstructor();
		static void	testcopyConstructor();
		static void	testOverloadAssignamentOperator();
		static void	TestSetDescription();
	public:
		static void	allTests();

};



#endif