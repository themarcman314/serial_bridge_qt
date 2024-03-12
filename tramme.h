#ifndef TRAMME_H
#define TRAMME_H

#include <iostream>

struct InitVector
{
    string timestamp;
    string node_id;
};
struct Payload
{
    string frame_counter;
    string node_id;
    string len;
    string frame_type;
    string data;
};
struct Tramme
{
    struct InitVector InitVector;
    struct Payload Payload;
};
#endif // TRAMME_H
