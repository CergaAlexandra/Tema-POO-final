Evaluarea automată a temelor de laborator, evaluarea automată a codului
 Cerga Alexandra Maria
 CR2.2A
Introducere
 Evaluarea automată a temelor de laborator este o soluție modernă și eficientă utilizată în mediul academic pentru a verifica rapid și obiectiv soluțiile studenților la problemele de programare. În contextul volumului mare de studenți și al nevoii de feedback rapid,
 dezvoltarea unui sistem care să automatizeze procesul de evaluare a codului oferă numeroase beneficii, atât pentru profesori, cât și pentru studenți. Proiectul propus are drept obiectiv dezvoltarea unui sistem capabil să:
 1. Gestioneze temele de laborator, incluzând detalii despre cerințe și cazuri de test.
 2. Analizeze soluțiile trimise de studenți, fie sub formă de cod sursă, fie deexecutabile.
 3. Compileze și ruleze codul automat, utilizând un mediu securizat.
 4. Verifice corectitudinea soluțiilor, comparând ieșirile generate cu cele așteptate pentru fiecare caz de test.
 5. Genereze rapoarte detaliate, indicând succesul sau eșecul fiecărui test. În cadrul acestui proiect, ne vom concentra pe aplicarea conceptelor de programare orientată pe obiecte pentru a dezvolta o arhitectură modulară și flexibilă, prin utilizarea unor clase precum Tema, TestCase, Student și Evaluator.
 Importanța proiectului
 Automatizarea procesului de evaluare prezintă mai multe avantaje:
 ● Eficiență: Evaluările se desfășoară rapid, reducând timpul necesar pentru verificare.
 ● Obiectivitate: Eliminarea erorilor subiective sau omisiunilor în evaluare.
 ● Scalabilitate: Sistemul poate gestiona un număr mare de studenți și soluții fără  dificultăți.
 ● Feedback instantaneu: Studenții primesc imediat informații despre corectitudinea soluției lor, ceea ce le permite să înțeleagă greșelile și să își îmbunătățească performanța.
Clase principale:
 ○ TestCase– Stochează o pereche de intrare-ieșire pentru testare.
 ○ Tema– Conține detaliile temei, incluzând testele asociate.
 ○ Student– Reprezintă utilizatorul și soluția trimisă.
 ○ Evaluator– Gestionează procesul de compilare, execuție și verificare a codului.
 1. Clasa TestCase
 Reprezintă un caz de test utilizat pentru a verifica soluțiile studenților. Fiecare test are două componente: intrarea și ieșirea așteptată.
 Atribute:
 ● input(string): Valorile de intrare care vor fi utilizate în rularea programului studentului.
 ● expectedOutput (string): Rezultatul corect pe care programul trebuie să îl genereze pentru a trece testul.
 Metode:
 ● Constructorul: Inițializează un obiect TestCase cu o pereche intrare-ieșire.
 ● Poate fi extinsă cu metode de verificare a corectitudinii rezultatului sau de generare a unor intrări complexe.
 2. Clasa Tema
 Reprezintă o temă de laborator care conține descrierea cerinței și o colecție de cazuri de test.
 Atribute:
 ● titlu(string): Numele temei.
 ● descriere (string): Explicația sau cerința problemei.
 ● testCases (vector<TestCase>): O listă de cazuri de test asociate temei.
Metode:
 ● Tema(string titlu, string descriere): Constructor care inițializează o temă cu titlu și descriere.
 ● adaugaTestCase(const TestCase& testCase): Adaugă un caz de test în lista temei.
 3. Clasa Student
 Reprezintă un student care trimite soluția sa la o temă.
 Atribute:
 ● nume(string): Numele studentului.
 ● codSursa (string): Codul sursă al soluției trimise de student.
 Metode:
 ● Constructorul: Inițializează un student cu un nume.
 ● incarcaCod(const std::string& cod): Permite încărcarea codului sursă de către student.
 4. Clasa Evaluator
 Este clasa principală responsabilă pentru evaluarea codului studentului. Realizează
 compilarea și execuția codului, comparând rezultatele generate cu cele așteptate.
 Metode:
 ● bool compile(const std::string& filename): Compilează codul sursă al studentului folosind g++. Returnează true dacă compilarea este reușită, false altfel.
 ● std::string execute(const std::string& input): Rulează programul compilat cu o intrare specifică și captează ieșirea în fișier.
 ● bool evaluate(Tema& tema, const Student& student): Evaluează soluția studentului rulând codul pentru fiecare caz de test din temă. Returnează true dacă toate testele sunt corecte sau false dacă există teste eșuate.
5. Interacțiunea dintre clase
 1. Profesorul creează o instanță a clasei Tema și adaugă cazuri de test.
 2. Studentul încarcă soluția sa utilizând clasa Student.
 3. Evaluatorul:
 ○ Compilează codul studentului.
 ○ Rulează codul pentru fiecare caz de test din Tema.
 ○ Generează un raport indicând succesul sau eșecul fiecărui test
