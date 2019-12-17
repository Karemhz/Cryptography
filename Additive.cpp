#include<iostream>
#include<math.h>
#include "Chars.h"

std::string Encryption(std::string plainText, int key);
std::string Decryption(std::string cipherText, int key);



int main(void){
    
    int key = 15;
    std::string plainText = "Hello",cipherText;
    plainText = lowerCase(plainText);
    cipherText = Encryption(plainText,key);  
        
   std::cout<<"Encryption: "<<cipherText<<'\n';
   std::cout<<"Decryption: "<<Decryption(cipherText,key)<<'\n';       
    return 0;
}

std::string Encryption(std::string plainText, int key){
    
    std::string cipherText;
    for(auto p : plainText){
        int n = (Chars[p] + key);
        while(n < 0)
            n += 26;

        cipherText += findChar(n % 26);
    }
   return cipherText;
}


std::string Decryption(std::string cipherText, int key){
    
    std::string plainText;
    for(auto c : cipherText){
        int n = (Chars[c] - key);
        while(n < 0)
            n += 26;

        plainText += findChar(n % 26);
    }
   return plainText;
}



