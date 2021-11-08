// ConsoleApplication56.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class utility {
private:
    std::string str;
public:
    utility() { str = {}; }
    utility(std::string s) {
 
    }
    bool is_float(const std::string &str)
    {
        if (!is_number(str)) {
            try {
                int  i = 0;
                float f = stof(str);
                std::cout << f << str.substr(i).c_str() << std::endl;
                return true;
            }
            catch (...)
            {
                return false;
            }
        }
    }

    bool is_number(std::string str) {
        for (int i = 0; i < str.length(); i++)
            if (isdigit(str[i])) {
                return true;
            }
        return false;
    }
    bool IsEmailAddress(const std::string& str)
    {
        bool at;
        bool com;
        for (int i = 0; i <= str.length(); ++i) {
            if (str[i]=='@') 
            {  at =true; }
        }
        int size = str.length();
        if (str.substr(size - 4, size - 1) == ".com") { com = true; }


        if (at && com) { return true; } return false;
    }
    bool is_bool(std::string& str) {
       
        if (str == "true" || str == "false") {

            return true;
        }
      
    }
    bool is_url(const char* str) {
        char s[5];
        for (int i = 0; i <= 4; ++i) {

            s[i] = str[i];
        }
        if (s == "http" || s == "www") { return true; } return false;
    }
};
int main()
{
    utility u;
    u.is_url("hello");

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
