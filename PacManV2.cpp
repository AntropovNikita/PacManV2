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

		if (reader.open("level1.txt"))
			cout << "fail open" << endl;

		while (!(reader.is_end()))
			cout << reader.readline() << endl;

		if (reader.close())
			cout << "fail close" << endl;
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
