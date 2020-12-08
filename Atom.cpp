#include "Atom.h"

Atom::Atom(string theChemicalSymbol, string theName, unsigned int theAtomicMassUnit, unsigned int theNeutronsNumber,
           unsigned int theProtonsNumber, unsigned int theElectronsNumber, type theAtomType) {
    chemicalSymbol = move(theChemicalSymbol);
    name = move(theName);
    atomicMassUnit = theAtomicMassUnit;
    neutronsNumber = theNeutronsNumber;
    protonsNumber = theProtonsNumber;
    electronsNumber = theElectronsNumber;
    atomType = theAtomType;
    cout << chemicalSymbol << " " << name << " " << protonsNumber << " " << atomType << endl;
}

bool Atom::isNeutral() const {
    return neutronsNumber == electronsNumber;
}

Atom::~Atom() = default;

