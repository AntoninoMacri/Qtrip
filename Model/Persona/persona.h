#ifndef PERSONA_H
#define PERSONA_H
#include <QString>
#include <Model/Persona/residenza.h>
#include <Model/Persona/nato.h>

class Persona
{
public:
    Persona(const QString& ="", const QString& ="");
    Persona(const QString&, const QString&, const bool&, const Residenza&, const Nato&);

    QString getCognome() const;
    QString getNome() const;
    bool getSessoF() const;
    QString getSessoNameF() const;
    Residenza getAbitazione() const;
    Nato getOrigine() const;

    void setPersona(const QString&,const QString&,const bool&, const Residenza&,const Nato&);
    void setCognome(const QString&);
    void setNome(const QString&);
    void setSessoF(const bool&);
    void setAbitazione(const Residenza&);
    void setOrigine(const Nato&);

private:
    QString cognome;
    QString nome;
    bool sessoF; //false maschio, true femmina
    Residenza abitazione;
    Nato origine;
};

#endif // PERSONA_H
