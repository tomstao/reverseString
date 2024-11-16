#include <iostream>
#include <string>

// Reverse the words in a given string
std::string reverse_words(std::string str)
{
    std::string out;
    std::string cword;
    for (char c : str) {
        if (c == ' ') {
            out += cword;
            out += c;
            cword = "";
            continue;
        }
        cword = c + cword;
    }
    out += cword;
    return out;
}
int main()
{
    std::string str= "Hello, World!";
    reverse_words(str);
    std::cout << str << std::endl;



    return 0;
}
