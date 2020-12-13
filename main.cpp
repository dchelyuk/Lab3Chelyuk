#include "Atom.h"
#include "Molecule.h"

int main() {
    Molecule *hnco= new Molecule("Isocyanic acid", "HNCO");
    /*Atom H("H", "Hydrogen", 1, 0, 1, 1, Atom::ISOTYPE);
    Atom O("O", "Oxygen", 15, 8, 8, 8, Atom::ANTIMATTER);
    Atom C("C", "Carbon", 12, 6, 6, 8, Atom::ION);
    Atom N("N", "Nitrogen", 14, 7, 7, 7, Atom::RADIOACTIVE);
    Atom Ca("Ca", "Calcium", 40, 20, 20, 200, Atom::STABLE);
    Molecule H2O("Water", "H2O");
    cout << H.isNeutral() << endl;
    cout << O.isNeutral() << endl;
    cout << C.isNeutral() << endl;*/
    cout << hnco->chemicalFormula << " avarage mass: " << hnco->findAverageMass() << endl;
    return 0;
}
