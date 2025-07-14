/*
V.0.1
                            +------------------------------------------------------------------------------------+
                            |                                 Proyecto: C-Task                                   |                         
                            |                                     By Eliseo                                      |
                            |                                                                                    |
                            |Descripcion:                                                                        |
							|   - Gestor de tareas programado en C puro                                          |
                            |   - Estilo minimalista con arte ACCSI                                              |
                            |   - Poder crear y eliminar tareas                                                  |
                            |   - Poner nombre, descripcion, fecha de inicio y fecha de caducidad de la tarea    |
                            |   - Marcar tareas como completas o pendientes                                      |
                            +------------------------------------------------------------------------------------+
*/

//Codigo:

#include <stdio.h>

#define Barra "-------------------------------------"
#define Mensaje "||Bienvenido a C-Task||"
#define Version "V.0.1"
#define MenuEstructura "\n[1]Crear tarea\n[2]Borrar tarea\n[3]ver tareas"
// Prototipos:
void IniciarPrograma();
void MensajeDeBienvenida();
void CrearTarea();
void EliminarTarea();
void MarcarEstadoDeLaTarea();
void Menu();

//Variables:



int main(){
	
     MensajeDeBienvenida();
    Menu();
    
	
	
	
	
	return 0;
}

void IniciarPrograma(){
	
    void MensajeDeBienvenida();
    void CrearTarea();
    void EliminarTarea();
    void MarcarEstadosDeLaTarea();
	
	
	
}


	
	void Menu(){
		printf("\n\n"Barra);
		printf(MenuEstructura);
		printf("\n"Barra);
		
		
		
		
		
	}



void MensajeDeBienvenida(){
	
	printf(Mensaje);
	printf("\n" Version);
	
	
	
		
	
}



