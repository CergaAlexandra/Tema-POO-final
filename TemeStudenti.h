#ifndef TEME_STUDENTI_H
#define TEME_STUDENTI_H

#include <string>
#include "Student.h"
#include "Tema.h"

// Clasa pentru asocierea temelor și soluțiilor studenților
class TemeStudenti {
public:
    Student* student;
    Tema* tema;
    std::string codSursa;
    bool evaluat;
    bool rezultat;

    TemeStudenti(Student* student, Tema* tema);
    void incarcaCod(const std::string& cod);
};

#endif
