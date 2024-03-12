#include <iostream>
#include <cstring>
#include <QDebug>
#include "tramme.h"
#include <QtEndian>

using namespace std;

//std::string test = "thisisatesttoseewhatIamparsing.YesIknowthisissointeresting!";

void Parse(std::string test, struct Tramme *pTramme);


void Parse(QByteArray *dataIn, struct Tramme *pTramme)
{
    // There is easier way to do this with mid method !!!!
    pTramme->InitVector.timestamp = dataIn->mid(0,3);

    // Resize QByteArrays to appropriate sizes before copying data into them.
    //pTramme->InitVector.timestamp.resize(4);
    //pTramme->InitVector.node_id.resize(4);
    //pTramme->Payload.frame_counter.resize(4);
    //pTramme->Payload.node_id.resize(2);
    //pTramme->Payload.len.resize(1);
    //pTramme->Payload.frame_type.resize(1);
    //pTramme->Payload.data.resize(8); // Adjust this size based on the actual data length expected.

    //char *dataPointer = dataIn->data();
    //memcpy(pTramme->InitVector.timestamp.data(), dataPointer, 4);
    //memcpy(pTramme->InitVector.node_id.data(), dataPointer+4, 4);
    //memcpy(pTramme->Payload.frame_counter.data(), dataPointer+8, 4);
    //memcpy(pTramme->Payload.node_id.data(), dataPointer+12, 2);
    //memcpy(pTramme->Payload.len.data(), dataPointer+14, 1);
    //memcpy(pTramme->Payload.frame_type.data(), dataPointer+15, 1);
    //memcpy(pTramme->Payload.data.data(), dataPointer+16, 8);
	
    qDebug() << "timestamp : " << pTramme->InitVector.timestamp.toHex();
    //qDebug() << "node_id : " << pTramme->InitVector.node_id.toHex();
    //qDebug() << "frame_counter : " << pTramme->Payload.frame_counter.toHex();
    //qDebug() << "node_id : " << pTramme->Payload.node_id.toHex();
    //qDebug() << "length : " << pTramme->Payload.len.toHex();
    //qDebug() << "frame_type : " << pTramme->Payload.frame_type.toHex();
    //qDebug() << "data : " << pTramme->Payload.data.toHex();



    // Change endianness
    pTramme->InitVector.intTimestamp = qFromLittleEndian<quint32>(pTramme->InitVector.timestamp);
 }
