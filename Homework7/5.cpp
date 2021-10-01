//Savindu Harith - IM/2019/025 - Question No 5
#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
  char stringHolder[1000];
  cout << "Enter the text. : ";
  cin.getline(stringHolder,1000);
  char *separateCharacters;
  separateCharacters = strtok(stringHolder,"\n ");
  int count = 0;
  while(separateCharacters != NULL)
  {
  	count ++;
  	separateCharacters = strtok(NULL,"\n ");
  }
  cout << count;
  return 0;
}
