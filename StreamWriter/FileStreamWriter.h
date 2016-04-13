#pragma once
#include "StreamWriter.h"
#include <fstream>

using namespace std;

class FileStreamWriter : public StreamWriter {
	ofstream file;
public:
	FileStreamWriter(char* filePath);
	void write(char* buffer, int size);
	~FileStreamWriter();
};

