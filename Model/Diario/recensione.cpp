#include "recensione.h"

Recensione::Recensione(const QString& t, const QString& p, const QString& a, const QDateTime& i,
                       const QDateTime& f, const QMap<QDateTime, QString>& it, const QString& d, const QString& desc_p):
    Viaggio(p,a,i,f), titolo(t), itinerario(it), descrizione(d), descrizione_privata(desc_p){}


QString Recensione::getTitolo() const{ return titolo; }

QMap<QDateTime,QString> Recensione::getItinerario() const{ return itinerario; }

QString Recensione::getDescrizione() const { return descrizione; }

QString Recensione::getPrivata() const {return descrizione_privata; }


void Recensione::setTitolo(const QString& t){ titolo=t;}

void Recensione::setItinerario(const QMap<QDateTime, QString>& it){ itinerario=it; }

void Recensione::setDescrizione(const QString& d){ descrizione=d; }

void Recensione::setPrivata(const QString& desc_p){ descrizione_privata=desc_p; }



void Recensione::addItinerario(const QDateTime& dt, const QString& loc){ itinerario.insert(dt, loc); }

void Recensione::removeItinerario(const QDateTime& dt){ itinerario.remove(dt); }

void Recensione::clearItinerario(){ itinerario.clear(); }
