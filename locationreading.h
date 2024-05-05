#ifndef LOCATIONREADING_H
#define LOCATIONREADING_H
#include <QFile>

class LocationReading
{
public:
    LocationReading();
    QFile* file;
    int** coordinates;
    void readData();
    void writeData();
};

#endif // LOCATIONREADING_H
