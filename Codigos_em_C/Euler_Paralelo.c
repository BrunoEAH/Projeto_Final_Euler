#include<stdlib.h>
#include<stdio.h>
#include<omp.h>

float Fatorial(int x);
void Calc(float *e,int n);

int main(){
	float e_global= 0.0 ;
        int thread_count =100;
	int n = 1000000;
#	pragma omp parallel num_threads(thread_count)	
	Calc(&e_global,n);
        
	printf("%.30f\n",e_global);
	return 0;
}


void Calc(float *e,int n){
	int my_rank = omp_get_thread_num();
	int thread_count = omp_get_num_threads();
	float resultado;
	int local_n;

	local_n = n/thread_count;

        for(int i=0; i<local_n;i++){
                resultado = resultado + 1/(Fatorial(i));
        };

#	pragma omp critical
	*e = resultado;

}


float Fatorial(int x){
        if(x == 0) return 1;
        else
                return x*Fatorial(x-1);

}
