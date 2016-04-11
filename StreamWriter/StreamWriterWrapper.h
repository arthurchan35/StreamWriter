typedef void CFileStreamWriter;

#ifdef STREAM_WRITER_WRAPPER
extern "C" {
#endif

	CFileStreamWriter* newStreamWriter(const char* filePath);

#ifdef STREAM_WRITER_WRAPPER
}
#endif