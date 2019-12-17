#include<iostream>
#include "Chars.h"
std::string Encryption(std::string plainText, int key[4][4]);
std::string Decryption(std::string cipherText, int key[4][4]);


int main(void){

   int key[4][4] = {{9,7,11,13},{4,7,5,6},{2,21,14,9},{3,23,21,8}};
   std::string plainText = "code is readyz",cipherText ;
   plainText = delSpaces(plainText);
   plainText = lowerCase(plainText);
 
    cipherText = Encryption(plainText,key);
    std::cout<<"Encryption: "<<cipherText<<'\n';
    //std::cout<<"Decryption: "<<Decryption(cipherText,key)<<'\n';       




    return 0;
}

std::string Encryption(std::string plainText, int key[4][4]){
       char charText[3][4];
       std::string cipherText;
       int p = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 4; j++){
               charText[i][j] = plainText[p];
               p++;
               std::cout<<charText[i][j] << " ";
            }
            std::cout<<"\n";
       }
   

      int n = 4,m = 3, sum[3][4];
      for(int i=0;i<m;++i)
			for(int j=0;j<n;++j)
			{
				sum[i][j]=0;
				for(int k=0;k<n;++k)
					sum[i][j]=sum[i][j]+(Chars[charText[i][k]]*key[k][j]);
            }

	   for(int i = 0; i < 3; i++)
          for(int j = 0; j < 4; j++){
              sum[i][j] = sum[i][j] % 26;
              cipherText += findChar(sum[i][j]);
          }
     return cipherText;      
}
/* 
std::string Decryption(std::string cipherText, int key[4][4]){
       char charText[3][4];


      for(int i = 0; i < 4; i++){
          for(int j = 0; j < 4; j++){
            key[i][j] = Inverse[key[i][j]];
          
          std::cout<<key[i][j] << " ";
          }
        std::cout<<"\n";
      }



       std::string plainText;
       int p = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 4; j++){
               charText[i][j] = cipherText[p];
               p++;
               std::cout<<"\n"<<charText[i][j] << " ";
            }
            std::cout<<"\n";
       }
   

      int n = 4,m = 3, sum[3][4];
      for(int i=0;i<m;++i)
		{
			for(int j=0;j<n;++j)
			{
				sum[i][j]=0;
				for(int k=0;k<n;++k){
					sum[i][j]=sum[i][j]+(Chars[charText[i][k]]*key[k][j]);
                   
                }            
            }
		}
	   for(int i = 0; i < 3; i++)
          for(int j = 0; j < 4; j++){
              sum[i][j] = sum[i][j] % 26;
              plainText += findChar(sum[i][j]);
          }
     return plainText;      
} */