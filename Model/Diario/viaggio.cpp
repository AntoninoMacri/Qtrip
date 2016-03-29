#include "viaggio.h"

Viaggio::Viaggio(const QString& p, const QString& a, const QDateTime& i, const QDateTime& f):
    partenza(p), arrivo(a), inizio(i), fine(f){}



QString Viaggio::getPartenza() const{ return partenza; }

QString Viaggio::getArrivo() const{ return arrivo; }

QDateTime Viaggio::getInizio() const{ return inizio; }

QDateTime Viaggio::getFine() const{ return fine; }

int Viaggio::getNumGiorni() const{ return inizio.daysTo(fine); }


void Viaggio::setPartenza(const QString& p){ partenza=p; }

void Viaggio::setArrivo(const QString& a){ arrivo=a; }

void Viaggio::setInizio(const QDateTime& i){ inizio=i; }

void Viaggio::setFine(const QDateTime& f){ fine=f; }
