#include<iostream>
#include "word.h"
using namespace std;

Word::Word(std::string word) // - THERE IS ONLY ONE ARGUMENT BEING PASSED 
{
    m_word = word;
    // m_count = count;
}

void Word::add_count(int count)
{
    m_count++;
}

void Word::add_line(int line)
{
    m_line.push_back(line);
}

void print()
{
   // std::cout << m_word << std::endl; // - THIS FUNCTION SHOULD PRINT EACH WORD ON THE STRING - 
}
