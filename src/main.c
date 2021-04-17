/** 
 * @file alumnos.c
 * @author Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * @brief Imprime el nombre, apellido y nro. de documento de los alumnos registrados
 * @version 0.1.0
 * @date 2019/03/01
 * @license: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause> 
 * @copyright Copyright 2019. All rights reserved
 * 
 */

/*=====[Module Name]===========================================================
 
/*=====[Inclusion of own header]=============================================*/

#include "alumnos.h"
#include <stdio.h>

/*=====[Inclusions of private function dependencies]=========================*/

/*=====[Definition macros of private constants]==============================*/

#define BUFFER_LEN 2048 //!< Longitud del buffer de alumnos

/*=====[Private function-like macros]========================================*/

/*=====[Definitions of private data types]===================================*/

/*=====[Definitions of external public global variables]=====================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Prototypes (declarations) of private functions]======================*/

/*=====[Implementations of public functions]=================================*/

/*=====[Implementations of interrupt functions]==============================*/

/*=====[Implementations of private functions]================================*/

int main(int argc, char *argv[]) {
    const char cadena[BUFFER_LEN]; //!< Buffer en el que se guardan los alumnos.

    if (SerializarAlumnos(cadena, sizeof(cadena))) {
        printf("Listado total de alumnos: %s\r\n", cadena);
    } else {
        printf("No se pudo serializar un alumno\r\n");
    }
    return 0;
}
