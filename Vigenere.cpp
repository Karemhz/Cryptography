#include<iostream>
#include "Chars.h"

std::string Encryption(std::string plainText, std::string key);
std::string Decryption(std::string cipherText, std::string key);


int main(void){

  std::string plainText = "she is listening";
  std::string key = "PASCAL";
  plainText = lowerCase(plainText);
  plainText = delSpaces(plainText);
  key = lowerCase(key);
  

  std::string cipherText = Encryption(plainText,key);
  std::cout<<"\nEncryption: "<<cipherText<<'\n';
  std::cout<<"Decryption: "<<Decryption(cipherText,key)<<'\n';       

    return 0;
}

std::string Encryption(std::string plainText, std::string key){

   std::string cipherText;
   int j = 0;
   for(auto c : plainText){
          j = j % key.length();
          cipherText += findChar((Chars[c] + Chars[key[j]]) % 26 );
          j++;
       }
   return cipherText;  
}
std::string Decryption(std::string cipherText, std::string key){

   std::string plainText;
   int j = 0;
   for(auto c : cipherText){
          j = j % key.length();
          int n = (Chars[c] - Chars[key[j]]);
          if(n < 0)
            n += 26;
          else
            n = n % 26;  
          plainText += findChar(n);
          j++;
       }
   return plainText;  
}