#include "Molecule.h"

Molecule::Molecule(string theMoleculeName, string theChemicalFormula) {
    moleculeName = move(theMoleculeName);
    chemicalFormula = move(theChemicalFormula);
    /*tuple<string, string, int, int, int, int, Atom::type> H("H", "Hydrogen", 1, 0, 1, 1, Atom::ISOTYPE);
    tuple<string, string, int, int, int, int, Atom::type> O("O", "Oxygen", 15, 8, 8, 8, Atom::ANTIMATTER);
    tuple<string, string, int, int, int, int, Atom::type> C("C", "Carbon", 12, 6, 6, 8, Atom::ION);
    tuple<string, string, int, int, int, int, Atom::type> N("N", "Nitrogen", 14, 7, 7, 7, Atom::RADIOACTIVE);
    tuple<string, string, int, int, int, int, Atom::type> Ca("Ca", "Calcium", 40, 20, 20, 200, Atom::STABLE);*/
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        if (i == 0) {
            Atom *atom = new Atom("H", "Hydrogen", 1, 0, 1, 1, Atom::ISOTYPE);
            array[i] = atom;
        }
        if (i == 1) {
            Atom *atom = new Atom("O", "Oxygen", 15, 8, 8, 8, Atom::ANTIMATTER);
            array[i] = atom;
        }
        if (i == 2) {
            Atom *atom = new Atom("C", "Carbon", 12, 6, 6, 8, Atom::ION);
            array[i] = atom;
        }
        if (i == 3) {
            Atom *atom = new Atom("N", "Nitrogen", 14, 7, 7, 7, Atom::RADIOACTIVE);
            array[i] = atom;
        }

    };
    cout << array[0]->name << " Neutrality: " << array[0]->isNeutral() << endl;
    cout << array[1]->name << " Neutrality: " << array[1]->isNeutral() << endl;
    cout << array[2]->name << " Neutrality: " << array[2]->isNeutral() << endl;
    cout << moleculeName << " " << chemicalFormula << endl;
}

float Molecule::findAverageMass() {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        sum += array[i]->atomicMassUnit;
        count += 1;
    }
    return sum / count;
}

Molecule::~Molecule() = default;
