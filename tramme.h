#ifndef TRAMME_H
#define TRAMME_H

#include <QCoreApplication>


class tramme
{
public:
    tramme(struct data);


private:
    struct init_vector
    {
        qint16 timestamp;
        qint16 node_id;
    };
    struct payload
    {
        qint16 frame_counter;
        qint16 node_id;
        qint16 len;
        qint16 frame_type;
        qint16 data;
    };
    struct data
    {
        struct init_vector;
        struct payload;
    };
};

#endif // TRAMME_H
