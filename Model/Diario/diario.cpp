#include "diario.h"

Diario::Diario(const QString& p, const QString& a, const QDateTime& i, const QDateTime& f, const QMap<int,Recensione>& g):
    Viaggio(p,a,i,f),giornate(g){}


QMap<int,Recensione> Diario::getDiario() const{ return giornate; }

Recensione Diario::getGiornata(const int& pos) const{ if(giornate.contains(pos)) return giornate.value(pos);  else return Recensione(); }


void Diario::setDiario(const QMap<int, Recensione>& g){ giornate=g; }


bool Diario::addGiornata(const int& pos, const Recensione& r){
    bool b=false;
    if(giornate.size()<getNumGiorni()){ giornate.insert(pos,r); b=true;}
    return b;
}

bool Diario::removeGiornata(const int& pos){
    bool b=false;
    if(!giornate.isEmpty()){ giornate.remove(pos); b=true; }
    return b;
}


bool Diario::contains(const int& pos) const{ return giornate.contains(pos); }

bool Diario::isEmpty() const{ return giornate.isEmpty(); }

void Diario::clear(){ giornate.clear(); }
