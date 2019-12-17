#include<map>
#include<iostream>
#include <algorithm>
#include<string>

std::map<char,int> Chars{ {'a',0}, {'b',1}, {'c',2}, {'d',3},
                          {'e', 4}, {'f', 5}, {'g', 6}, {'h',7}, 
                          {'i',8}, {'j', 9}, {'k',10}, {'l',11}, 
                          {'m',12}, {'n',13}, {'o',14}, {'p',15},
                          {'q',16}, {'r',17}, {'s',18}, {'t',19},
                          {'u',20}, {'v',21}, {'w',22}, {'x',23},
                          {'y',24}, {'z',25} };

std::map<int,int> Inverse { {1,1}, {3,9}, {7,15}, {9,3}, {11,19},{15,7}, {17,23},{19, 11}, {21,5}, {23,17}, {25,25} };                          


char findChar(int x){
  for(auto c : Chars){
      if(c.second == x){
        return c.first; 
      }  
  }
  return '0';
} 
std::string lowerCase(std::string text){

   for(auto &c : text) 
      c = tolower(c);
   return text;   
}

std::string delSpaces(std::string &str) 
{
   str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
   return str;
}