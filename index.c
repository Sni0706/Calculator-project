#include<stdio.h>
int main (){
    int a,c,e,g,choice;
    double b,d,f,h;
    printf("For Summation choice 1\n");
    printf("For Subtraction choice 2\n");
    printf("For Multiplication choice 3\n");
    printf("For Division choice 4\n");
    while (1){
        printf("\nenter your choice : ");
scanf("%d",&choice);
    if(choice==1){
        printf("Do Summation \n");
        scanf("%d%lf",&a,&b);
        double sum ;
        sum = (double)a+b;
        printf("Result : %lf\n",sum);
    }
   else if(choice==2){
        printf("Do Subtraction \n");
        scanf("%d%lf",&c,&d);
        double sub ;
        sub= (double)c-d;
         printf("Result : %lf\n",sub);
    }
       else if(choice==3){
        printf("Do Multiplication \n");
        scanf("%d%lf",&e,&f);
        double mul ;
        mul = (double)e*f;
         printf("Result : %lf\n",mul);
       }
       else if(choice==4){
        printf("Do Division \n");
        scanf("%d%lf",&g,&h);
        double div ;
        div = (double)g/h;
         printf("Result : %lf\n",div);
       }
       else if (choice==0) {
        return 0;
    }
    else {
        printf ("Error");
    }
    }
    return 0;
}
    int summation (double x,double y){
        return x+y;
    }
    int subraction (double m,double n){
        return m-n;
    }
     int multiplication (double p,double q){
        return p*q;
    }
    int division (double p,double q){
        return p/q;
    }