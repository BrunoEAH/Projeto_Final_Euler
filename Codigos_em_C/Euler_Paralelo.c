#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

float Fatorial(int x);
void Calc(float *e);

int main(){
  
  float e = 0;
  int thread_count = 100;
  
#pragma omp parallel num_threads(thread_count)
  Calc(&e);

  printf("%.100f\n",e);

  return 0;
}

void Calc(float *e){
  float resultado;
  int my_rank = omp_get_thread_num();
  int thread_count = omp_get_num_threads();
  
    for(int i=0; i<10000;i++)
      resultado = 1/(Fatorial(i));
    
#pragma omp critical
*e += resultado;

}


float Fatorial(int x){
        if(x == 0) return 1;
        else
                return x*Fatorial(x-1);

}
