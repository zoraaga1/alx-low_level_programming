
#include <stdio.h>

int main(void) {
  int a; 
  int b;

  for (a = 0; a < 9; a++){
    for (b = 1; b < 10; b++){
        
       if (a == b){
           
       continue;
       }
       if (a == 2){
           if (b < 2){
           continue;
           }
       }if
       
       if (a == 3){
           if (b < 4){
           continue;
           }   
       }
       
       if (a == 4){
           if (b < 5){
           continue;
           }   
       }
       
         if (a == 5){
           if (b < 6){
           continue;
           }   
       }
       
         if (a == 6){
           if (b < 7){
           continue;
           }   
       }
       
         if (a == 7){
           if (b < 8){
           continue;
           }   
       }
       
         if (a == 8){
           if (b < 9){
           continue;
           }   
       }

       
       putchar (a + '0');
       putchar (b + '0');
       if (a == 8){
           if (b == 9)
           continue;
       }
       putchar (',');
       putchar (' ');
      
       
       }
       
      
    }
   

	
    return 0;
    
  

        
}
