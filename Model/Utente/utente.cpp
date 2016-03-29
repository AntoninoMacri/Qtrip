#include "utente.h"

Utente::Utente(const QString& u, const QString& cogn, const QString& n): Persona(cogn,n), username(u){}


/*Utente::Utente(const QString& u, const QString& cogn, const QString& n, const bool& s_f, const Residenza& a, const Nato& o,
               const QMap<QString, Recensione>& r, const QMap<QString, Diario>& d)
              :Persona(cogn,n,s_f,a,o), username(u), recensioni(r), Diari(d){}
*/

//GET
QString Utente::getUsername() const{ return username;}

std::set<QString> Utente::getTitoliRecensioni() const
{
    std::set<QString> titoli;
    if(!recensioni.isEmpty())
            titoli.insert(recensioni.begin(),recensioni.end());
    return titoli;
}

Recensione Utente::getRecensione(const QString& t) const
{
    /*controllare se serve questo controllo
        if(!recensioni.contains(t))
            return Recensione();
    */
    return recensioni.value(t);
}
