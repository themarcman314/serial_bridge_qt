#ifndef TRAMME_H
#define TRAMME_H

#include <QByteArray>

struct InitVector
{
    QByteArray timestamp;
    qint32 intTimestamp;

    QByteArray node_id;
    qint32 intNode_id;
};
struct Payload
{
    QByteArray frame_counter;
    qint32 intFrame_counter;

    QByteArray node_id;
    qint32 intNode_id;

    QByteArray len;
    qint32 intLen;

    QByteArray frame_type;
    qint32 intFrame_type;

    QByteArray data;
    qint32 intData;
};
struct Tramme
{
    struct InitVector InitVector;
    struct Payload Payload;
};
#endif // TRAMME_H
