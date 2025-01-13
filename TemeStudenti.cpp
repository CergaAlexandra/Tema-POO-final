#include "TemeStudenti.h"

// Constructor pentru TemeStudenti
TemeStudenti::TemeStudenti(Student* student, Tema* tema)
    : student(student), tema(tema), evaluat(false), rezultat(false) {}

// Metod� pentru a �nc�rca codul surs�
void TemeStudenti::incarcaCod(const std::string& cod) {
    codSursa = cod;
}
