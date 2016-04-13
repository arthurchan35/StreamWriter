#pragma once
#include "StreamWriter.h"
#include "FileStreamWriter.h"
#include <vector>
using namespace std;

class StreamManager {
	static vector<StreamWriter*> writerList;
	StreamManager() {};
public:
	static StreamWriter* createWriter(char* filePath) {
		StreamWriter* writer = new FileStreamWriter(filePath);
		writerList.push_back(writer);
	}
};