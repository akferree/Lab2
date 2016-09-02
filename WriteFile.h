#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//class function
class WriteFile
{
  private: //private variables
	ofstream output_file;
	bool closed;
  public: //public functions
	WriteFile(const char* file_name);
	void writeLine(String* line);
	void close();
	~WriteFile();
	
};

#endif
