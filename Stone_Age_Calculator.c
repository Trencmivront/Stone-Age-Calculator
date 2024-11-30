#include <stdio.h>

int main()
{
    
    char sign;
    float number, number2;
    
    printf("\t\tStone Age Calculator\n\n\tPlease use '+', '-', '*', '/', '=' signs to make calculations;\n");
    
    scanf("%f %c", &number, &sign);
       
    while (sign != '='){
        
        scanf(" %f", &number2);
        
        switch (sign){
            
            case '+': number += number2;
            break;
            
            case '-': number -= number2;
            break;
            
            case '*': number *= number2;
            break;
            
            case '/': {if (number2 == 0){
                    
                    printf("\aCalculation error! Division by 0\n");
                    
                    while(number2 == 0) scanf("%f", &number2);
                    
                }
                
                number /= number2;
                
            }
            break;
            
            default: printf("\aInvalid sign.\n");
            return 0;
            break;
            
        }
        
        printf(" \n%f\n", number);
        
        scanf(" %c", &sign);
        
    }
    
    printf("%.2f", number);

    return 0;
}
