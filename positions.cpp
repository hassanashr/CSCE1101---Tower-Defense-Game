#include <QFile>
#include <fstream>
#include <QDebug>
#include <QIODevice>
#include <QIODeviceBase>
#include <QTextStream>
#include <QDataStream>
/*
QFile file(":/pos/Resources/loc.txt");
if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    qDebug() << "Failed to open file: " << file.errorString();
    return;
}
QTextStream stream(&file);
while (!stream.atEnd()) {
    QString line = stream.readLine();
    QVector<QChar> rowData;
    for (int i = 0; i < line.size(); ++i) {
        QChar chartemp = line.at(i);
        if (chartemp == '0' || chartemp == '1' || chartemp == '2' || chartemp == '3') {
            rowData.push_back(chartemp);
            qDebug() << chartemp;
        }
    }
    Boarddata.push_back(rowData);
}
file.close();
}
*/
