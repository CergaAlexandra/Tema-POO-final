#include "PlatformaLaborator.h"
#include "Evaluator.h"
#include <iostream>

void PlatformaLaborator::adaugaStudent(std::string nume, int id) {
    studenti.emplace_back(nume, id);
}


void PlatformaLaborator::adaugaTema(std::string titlu, std::string descriere, std::vector<TestCase> testCases) {
    Tema tema(titlu, descriere);  // Creează o temă cu titlu și descriere
    for (const auto& test : testCases) {
        tema.adaugaTestCase(test);  // Adaugă toate testele în tema curentă
    }
    teme.push_back(tema);  // Adaugă tema în lista de teme
}


void PlatformaLaborator::asociazaTemeStudenti(int idStudent, std::string titluTema) {
    Student* student = nullptr;
    Tema* tema = nullptr;

    for (auto& s : studenti) {
        if (s.id == idStudent) {
            student = &s;
            break;
        }
    }

    for (auto& t : teme) {
        if (t.titlu == titluTema) {
            tema = &t;
            break;
        }
    }

    if (student && tema) {
        temeStudenti.emplace_back(student, tema);
    }
    else {
        std::cout << "Studentul sau tema nu a fost găsită!\n";
    }
}

void PlatformaLaborator::incarcaCodStudent(int idStudent, std::string titluTema, std::string cod) {
    for (auto& ts : temeStudenti) {
        if (ts.student->id == idStudent && ts.tema->titlu == titluTema) {
            ts.incarcaCod(cod);
            return;
        }
    }
    std::cout << "Asocierea student-temă nu a fost găsită!\n";
}

void PlatformaLaborator::evalueazaToateTemele() {
    for (auto& ts : temeStudenti) {
        if (!ts.evaluat) {
            Evaluator::evaluate(ts);
        }
    }
}
