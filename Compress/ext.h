#define MAX 16	//MAXimum length of codeword, more the MAX more overhead
char padding;
unsigned char N;

typedef struct symCode
{ char x;
  char code[MAX];
}symCode;

char ext[]=".hzip";
char dext[]=".txt";


