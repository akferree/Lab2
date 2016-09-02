#include "WriteFile.h"
#include <sstream>

//Constructor: open the output file and set closed to true
WriteFile::WriteFile(const char* file_name)
{
	output_file.open(file_name);
    closed = false;
}

//Write to the open file
void WriteFile::writeLine(String* line)
{
   if (!closed && line->length() > 0)
   {
      output_file << line->getText() << endl;
   }
   
}

//close the file
void WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

//destructor: delete the class object
WriteFile::~WriteFile()
{
}


