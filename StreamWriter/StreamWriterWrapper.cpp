#include "stdafx.h"
#include "StreamWriterWrapper.h"
#include "StreamManager.h"
extern "C" {
	CFileStreamWriter* newStreamWriter(char* filePath) {
		return StreamManager::createWriter(filePath);
	}
}