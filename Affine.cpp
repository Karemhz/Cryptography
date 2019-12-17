#include<iostream>
#include<math.h>
#include "Chars.h"

std::string Encryption(std::string plainText, int key1, int key2);
std::string Decryption(std::string cipherText, int key1, int key2);


int main(void){
    
   int key1 = 2;
   int key2 = 7; 
   std::string plainText = "hello";         
   
   plainText = lowerCase(plainText);

   
   std::string cipherText = Encryption(plainText,key1,key2);  
   
   std::cout<<"Encryption: "<<cipherText<<'\n';
   std::cout<<"Decryption: "<<Decryption(cipherText,key1,key2)<<'\n';       
    return 0;
}

std::string Encryption(std::string plainText, int key1, int key2){
    
    std::string cipherText;
    for(auto p : plainText){
        int n = (Chars[p] * key2 + key1);
        while(n < 0)
            n += 26;

        cipherText += findChar(n % 26);
    }
   return cipherText;
}

std::string Decryption(std::string cipherText, int key1, int key2){
    
    std::string plainText;
    for(auto c : cipherText){
        int n = ((Chars[c]-key1) * Inverse[key2]);
        while(n < 0)
            n += 26;

        plainText += findChar(n % 26);
    }
   return plainText;
}
