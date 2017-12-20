#include <stdlib.h>
#include <stdio.h>
#define BITSPRRWORD 32
#define SHIFT 5
#define MASK 0x1f
//#define N 10000000;
#define N 1000

int a[1 + N/BITSPRRWORD ];
void set( int i ){
  a[ i>>SHIFT ] |=( 1<<( i&MASK ) );
}

void clr( int i ){
  a[ i>>SHIFT ] &= ~(1<<( i&MASK )  );
}

int  test( int i ){
  return a[ i>>SHIFT ] & ( 1<<( i&MASK ) );  

}
int main( ){
  int a;
  printf( "%d",sizeof a );
    for(int i=0;i<N;i++){
      clr( i );     
    }
    for(int i=0;i<N;i++){
      if( test( i ) )
	printf( "%d ",i );
    }

    printf("Hello emacs compie\n");
    for(int i=0;i<N/100;i++){
      int temp  = N*(1.0*rand()/RAND_MAX);
      printf( "%d ",temp );
      set( temp );
    }
  printf( "---------------\n" );
      
 // int temp  = N*(1.0*rand()/RAND_MAX);
    for(int i=0;i<N;i++){
      if( test( i ) )
	printf( "%d ",i );
    }
    return 0;

}



















