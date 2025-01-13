#include "PlatformaLaborator.h"

int main() {
    PlatformaLaborator platforma;

    // Adăugăm o temă și testele asociate
    platforma.adaugaTema("Dublarea unui număr", "Calculați dublul unui număr întreg.", {
        TestCase("2", "4"),
        TestCase("5", "10"),
        TestCase("10", "20")
        });

    // Adăugăm studenți
    platforma.adaugaStudent("Maria Popescu", 1);
    platforma.adaugaStudent("Ion Ionescu", 2);

    // Asociem tema cu studenții
    platforma.asociazaTemeStudenti(1, "Dublarea unui număr");
    platforma.asociazaTemeStudenti(2, "Dublarea unui număr");

    // Încărcăm codurile sursă pentru fiecare student
    platforma.incarcaCodStudent(1, "Dublarea unui număr", R"(
        #include <iostream>
        using namespace std;
        int main() {
            int x;
            cin >> x;
            cout << x * 2;
            return 0;
        }
    )");

    platforma.incarcaCodStudent(2, "Dublarea unui număr", R"(
        #include <iostream>
        using namespace std;
        int main() {
            int x;
            cin >> x;
            cout << x + 1;  // Greșit
            return 0;
        }
    )");

    // Evaluăm toate temele încărcate
    platforma.evalueazaToateTemele();

    return 0;  // Programul se încheie cu succes (cod 0)
}
