#ifndef UTENTE_H
#define UTENTE_H
#include <Model/Persona/persona.h>
#include <Model/Diario/recensione.h>
#include <Model/Diario/diario.h>
#include <QString>
#include <QMap>
#include <set>
//#include <Model/Utente/rete.h>

//NOTA BENE: CONTROLLARE USERNAME UNIVOCA
class Utente: public Persona
{
public:
    Utente(const QString&,const QString&, const QString&);
 //   Utente(const QString&, const QString&, const QString&, const bool&, const Residenza&, const Nato&,
   //        const QMap<QString, Recensione>&, const QMap<QString, Diario>&){}  /* ,const Rete&*/

    virtual ~Utente();

    //GET
    QString getUsername() const;
    std::set<QString> getTitoliRecensioni() const; //uso std::Set poichè è ordinato, invece Qset NO
    Recensione getRecensione(const QString&) const;
    std::set<QString> getTitoloDiari() const;
    Diario getDiario(const QString&) const;
    /* std::set<QString> getUsernameAmici() const;
     * Rete getRete() const;
    */

    //SET
    void setUsername(const QString&);
    void setRecensione(const QString&, const Recensione&); //inserisce e modifica
    void setDiario(const QString&, const Diario&); //inserisce e modifica
    /* i SET di RETE */

    //REMOVE
    bool removeRecensione(const QString&); //remove
    bool removeDiario(const QString&); //remove
    /* i REMOVE di RETE */

    //IsEMPTY
    bool isEmptyRecensioni() const;
    bool isEmptyDiari() const;
    /*bool isEmptyRete() const;*/

    //CONTAINS
    bool containsRecensioni(const QString&) const;
    bool containsDiari(const QString&) const;
    /* bool containsRete(const QString&) const; */

    //VIRTUAL
    virtual QString typeUtente() const; //serve SOLO per far vedere nella parte grafica all'utente di che tipo è l'amicizia con un altro utente
    virtual Utente* clone() const;

    //VIRTUAL per il tipo di amicizia
    virtual std::set<QString> getTitoliRecensioniAmico() const;
    virtual Recensione getRecensioneAmico(const QString&) const;
    virtual std::set<QString> getTitoliDiariAmico() const;
    virtual Diario getDiarioAmico(const QString&) const;


private:
    QString username;
    QMap<QString, Recensione> recensioni;
    QMap<QString, Diario> Diari;
    //Rete contatti;
};

#endif // UTENTE_H
