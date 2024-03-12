#include <iostream>
#include <cstring>

using namespace std;

std::string test = "thisisatesttoseewhatIamparsing.YesIknowthisissointeresting!";

void Parse(std::string test, struct Tramme *pTramme);

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

void Parse(string test, struct Tramme *pTramme)
{
	memcpy(pTramme->InitVector.timestamp.data(), test.data(), 4);
	memcpy(&pTramme->InitVector.node_id[0], &test[4], 4);
	memcpy(pTramme->Payload.frame_counter.data(), &test[8], 4);
	memcpy(pTramme->Payload.node_id.data(), &test[12], 2);
	memcpy(pTramme->Payload.len.data(), &test[14], 1);
	memcpy(pTramme->Payload.frame_type.data(), &test[15], 1);
	memcpy(pTramme->Payload.data.data(), &test[16], 8);
	
	cout << pTramme->InitVector.timestamp.data() << endl;
	cout << pTramme->InitVector.node_id.data() << endl;
	cout << pTramme->Payload.frame_counter.data() << endl;
	cout << pTramme->Payload.node_id.data() << endl;
	cout << pTramme->Payload.len.data() << endl;
	cout << pTramme->Payload.frame_type.data() << endl;
	cout << pTramme->Payload.data.data() << endl;
 }
