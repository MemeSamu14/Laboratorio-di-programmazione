#include "gtest/gtest.h"
#include "Attivita.hpp"

class AttivitaTest : public ::testing::Test
{
	protected:
		Attivita* attivita;
		void SetUp() override { attivita = new Attivita(); }
		void TearDown() override { delete attivita; }
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
    Attivita attivita_con_nome("Name");
    ASSERT_EQ("Name", attivita_con_nome.getName());
}


TEST_F(AttivitaTest, SetName)
{
    const std::string str = "test";
    attivita->setName(str);
    ASSERT_EQ(str, attivita->getName());
}

TEST_F(AttivitaTest, SetDescription)
{
    const std::string descrizione = "test";
    attivita->setDescription(descrizione);
    ASSERT_EQ(descrizione, attivita->getDescription());
}

TEST_F(AttivitaTest, SetOrarioInizioImpostaCorrettamente)
{
    const std::string orario = "09:00";
    attivita->setOrarioInizio(orario);
    ASSERT_EQ(orario, attivita->getOrarioInizio());
}

TEST_F(AttivitaTest, SetOrarioFineImpostaCorrettamente)
{
    const std::string orario = "10:30";
    attivita->setOrarioFine(orario);
    ASSERT_EQ(orario, attivita->getOrarioFine());
}

TEST_F(AttivitaTest, OperatoreAssegnazioneCreaUnaCopiaCorretta)
{
    Attivita sorgente("Nuova Attivita");
    sorgente.setDescription("Descrizione per la copia.");
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