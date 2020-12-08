#include "Molecule.h"

Molecule::Molecule(string theMoleculeName, string theChemicalFormula) {
    moleculeName = move(theMoleculeName);
    chemicalFormula = move(theChemicalFormula);
    /*tuple<string, string, int, int, int, int, Atom::type> H("H", "Hydrogen", 1, 0, 1, 1, Atom::ISOTYPE);
    tuple<string, string, int, int, int, int, Atom::type> O("O", "Oxygen", 15, 8, 8, 8, Atom::ANTIMATTER);
    tuple<string, string, int, int, int, int, Atom::type> C("C", "Carbon", 12, 6, 6, 8, Atom::ION);
    tuple<string, string, int, int, int, int, Atom::type> N("N", "Nitrogen", 14, 7, 7, 7, Atom::RADIOACTIVE);
    tuple<string, string, int, int, int, int, Atom::type> Ca("Ca", "Calcium", 40, 20, 20, 200, Atom::STABLE);*/
    for (int i = 0; i < sizeof(Array) / sizeof(Array[0]); i++) {
        if (i == 0) {
            Atom *atom = new Atom("H", "Hydrogen", 1, 0, 1, 1, Atom::ISOTYPE);
            Array[i] = atom;
        }
        if (i == 1) {
            Atom *atom = new Atom("O", "Oxygen", 15, 8, 8, 8, Atom::ANTIMATTER);
            Array[i] = atom;
        }
        if (i == 2) {
            Atom *atom = new Atom("C", "Carbon", 12, 6, 6, 8, Atom::ION);
            Array[i] = atom;
        }
        if (i == 3) {
            Atom *atom = new Atom("N", "Nitrogen", 14, 7, 7, 7, Atom::RADIOACTIVE);
            Array[i] = atom;
        }

    };
    cout << Array[0]->name << " Neutrality: " << Array[0]->isNeutral() << endl;
    cout << Array[1]->name << " Neutrality: " << Array[1]->isNeutral() << endl;
    cout << Array[2]->name << " Neutrality: " << Array[2]->isNeutral() << endl;
    cout << moleculeName << " " << chemicalFormula << endl;
}

float Molecule::findAverageMass() {
    int Sum = 0;
    int Count = 0;
    for (int i = 0; i < sizeof(Array) / sizeof(Array[0]); i++) {
        Sum += Array[i]->atomicMassUnit;
        Count += 1;
    }
    return Sum / Count;
}

Molecule::~Molecule() = default;
