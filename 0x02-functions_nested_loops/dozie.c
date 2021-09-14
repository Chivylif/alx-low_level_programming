#include "main.h"

/**
 * times_table - Prints 9 times table starting from 0
 *
 * Return: Return the 9 times table
 */

void times_table(void)                                                                                                          
{                                                                                                                               
        int i, j;                                                                                                               
                                                                                                                                
        for (i = 0; i < 10; i++)                                                                                                
        {                                                                                                                       
                _putchar('0');                                                                                                  
                                                                                                                                
                for (j = 1; j < 10; j++)                                                                                        
                {                                                                                                               
                        int result;                                                                                             
                                                                                                                                
                        result = i * j;                                                                                         
                        if (result > 9)                                                                                         
                        {    
                                _putchar(',');                                                                                  
                                _putchar(' ');                                                                                  
                                _putchar((result / 10) + '0');                                                                  
                                _putchar((result % 10) + '0');                                                                  
                                continue;                                                                                                    
                        else                                                                                                    
                        {                                                                                                       
                                _putchar(',');                                                                                  
                                _putchar(' ');                                                                                  
                                _putchar(' ');
				_putchar(result + '0');

                        }
		}
		_putchar('\n');
	}
}
                        
