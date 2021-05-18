#ifndef STIRE_H
#define STIRE_H
#pragma once
	
#include <iostream>
using namespace std;

class Stire
{
    string title;
    string content;

public:

    bool fav;

    Stire(string, string);

    Stire(const Stire&);

    virtual ~Stire();

    virtual ostream& afisare(ostream&)const;

    Stire& operator=(const Stire&);

    friend ostream& operator<<(ostream&, const Stire&);

    void MakeFav();

protected:

    void init(const string&, const string&);
};


#endif