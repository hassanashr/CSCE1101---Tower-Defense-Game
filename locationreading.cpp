#include "locationreading.h"
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QStandardPaths>


LocationReading::LocationReading() {
    file = new QFile(":/pos/Resources/loc.txt");
    if(!file->open(QIODevice::ReadOnly|QIODevice::Text)){
        qDebug() << "could not open file for read";
        return;
    }



    coordinates = new int*[13];
    for(int i = 0; i < 13; i++)
        coordinates[i] = new int[13];
    readData();
    file->close();
}

void LocationReading::readData(){

    QTextStream temp(file);
    int i = 0;
    while(!temp.atEnd()){
        QString line = temp.readLine();
        QStringList row = line.split(",");
        for(int j = 0; j < 13; j++){
            coordinates[i][j] = row[j].toInt();
        }
        i++;
    }
}

void LocationReading::writeData(){
    /* Incomplete due to problems with qsrouce fule
    if(!file->open(QIODevice::Truncate | QIODevice::ReadWrite)){
        qDebug() << "could not open file for Write";
        return;
    }

    for(int i = 0; i < 13; i++)
        for(int j = 0; j < 13; j++)
            coordinates[i][j]++;

    QTextStream temp(file);
    for(int i = 0; i < 13; i++){
        QString temp1 = "";
        for(int j = 0; j < 13; j++){
            temp1 += QString::number(coordinates[i][j]);
        }
        temp << temp1;
    }

    file->close();
    */
}
