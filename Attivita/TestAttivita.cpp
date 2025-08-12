#include "TestAttivita.hpp"

void	TestAttivita::allTests( void )
{
	testDefaultConstructor();
	testNormalConstructor();
	testcopyConstructor();
	testOverloadAssignamentOperator();
	TestSetDescription();
	return ;
}

void	TestAttivita::testDefaultConstructor( void )
{
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Test Default Constructor" << std::endl;
	Attivita a;
	a.info();
	std::cout << "------------------------------------" << std::endl;
	std::cout << std::endl;
}


void	TestAttivita::testNormalConstructor( void )
{
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Test Normal Constructor" << std::endl;
	Attivita a("Corsa Mattiniera");
	a.info();
	std::cout << "------------------------------------" << std::endl;
	std::cout << std::endl;
}


void	TestAttivita::testcopyConstructor( void )
{
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Test copy Constructor" << std::endl;
	Attivita a("Corsa Mattiniera");
	a.setDescription("*generic description*");
	Attivita b(a);
	std::cout << "original" << std::endl;
	a.info();
	std::cout << "copy" << std::endl;
	b.info();
	std::cout << "------------------------------------" << std::endl;
	std::cout << std::endl;
}

void	TestAttivita::testOverloadAssignamentOperator()
{
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Test Assignament Operator" << std::endl;
	Attivita a("Corsa Mattiniera");
	Attivita b;
	std::cout << "original" << std::endl;
	a.info();
	a.setDescription("*generic description*");
	b = a;
	std::cout << "post assignament operator" << std::endl;
	b.info();
	std::cout << "------------------------------------" << std::endl;
	std::cout << std::endl;
}

void	TestAttivita::TestSetDescription()
{
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Test SetDescription" << std::endl;
	Attivita a("Corsa Mattiniera");
	std::cout << "before" << std::endl;
	a.info();
	a.setDescription("*generic description*");
	std::cout << "post" << std::endl;
	a.info();
	std::cout << "------------------------------------" << std::endl;
	std::cout << std::endl;
}
