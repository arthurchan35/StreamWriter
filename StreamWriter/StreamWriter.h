#pragma once
#include <iostream>

using namespace std;

class StreamWriter {

public:
	StreamWriter() {};
	virtual void write(char* buffer, int size) = 0;
};