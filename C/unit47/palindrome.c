#include <stdio.h>
#include <string.h>

int main(){
  char s1[21];
  int length;
  int Remainder;
  int share;

  printf("%s","글자를 입력해주세요:");
  scanf("%s",s1);

  length = strlen(s1);
  Remainder = length%2;
  share = length/2;
  
  for(int i = 0; i < share-Remainder; i++){
    int j = (length-1)-i;
    if (s1[i] != s1[j]) {
      printf("%s \n","회문판별 아님.");
      return 0;
    }
  }

  printf("%s \n","회문판별이 맞음.");

  return 0;
}