/* Data de submissao:17/03/2020
 * Nome:Eric Soares Arita
 * RA:170561
 */

#include <stdio.h>
char *Inverte(char *s);
char *InversorPalavras(char *s);
const int tam_buffer=100;

int main() {
  char buffer[tam_buffer];
  fgets(buffer, tam_buffer, stdin);
  InversorPalavras(buffer);
  printf("%s", buffer);
  return 0;
}
char *Inverte(char *s){
    int i,j;
    char tmp;
    for(i=0;s[i]!=' '&& s[i]!='\0' && s[i]!='\n';i++)
    ;
    for(j=0;j<=i/2;){
        tmp=s[--i];
        s[i]=s[j];
        s[j++]=tmp;
    }
    return s;
}
char* InversorPalavras(char *s){
    char *t;
    t=s;
    Inverte(t);
    for(;*s!='\0';s++){
        if(*(s+1)!='\0' )
            if(*s==' ')
                Inverte(s+1);
        }
     return t;
}
