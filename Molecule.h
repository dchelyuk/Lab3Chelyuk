#include "Atom.h"

class Molecule {
public:
    string chemicalFormula;
    string moleculeName;
    Atom *Array[4];

    Molecule() = default;

    Molecule(string theMoleculeName, string theChemicalFormula);

    float findAverageMass();

    ~Molecule();
};
