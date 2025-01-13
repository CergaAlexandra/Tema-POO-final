#include "TemeStudenti.h"

// Constructor pentru TemeStudenti
TemeStudenti::TemeStudenti(Student* student, Tema* tema)
    : student(student), tema(tema), evaluat(false), rezultat(false) {}

// Metodã pentru a încãrca codul sursã
void TemeStudenti::incarcaCod(const std::string& cod) {
    codSursa = cod;
}
