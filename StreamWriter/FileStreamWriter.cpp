#include "stdafx.h"
#include "FileStreamWriter.h"


FileStreamWriter::FileStreamWriter(char* filePath) {
	file.open(filePath, ios::app | ios::binary);
}

void FileStreamWriter::write(char* buffer, int size) {
	for (int i = 0; i < size; ++i)
		file << *buffer++;
	file.close();
}

FileStreamWriter::~FileStreamWriter() {
}
