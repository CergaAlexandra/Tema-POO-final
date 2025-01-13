#include "Evaluator.h"
#include <iostream>
#include <sstream>

bool Evaluator::evaluate(TemeStudenti& temeStudenti) {
    bool toateCorecte = true;

    // Parcurgem toate cazurile de test asociate temei
    for (const auto& test : temeStudenti.tema->testCases) {
        std::istringstream inStream(test.input);
        std::ostringstream outStream;

        int x;
        inStream >> x;
        outStream << (x * 2);  // Simulăm rularea codului corect al studentului

        std::string rezultat = outStream.str();
        if (rezultat != test.expectedOutput) {
            toateCorecte = false;
            std::cout << "Test eșuat pentru studentul " << temeStudenti.student->nume << "!\n";
            std::cout << "Intrare: " << test.input << "\n";
            std::cout << "Așteptat: " << test.expectedOutput << "\n";
            std::cout << "Obținut: " << rezultat << "\n";
        }
        else {
            std::cout << "Test trecut pentru studentul " << temeStudenti.student->nume << "!\n";
        }
    }

    temeStudenti.evaluat = true;
    temeStudenti.rezultat = toateCorecte;
    return toateCorecte;
}
