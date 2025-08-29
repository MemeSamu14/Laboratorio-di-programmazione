#include "gtest/gtest.h"
#include "Registro.hpp"

class RegistroTest : public ::testing::Test 
{
	protected:
		Registro *reg;
		void SetUp() override
		{
			reg = new Registro("Lunedi");
		}

		void TearDown() override
		{
			delete reg;
		}
};


TEST_F(RegistroTest, NormalConstructor)
{
    ASSERT_EQ("Lunedi", reg->getGiorno());
}

TEST_F(RegistroTest, AddAttivita)
{
    Attivita attivita("Test");
    attivita.setDescription("Teest");
    reg->addAttivita(attivita, 0);
    ASSERT_EQ("Test", reg->getAttvita(0).getName());
    ASSERT_EQ("Teest", reg->getAttvita(0).getDescription());
}

TEST_F(RegistroTest, AddAttivitaFuoriRange)
{
    Attivita attivita("Test");
    ASSERT_NO_FATAL_FAILURE(reg->addAttivita(attivita, 15));
}

TEST_F(RegistroTest, DeleteAttivita)
{
    Attivita attivita("Test");
    reg->addAttivita(attivita, 5);
    reg->deleteAttivita(5);
    ASSERT_EQ("* VUOTO *", reg->getAttvita(5).getName());
}

TEST_F(RegistroTest, OperatorAssignament)
{
    Registro altroRegistro("Test");
    Attivita attivita("Teest");
    altroRegistro.addAttivita(attivita, 0);
    *reg = altroRegistro;    
    ASSERT_EQ("Test", reg->getGiorno());
    ASSERT_EQ("Teest", reg->getAttvita(0).getName());
}

TEST_F(RegistroTest, ConstructorCopia)
{
    Attivita attivita("Test");
    reg->addAttivita(attivita, 0);
    Registro nuovoRegistro(*reg);
    ASSERT_EQ("Lunedi", nuovoRegistro.getGiorno());
    ASSERT_EQ("Test", nuovoRegistro.getAttvita(0).getName());
}
