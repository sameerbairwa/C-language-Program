#include<stdio.h>
int main(){
    int i,j,n,count=0;
    printf("enter number\n");
    scanf("%d",&n);//35

    int k=n;
  /*
    for(i=0;i<n;i++){
      if(n>0){
        j=n%10;//j=5   j=3
        printf("%d\n",j);
        n=n/10;//n=3
      }
      else{
        printf("still runnnig \n");
      }

    }
    */

    //*

    for(i=0;i<k;i++){
      if(n>0){
        j=n%10;//j=5   j=3
        printf("%d\n",j);
        n=n/10;//n=3
        count++;
      }
      else{

        break;
      }



    }
    printf("number of digit=%d",count);
  //  */


  /*
  // or sesond method
    while(n>0){
     if(n>0){
        j=n%10;//j=5   j=3
        printf("%d\n",j);
        n=n/10;//n=3
      }
      else{
        printf("still runnnig \n");
      }


    }
    */
}
