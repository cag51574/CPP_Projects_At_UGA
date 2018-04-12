#include <stdio.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <stdlib.h>

/**
 * Returns the number of characters in the file
 */
int count(FILE *fpt1){
  int temp = 0;
  int ch = 0;
  int flag = 0;
  while(flag == 0){
    ch = fgetc(fpt1);
    if(ch == EOF){
      flag = 1;
    }
    temp++;
  }
  return temp;
}

/**
 * Stores all differences into differencesFoundInFile1.txt
 */
void step1(int count, char *argv[]){
  struct timeval te1;
  gettimeofday(&te1, NULL); 
  long long start= te1.tv_usec; 

  FILE *fpt1 = fopen(argv[1],"r");
  FILE *fpt2 = fopen(argv[2],"r");
  FILE *fpt3 = fopen("differencesFoundInFile1.txt","w");

  char byte1;
  char byte2;

  if(fpt1 && fpt2){
    while((byte1=fgetc(fpt1))!=EOF){
      byte2=fgetc(fpt2);
      if(byte1 != byte2){
        fputc(byte1,fpt3);
      }
    }
  }
  fclose(fpt1);
  fclose(fpt2);
  fclose(fpt3);
  struct timeval te2;
  gettimeofday(&te2, NULL); 
  long long end = te2.tv_usec; 
  printf("Step 1 took %f milliseconds\n",(float)(end-start)/1000);
}

/**
 * Stores all differences into differencesFoundInFile2.txt
 */
void step2(int count, char *argv[]){
  struct timeval te1;
  gettimeofday(&te1, NULL); 
  long long start= te1.tv_usec; 

  FILE *fpt1 = fopen(argv[1],"r");
  FILE *fpt2 = fopen(argv[2],"r");
  FILE *fpt4 = fopen("differencesFoundInFile2.txt","w");
  char *byte1= (char*)malloc(sizeof(char)*count);
  char *byte2= (char*)malloc(sizeof(char)*count);

  if(fpt1 && fpt2){
    while((*byte2=fgetc(fpt2))!=EOF){
      (*byte1=fgetc(fpt1));
      if(*byte1 != *byte2){
        fputc(*byte2,fpt4);
      }
    }
  }
  //fputc('\0',fpt4);
  free(byte1);
  free(byte2);
  fclose(fpt1);
  fclose(fpt2);
  fclose(fpt4);
  struct timeval te2;
  gettimeofday(&te2, NULL); 
  long long end= te2.tv_usec; 
  printf("Step 2 took %f milliseconds\n",(float)(end-start)/1000);
}



/**
 * Main Function
 */
int main(int argc, char *argv[]){
  if(argc != 3){
    printf("Usage: proj3.out <file1> <file2>\n\n");
    return 0;
  }
  FILE *fpt1 = fopen(argv[1],"r");
  FILE *fpt2 = fopen(argv[2],"r");
  if(!(fpt1 && fpt2)){
    printf("There was an error reading a file.\n\n");
    return 0;
  }
  fclose(fpt1);
  fclose(fpt2);

  int c1 = count(fpt1);
  int c2= count(fpt1);

  step1(c1,argv);
  step2(c2,argv);
  return 0;
}
