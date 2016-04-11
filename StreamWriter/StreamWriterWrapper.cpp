#include "stdafx.h"
#include "StreamWriterWrapper.h"
#include "StreamManager.h"
extern "C" {
	CFileStreamWriter* newStreamWriter(const char* filePath) {
		return StreamManager::createWriter();
	}
}