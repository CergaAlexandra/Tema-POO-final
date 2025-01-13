#include "Tema.h"

// Constructor pentru TestCase
TestCase::TestCase(std::string in, std::string out) : input(in), expectedOutput(out) {}

// Constructor pentru Tema
Tema::Tema(std::string titlu, std::string descriere) : titlu(titlu), descriere(descriere) {}

// Metodã pentru a adãuga un test case
void Tema::adaugaTestCase(const TestCase& testCase) {
    testCases.push_back(testCase);
}
