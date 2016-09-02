#include "ReadFile.h"
#include <iostream>
#include <string>


//fill your ReadFile class with data (the constructor)
ReadFile::ReadFile(const char* file_name)
{
	input_file.open(file_name);
	closed = false;
	_eof = false;
   
}

//the descructor
ReadFile::~ReadFile()
{
   //close();
   //delete[] ;
}

//checks to see if it is the end of the file or not
bool ReadFile::eof(ReadFile* rf)
{
   return _eof;
}

//closes the file if it is not already closed
void ReadFile::close(ReadFile* rf)
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

//actually reads the file and creates a pointer to the location of the data(string) it read in
String* ReadFile::readLine(ReadFile* rf)
{
   if (closed) return NULL;
   if (_eof) return NULL;

   string text;
   _eof = !(getline(input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
