#include "persona.h"

Persona::Persona(const QString& cogn, const QString& n):cognome(cogn), nome(n){}

Persona::Persona
(const QString& cogn, const QString& n, const bool& s, const Residenza& a,
 const Nato& o):cognome(cogn), nome(n), sessoF(s), abitazione(a), origine(o){}



QString Persona::getCognome() const{ return cognome;}

QString Persona::getNome() const{ return nome;}

bool Persona::getSessoF() const{ return sessoF; }

QString Persona::getSessoNameF() const{ QString s="femmina"; if(!sessoF) s="maschio"; return s; }

Residenza Persona::getAbitazione() const{ return abitazione;}

Nato Persona::getOrigine() const{ return origine; }



void Persona::setPersona(const QString& cogn, const QString& n, const bool& s, const Residenza& a, const Nato& o)
{
    cognome=cogn;
    nome=n;
    sessoF=s;
    abitazione=a;
    origine=o;
}

void Persona::setCognome(const QString& cogn){ cognome=cogn;}

void Persona::setNome(const QString& n){ nome=n;}

void Persona::setSessoF(const bool& s){ sessoF=s; }

void Persona::setAbitazione(const Residenza& a){ abitazione=a; }

void Persona::setOrigine(const Nato& o){ origine=o;}
