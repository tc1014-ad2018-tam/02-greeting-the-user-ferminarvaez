/* Author: Fermín
 * Created on 27 de agosto de 2018, 09:16 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
   
    int hora;

    printf( "\n   B?Que hora es? En formato de 24 horas: " );
    scanf( "%d", &hora );
    
    if ((hora >= 0) && (hora <= 5)) {
      printf("Buenas Madrugadas");
    }
    
     if ((hora >= 6) && (hora <= 11)) {
      printf("Buenos dias");
    }
        
    if ((hora >= 12) && (hora <= 18)) {
      printf("Buenas tardes");
    }
      
    if ((hora >= 19) && (hora <= 23)) {
      printf("Buenas noches");
    }
      
    if (hora > 24) {
      printf("La hora introducida no es correcta");
    }
    
    if (hora < 0) {
        printf("La hora introducida no es correcta");
    }
    
    return 0;
}
