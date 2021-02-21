#include <iostream>
#include <cstring>
#include <vector>
using std::string;
using std::cin;
using std::cout;
using std::endl;

// Esi artagrac chi !!!



void minLengthWords(string input, string &minWord)
{
    int len = input.length();
    int si = 0, ei = 0;
    int min_length = len, min_start_index = 0;

    while (ei <= len)
    {
        if (ei < len && input[ei] != ' ')
            ei++;

        else
        {
            int curr_length = ei - si;

            if (curr_length < min_length)
            {
                min_length = curr_length;
                min_start_index = si;
            }

            ei++;
            si = ei;
        }
    }

    minWord = input.substr(min_start_index, min_length);
}

int main () {
	
	string str;
    cout << "Nermuceq tox: ";
    getline(cin,str);
    
    string minWord = "";
   
    minLengthWords(str, minWord);
    cout << "Minimum length word: " << minWord << endl;
		
}


