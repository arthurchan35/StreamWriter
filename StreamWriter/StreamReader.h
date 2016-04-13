#pragma once

#include <iostream>

using namespace std;

class StreamReader {
	StreamReader() {};
public:
	virtual void read() = 0;
};
