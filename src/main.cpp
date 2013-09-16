//
// This function will reverse a C-style string.  
// The general approach here is to set up a pointer at the back of the string
// as well as a pointer to the end of the string.  The two pointers will 
// walk towards one another and swap values

#include <stdio.h>
#include <string>


std::string reverse_string(std::string input)
	{
		std::string result;
		for (int i = input.length() - 1; i >= 0; i--)
		{
			result.push_back(input[i]);
		}
		return result;
	}


int _tmain(int argc, _TCHAR* argv[])
{
	std::string s;
	std::cin >> s;
	std::string result = reverse_string(s);
	return 0;
}


