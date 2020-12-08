#pragma once

#include <tuple>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Atom {
public:
    string chemicalSymbol;
    string name;
    unsigned int atomicMassUnit;
    unsigned int neutronsNumber;
    unsigned int protonsNumber;
    unsigned int electronsNumber;
    enum type {
        ISOTYPE, RADIOACTIVE, ION, ANTIMATTER, STABLE
    } atomType;


    Atom() = default;

    Atom(string theChemicalSymbol, string theName, unsigned int atomicMassUnit, unsigned int theNeutronsNumber,
         unsigned int theProtonsNumber, unsigned int theElectronsNumber, type theAtomType);

    bool isNeutral() const;

    ~Atom();
};