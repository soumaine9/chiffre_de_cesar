#include<stdio.h>
void decrypt(int decalage,char*str){
     int i = 0;
      while (str[i] != '\0') {
         if (str[i] >= 'a' && str[i]<= 'z') {
             char c = str[i] - 'a';
             c =c+26- decalage;
             c = c % 26;
             str[i] = c + 'a';
         }
         i++;
      }
      printf("décryptage :%s\n", str);
}
void cesar(char str[], int shift)
 {
      int i = 0;
      while (str[i] != '\0') {
         if (str[i] >= 'a' && str[i]<= 'z') {
             char c = str[i] - 'a';
             c += shift;
             c = c % 26;
             str[i] = c + 'a';
         }
         i++;
      }
      printf("cryptage :%s\n", str);
}
int main()
{
    char string[]="my name is";
    cesar(string,2);
    decrypt(2,&string);
    return 0;
}