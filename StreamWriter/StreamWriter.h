#pragma once
#include <iostream>

using namespace std;

class StreamWriter {
protected:
	ostream* os;
public:
	StreamWriter() {};
	~StreamWriter() {};
};