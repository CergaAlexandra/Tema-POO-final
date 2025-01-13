#ifndef PLATFORMA_LABORATOR_H
#define PLATFORMA_LABORATOR_H

#include <vector>
#include "Student.h"
#include "Tema.h"
#include "TemeStudenti.h"

class PlatformaLaborator {
private:
    std::vector<Student> studenti;
    std::vector<TemeStudenti> temeStudenti;

public:

    std::vector<Tema> teme;

    void adaugaStudent(std::string nume, int id);
    void adaugaTema(std::string titlu, std::string descriere, std::vector<TestCase> testCases);
    void asociazaTemeStudenti(int idStudent, std::string titluTema);
    void incarcaCodStudent(int idStudent, std::string titluTema, std::string cod);
    void evalueazaToateTemele();
};

#endif
