#include "pch.h"
#include "Studentas.h"
#include "Studentas.cpp"
#include "functions.h"
#include "functions.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(StudentasTest, VardasTest) {
	string vardas = "Stasys", pavarde = "Povilaitis";
	Studentas s(vardas, pavarde);
	EXPECT_EQ(s.getVardas(), "Stasys");
}

TEST(StudentasTest, EgzaminasTest) {
	string vardas = "Stasys", pavarde = "Povilaitis";
	Studentas s(vardas, pavarde);
	int pazimys = 4;
	s.setEgzaminas(pazimys);
	EXPECT_EQ(s.getEgzaminas(), 4);
}

TEST(VidurkisARLYGUMediana, VidurkisLyguMediana) {
	string vardas = "Stasys", pavarde = "Povilaitis";
	Studentas s(vardas, pavarde);
	for (int i = 0; i < 10; i++) {
		int pazimys = genrand();
		s.setPazymi(pazimys);
	}
	int egzaminas = genrand();
	s.setVidurki(); s.setMediana();
	ASSERT_NE(s.getVidurkis(), s.getMediana());
}