#ifndef RECENSIONE_H
#define RECENSIONE_H
#include <Model/Diario/viaggio.h>
#include <QString>
#include <QMap>
#include <QDateTime>

class Recensione:public Viaggio //recensione rappresenta o una gita giornaliera oppure un intero viaggio recensito
{
public:
    Recensione(const QString& ="", const QString& ="", const QString& ="", const QDateTime& =QDateTime(),
               const QDateTime&  =QDateTime(), const QMap<QDateTime,QString>& =QMap<QDateTime,QString>(),
               const QString& ="", const QString& ="");

    QString getTitolo() const;
    QMap<QDateTime,QString> getItinerario() const;
    QString getDescrizione() const;
    QString getPrivata() const;

    void setTitolo(const QString&);
    void setItinerario(const QMap<QDateTime,QString>&);
    void setDescrizione(const QString&);
    void setPrivata(const QString&);

    void addItinerario(const QDateTime&, const QString&);
    void removeItinerario(const QDateTime&);
    void clearItinerario();

private:
    QString titolo;
    QMap<QDateTime,QString> itinerario;
    QString descrizione;
    QString descrizione_privata;

};

#endif // RECENSIONE_H
