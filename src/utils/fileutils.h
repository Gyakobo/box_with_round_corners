#ifndef FILEUTILS_H
#define FILEUTILS_H

#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

class FileUtils {
public:
	static string read_file(const char* filepath) {
		FILE* file = fopen(filepath, "rt"); //r - readonly //r - reads only textfiles, well uses proper line endings
		fseek(file, 0, SEEK_END);
		unsigned long length = ftell(file);
		char* data = new char[length + 1];
		memset(data, 0, length + 1);
		fseek(file, 0, SEEK_SET);
		fread(data, 1, length, file);
		fclose(file);
		
		string result(data);
		delete[] data;
		return result;
	}
};

#endif
