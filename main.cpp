#include<vector>
#include<string>
#include<iostream>
#include "concordance.h"
#include "word.h"

int main()
{
   Concordance con("alice.txt");
   con.parse();
   // con.print();
   // con.add_word(); 
   return 0;
}
