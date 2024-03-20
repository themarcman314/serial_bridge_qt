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
    pTramme->InitVector.header = dataIn->mid(0,4);
    pTramme->InitVector.timestamp = dataIn->mid(4,4);
    pTramme->InitVector.node_id = dataIn->mid(8,4);
    pTramme->Payload.frame_counter = dataIn->mid(12,4);
    pTramme->Payload.node_id = dataIn->mid(16,2);
    pTramme->Payload.len = dataIn->mid(12,1);
    pTramme->Payload.frame_type = dataIn->mid(19,1);
    pTramme->Payload.data = dataIn->mid(20,8);

    qDebug() << "header : " << pTramme->InitVector.header.toHex();
    qDebug() << "timestamp : " << pTramme->InitVector.timestamp.toHex();
    qDebug() << "node_id : " << pTramme->InitVector.node_id.toHex();
    qDebug() << "frame_counter : " << pTramme->Payload.frame_counter.toHex();
    qDebug() << "node_id : " << pTramme->Payload.node_id.toHex();
    qDebug() << "length : " << pTramme->Payload.len.toHex();
    qDebug() << "frame_type : " << pTramme->Payload.frame_type.toHex();
    qDebug() << "data : " << pTramme->Payload.data.toHex();
 }
