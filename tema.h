#ifndef TEMA_H
#define TEMA_H

#include <string>
#include <vector>

// Clasa pentru un caz de test
class TestCase {
public:
    std::string input;
    std::string expectedOutput;

    TestCase(std::string in, std::string out);
};

// Clasa Tema
class Tema {
public:
    std::string titlu;
    std::string descriere;
    std::vector<TestCase> testCases;

    Tema(std::string titlu, std::string descriere);
    void adaugaTestCase(const TestCase& testCase);
};

#endif

