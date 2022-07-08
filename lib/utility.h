#include <stdio.h>
#include <unistd.h>
#include <windows.h>

const int PRO_BAR_LENGTH =30;

#define upper 300
#define lower 0
#define step 20
#define ENTER '\n'

enum Colors { // Listado de colores (La letra "L" al inicio, indica que es un color más claro que su antecesor).
    BLACK      = 0,
    BLUE       = 1,
    GREEN      = 2,
    CYAN       = 3,
    RED        = 4,
    MAGENTA    = 5,
    BROWN      = 6,
    LGREY      = 7,
    DGREY      = 8,
    LBLUE      = 9,
    LGREEN     = 10,
    LCYAN      = 11,
    LRED       = 12,
    LMAGENTA   = 13,
    YELLOW     = 14,
    WHITE      = 15
};
// procedimiento para cambiar el color del fondo y/o pantalla
void setColor(int Background, int Text){ 
    int colorTexto= Text + (Background * 16);         // los colores van del 0 al 255 por eso se multiplica por 16
    HANDLE terminal = GetStdHandle(STD_OUTPUT_HANDLE);   // referenciamos a la consola.
    SetConsoleTextAttribute(terminal, colorTexto); 
}

void showprogressbar( int delay )
{
    for (int porcentaje = 0; porcentaje <= 100; porcentaje++)
    {
        int num_char = (porcentaje* PRO_BAR_LENGTH)/100;
        printf("\r[");
        for (int i = 0; i <= PRO_BAR_LENGTH; i++)
        {
            printf( ( i<= num_char) ? "#": " ");
        }
        printf("]%d%%", porcentaje);
        usleep(900*delay);
    }
    fflush(stdout);
}

void showadvance(int delay)
{
    char caracteres[]= "|/-\\";
    for (int x = 0; x <= 100 ; x++)
    {
        printf("\r %c... %d%%", caracteres[x%4], x);
        usleep(1500*delay);
    }
    printf("done..!");
}