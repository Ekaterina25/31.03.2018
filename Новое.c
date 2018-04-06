#include <stdio.h> 
#include <string.h> 
void main() 
{ 
    char k[100] = "Лес"; 
    char *s = k; 
    char second[100] = "Тимур"; 
    char *c = second; 
    strcat(s, c); 
    puts(s); 
    return 0; 
    
} 
