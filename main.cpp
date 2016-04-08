#include "mainwindow.h"
#include <QApplication>
#include <QtCore>

#include <Model/Diario/viaggio.h>
#include <Model/Persona/persona.h>
#include <Model/Diario/diario.h>

#include <Model/Utente/rete.h>
#include <Model/Utente/nodo.h>

int main(int argc, char *argv[])
{/*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();*/

    //Persona
    /*
    Persona p("ciao","mamma");
    qDebug() << p.getNome()<<endl;
    p.setSessoF(false);
    Residenza res("boschi sant'anna","verona","via Stradone 67");
    p.setAbitazione(res);
    qDebug() <<p.getSessoF()<<" "<<p.getAbitazione().getRegione()<<" "<<p.getSessoNameF();
    */

    //Recensione
    QDate d01(2015,12,29);
    QDate d02(2016,1,3);
    Recensione r1("Capodanno 2015-2016","boschi sant'anna","gallio",QDateTime(d01),QDateTime(d02));

    //Viaggio
    QDate d1(2015,12,29);
    QDate d2(2016,1,3);
    Viaggio v1("boschi sant'anna","gallio",QDateTime(d1),QDateTime(d2));
    qDebug() <<"Numero giorni del viaggio: "<<v1.getNumGiorni();

    //Diario
    Diario dr1("boschi sant'anna","gallio",QDateTime(d1),QDateTime(d2));
    qDebug() <<"Numero giorni del viaggio-diario: "<<dr1.getNumGiorni();
    dr1.addGiornata(1,r1);
    qDebug() <<"titolo del viaggio-diario: "<<dr1.getGiornata(1).getTitolo()<<" Partenza"<<dr1.getGiornata(1).getPartenza()
            <<" Arrivo"<<dr1.getGiornata(1).getArrivo();
    Recensione temp=dr1.getGiornata(1);
    temp.setTitolo("Capodanno2016 a Gallio");
    dr1.addGiornata(1,temp);
    qDebug() <<"titolo del viaggio-diario: "<<dr1.getGiornata(1).getTitolo();
    qDebug() <<"numero giorni inseriti per questo dirio: "<<dr1.getDiario().size();

    nodo<int> n1("user1", 1);
 //   nodo<int> n1;
    qDebug() <<endl<<"nodo1:  "<<n1.getUser()<<" "<<n1.getInfo();

}
