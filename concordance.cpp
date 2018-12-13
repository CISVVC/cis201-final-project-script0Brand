#include "concordance.h"
#include "word.h"

Concordance::Concordance(std::string filename)
{
    m_filename = filename;
}

void Concordance::parse()
{
    std::ifstream file(m_filename.c_str());
    while(!file.eof())
    {
        std::string word = next_word(file);
        std::cout << word << std::endl; // THIS CODE WILL PRINT OUT WORD TO SCREEN - 
    }
}

bool Concordance::is_whitespace(char c)
{
    return (c == ' ' || c == '\n' || c == '\t'); 
}

bool Concordance::is_punctuation(char c) // I ADDED THIS FUNCTION - PAUL SUGGESTION - 
{
    return (c == ',' || c == '.' || c == '?' || 
            c == '(' || c == ')' || c == ':' ||
            c == '!' || c == ';' || c == '\''); 
}

void Concordance::eat_whitespace(std::ifstream& input)
{ 
    for(;;)
    {
        char c;
        input.get(c);
        if(input.eof())
            break;
        if(!is_whitespace(c) && !is_punctuation(c)) 
        {
                input.putback(c);
                break;
        }
    }
}

std::string Concordance::next_word(std::ifstream& input)
{
    std::string word;
    for(;;)
    {
        char c;
        input.get(c);
        if(input.eof())
            break;
        if(!is_whitespace(c)&&!is_punctuation(c)) 
        {
            word += tolower(c); // I added the tolower() function. 
        }
        else
        {
            eat_whitespace(input);
            break;
        }
    }
    return word;
}
int Concordance::find_word(std::string word)
{
    // COULD NOT IMPLEMENT THIS CODE
    // search the word vector, and return the word, line number, and number of times it repeats. 
}
void Concordance::print()
{
    // COULD NOT IMPLEMENT THIS CODE -  print out the concordance, "word, line number, number of times"
    // for(int i=0;i<m_word_stats.size();i++) // - YOU NEED TO ITERATE OVER VECTOR AND PRINT OUT EACH WORD. 
    //   m_word_stats[i].print();
}
