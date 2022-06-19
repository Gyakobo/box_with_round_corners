#ifndef PARTY_PARROT_H
#define PARTY_PARROT_H

typedef bitset<2> byte;

// Essentials
#include <stdio.h>
#include <math.h>
#include <map>
#include <string>

// Dependancies
#include <vector>

#define c0 0b0
#define c1 0b1
#define c2 0b0

using namespace std;

const vector<vector<byte>> parrot1 = {
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c0,c0,c2,c0,c0,c1,c1,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c0,c0,c2,c0,c1,c1,c1,c1,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c1,c0,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c1,c0,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c1,c0,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c0,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c0,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 }
}

const vector<vector<byte>> parrot2 = {
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c0,c0,c0,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c0,c0,c2,c2,c0,c1,c1,c1,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c0,c0,c2,c2,c0,c1,c1,c1,c0,c0,c0,c2,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c1,c0,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 }
}

const vector<vector<byte>> parrot3 = {
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c0,c0,c0,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c2,c2,c0,c0,c2,c0,c1,c1,c1,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c2,c0,c0,c2,c0,c1,c1,c1,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 }
}

const vector<vector<byte>> parrot4 = {
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c0,c0,c2,c0,c0,c1,c1,c0,c0,c0,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c0,c0,c2,c0,c1,c1,c1,c0,c0,c0,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c0,c0,c1,c1,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 }
}

const vector<vector<byte>> parrot5 = {
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c0,c0,c2,c2,c0,c1,c1,c1,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c0,c0,c2,c2,c0,c1,c1,c1,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c0,c1,c0,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 }
}

const vector<vector<byte>> parrot6 = {
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c0,c0,c2,c2,c0,c1,c1,c1,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c0,c0,c2,c2,c0,c1,c1,c1,c0,c0,c0,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c0,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 }
}

const vector<vector<byte>> parrot7 = {
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c0,c1,c0,c0,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c2,c2,c0,c1,c1,c1,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c2,c2,c0,c1,c1,c1,c0,c0,c0,c2,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 }
}

const vector<vector<byte>> parrot8 = {
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c2,c2,c0,c1,c1,c0,c2,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c2,c2,c0,c1,c1,c0,c2,c0,c0,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c0,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c0,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c0,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 }
}

const vector<vector<byte>> parrot9 = {
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c0,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c0,c0,c2,c2,c0,c1,c1,c1,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c2,c2,c0,c1,c1,c1,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c0,c2,c2,c2,c2,c2,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c0,c2,c2,c2,c2,c2,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 }
}

const vector<vector<byte>> parrot10 = {
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c2,c2,c2,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c0,c1,c0,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c0,c0,c2,c2,c0,c1,c1,c1,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c2,c2,c0,c1,c1,c1,c0,c0,c0,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c1,c0,c2,c2,c2,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c1,c0,c0,c2,c2,c2,c2,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c1,c0,c2,c2,c2,c2,c2,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c2,c2,c2,c2,c2,c2,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c2,c2,c2,c2,c2,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c2,c0,c0,c0 },
{ c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0,c0 }
}

const vector<vector<vector<byte>>> parrot = { parrot1, parrot2, parrot3, parrot4, parrot5, parrot6, parrot7, parrot8, parrot9, parrot10 };

#endif
