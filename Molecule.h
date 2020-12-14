#include "Atom.h"

class Molecule {
public:
    string chemicalFormula;
    string moleculeName;
    Atom *array[4];

    Molecule() = default;

    Molecule(string theMoleculeName, string theChemicalFormula);

    float findAverageMass();

    ~Molecule();
};
