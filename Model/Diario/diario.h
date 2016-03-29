#ifndef DIARIO_H
#define DIARIO_H
#include <Model/Diario/viaggio.h>
#include <Model/Diario/recensione.h>
#include <QMap>


class Diario: public Viaggio //Diario rappresenta un intero viaggio descritto giorno per giorno
{
public:
    Diario(const QString& ="", const QString& ="", const QDateTime& =QDateTime(), const QDateTime& =QDateTime(),
           const QMap<int,Recensione>& =QMap<int,Recensione>());

    QMap<int,Recensione> getDiario() const;
    Recensione getGiornata(const int&) const;

    void setDiario(const QMap<int,Recensione>&);

    bool addGiornata(const int&, const Recensione&); //funge anche da setGiornata //ritorna true se l'operazione ha avuto buon esito (cioè se nel numero di giorni del viaggio c'era ancora un giorno aggiungibile)
    bool removeGiornata(const int&); //ritorna true se l'operazione ha avuto buon esito (cioè se non era già vuota la QMap)

    bool contains(const int&) const;
    bool isEmpty() const;
    void clear();

private:
    QMap<int,Recensione> giornate; //l'indice del QMap indica il numero della giornata
};

#endif // DIARIO_H
