#include <iostream>
#include <cstring>
#include <vector>
using std::string;
using std::cin;
using std::cout;
using std::endl;

// Esel



void minMaxLengthWords(string input, string &minWord, string &maxWord)
{
    int len = input.length();
    int si = 0, ei = 0;
    int min_length = len, min_start_index = 0, max_length = 0, max_start_index = 0;

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

            if (curr_length > max_length)
            {
                max_length = curr_length;
                max_start_index = si;
            }
            ei++;
            si = ei;
        }
    }

    minWord = input.substr(min_start_index, min_length);
    maxWord = input.substr(max_start_index, max_length);
}

int main () {
	
	string str;
    cout << "Nermuceq tox: ";
    getline(cin,str);
    
    string minWord = "";
    string maxWord = "";
   
    minMaxLengthWords(str, minWord, maxWord);
    cout << "Minimum length word: " << minWord << endl;
    cout << "Maximum length word: "  << maxWord << endl;

		
}


