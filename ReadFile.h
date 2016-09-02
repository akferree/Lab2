//Autumn Ferree and Kris Lin
#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
	//declare your private variables
	private:
		ifstream input_file;
		bool _eof;
		bool closed;
		
	//declare your functions
	public:
		ReadFile(const char*); //constructor
		~ReadFile(); //destructor
		String* readLine(ReadFile* rf);
		bool eof(ReadFile* rf);
		void close(ReadFile* rf);

};

/*
ReadFile* createReadFile(const char* file_name);
void destroyReadFile(ReadFile* rf);
String* readLine(ReadFile* rf);
bool eof(ReadFile* rf);
void close(ReadFile* rf);
*/

#endif
