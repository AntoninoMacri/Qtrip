#ifndef RETE_H
#define RETE_H
#include <QMap>
#include <QString>
#include <Model/Utente/smartutente.h>

class Rete //IMPLEMENTATO TRAMITE HEAP TEMPLETIZZATO??
{
public:
    Rete(const SmartUtente&);

    //GET
    SmartUtente getSmartUtente(const QString&) const;

    //SET
    void setSmartUtente(const QString&, const SmartUtente&); //inserisce e modifica
    void setSmartUtente(const QMap <QString ,SmartUtente>&); //aggiunge

    //DELETE
    bool deleteUtente(const QString&);

    //FUNZIONI UTILI
    bool contains(const QString&) const; //true se contiene la key passata, false altrimenti
    bool isEmpty() const;

    //Cambio amicizia
    bool changeType(const QString&, const QString&);



    //iteratori
 /*
    rete_iterator begin();
    rete_iterator end();
    rete_const_iterator begin() const;
    rete_const_iterator end() const;
*/

private:
    QMap <QString ,SmartUtente> contatti;
};

#endif // RETE_H
