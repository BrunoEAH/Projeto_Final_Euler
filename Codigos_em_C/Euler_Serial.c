#include<stdlib.h>
#include<stdio.h>

double Fatorial(int x);
void Calc();

int main(){
        Calc();
        return 0;
}


void Calc(){
        double e=0;
        for(int i=0; i<100000;i++){
                e = e + 1/(Fatorial(i));
        }

        printf("%.15f\n",e);

}

double Fatorial(int x){
        if(x == 0) return 1;
        else
                return x*Fatorial(x-1);

}
