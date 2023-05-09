#include<stdlib.h>
#include<stdio.h>

float Fatorial(int x);
void Calc();

int main(){
        Calc();
        return 0;
}


void Calc(){
        float e=0;
        for(int i=0; i<10000;i++){
                e = e + 1/(Fatorial(i));
        }

        printf("%.30f\n",e);

}


float Fatorial(int x){
        if(x == 0) return 1;
        else
                return x*Fatorial(x-1);

}
