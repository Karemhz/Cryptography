#include<iostream>
#include"Chars.h"

std::string Encryption(std::string plainText, int key[]);
std::string Decryption(std::string cipherText, int key[]);

int main(void){
    
    int key[] = {2,0,3,4,1};
    std::string plainText= "Enemy attacks tonightz",cipherText;
    plainText = delSpaces(plainText);
    plainText = lowerCase(plainText);

   cipherText = Encryption(plainText,key);
   std::cout<<cipherText;





    return 0;
}

std::string Encryption(std::string plainText, int key[]){
   
   char text[4][5];
   int p = 0,temp;
   char newWord[4][5];

   std::string cipherText;
   for(int i = 0; i < 4; i++){
     for(int j = 0; j < 5; j++){
         if(p < plainText.length()){
            text[i][j] = plainText[p]; 
         std::cout<<text[i][j] << " ";
         p++;
         }
     }
     std::cout<<"\n";
   }
 

  /*  for(int i = 0; i < 5; i++){
      for(int j = 0; j < 4; j++)
      {
         std::cout<<text[j][i]<<" ";
      }
      std::cout<<"\n";
   } */
   for(int i = 0; i < 4; i++)
     for(int j = 0; j < 5; j++)
     {
        cipherText += text[i][j];
     }
   return cipherText;

}
