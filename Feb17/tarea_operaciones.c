/*programa 17 feb :tarea de operaciones*/

#include <stdio.h> 

int main (){
         float a,b,c,d,e1,e2,e3,e4;
       
         
         scanf("%f",&a);
         scanf("%f",&b);
         scanf("%f",&c);
         scanf("%f",&d);
         
         e1=(a+b*c/d);
         e2=((a+b)*c)/d;
         e3=(a+b)*(c/d);
         e4=a+b*c/d;
         
         printf("e=(a+b*c/d)=%f\n",e1);
         printf("e=((a+b)*c)/d=%f\n",e2);
         printf("e=(a+b)*(c/d)=%f\n",e3);
         printf("e=a+b*c/d=%f\n",e4);
}
