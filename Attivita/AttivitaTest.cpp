#include "gtest/gtest.h"
#include "Attivita.hpp"

class AttivitaTest : public ::testing::Test
{
	protected:
		Attivita *attivita;
		void SetUp() override { this->attivita = new Attivita(); }
		void TearDown() override { delete this->attivita; }
};

TEST_F(AttivitaTest, DefaultConstructor)
{
    ASSERT_EQ("", attivita->getName());
    ASSERT_EQ("", attivita->getDescription());
    ASSERT_EQ("", attivita->getOrarioInizio());
    ASSERT_EQ("", attivita->getOrarioFine());
}

TEST_F(AttivitaTest, NormalConstructor)
{
    Attivita att("Name");
    ASSERT_EQ("Name", att.getName());
}


TEST_F(AttivitaTest, SetName)
{
    const std::string str = "test";
    attivita->setName(str);
    ASSERT_EQ(str, attivita->getName());
}

TEST_F(AttivitaTest, SetDescription)
{
    const std::string str = "test";
    attivita->setDescription(str);
    ASSERT_EQ(str, attivita->getDescription());
}

TEST_F(AttivitaTest, SetOrarioInizio)
{
    const std::string str = "09:00";
    attivita->setOrarioInizio(str);
    ASSERT_EQ(str, attivita->getOrarioInizio());
}

TEST_F(AttivitaTest, SetOrarioFine)
{
    const std::string str = "10:30";
    attivita->setOrarioFine(str);
    ASSERT_EQ(str, attivita->getOrarioFine());
}

TEST_F(AttivitaTest, OperatoreAssegnazione)
{
    Attivita sorgente("attivita");
    sorgente.setDescription("description");
    sorgente.setOrarioInizio("11:00");
    sorgente.setOrarioFine("12:00");

    Attivita destinazione;
    destinazione = sorgente;

    ASSERT_EQ(sorgente.getName(), destinazione.getName());
    ASSERT_EQ(sorgente.getDescription(), destinazione.getDescription());
    ASSERT_EQ(sorgente.getOrarioInizio(), destinazione.getOrarioInizio());
    ASSERT_EQ(sorgente.getOrarioFine(), destinazione.getOrarioFine());
    ASSERT_NE(&sorgente, &destinazione);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}