// PacManV2.cpp: определяет точку входа для приложения.
//

#include "PacManV2.h"

#include <string>
#include "Model/filereader.h"
#include "Model/modelexception.h"

using namespace std;

int main()
{
	try
	{
		std::string file_name = "level1.txt";
		FileReader reader("");
		
		if (reader.open(file_name))
		{
			cout << "File " << file_name << " is opened\n";

			while (!(reader.is_end()))
				cout << reader.read_line() << "\n";

			if (reader.close())
				cout << "File " << file_name << " is closed\n";
			else
				throw FileOpenException("Fail close file");
		}
		else
			throw FileOpenException("Fail open file");
	}
	catch (WrongFileNameException e)
	{
		cout << e.what() << "\n";
	}
	catch (NoSuchFileException e)
	{
		cout << e.what() << "\n";
	}
	catch (FileOpenException e)
	{
		cout << e.what() << "\n";
	}
	
	return 0;
}
