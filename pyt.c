#include<stdio.h>
#include<stdlib.h>

int main(){
    /*for(int i=15;i>14;i--)
        printf("mux2 mux_%d(z[%d],1'b0,ctrl[2],out[%d]);\n",i+48,i,i);
    for(int i=14;i>=0;i--)
        printf("mux2 mux_%d(z[%d],z[%d],ctrl[2],out[%d]);\n",i+48,i,i+1,i);*/
    for(int i=0;i<=15;i++)
        printf("        #5 in=16'd16385; ctrl=4'd%d; //shift %d bits;\n",i,i);
}
