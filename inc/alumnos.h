/** 
 * @file alumnos.h
 * @author Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * @brief Funciones de utilidad para serializar nombres de alumnos
 * @version 0.1.0
 * @date 2019/03/01
 * @license: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause> 
 * @copyright Copyright 2019. All rights reserved
 * 
 */

/*=====[Module Name]===========================================================

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

//! Estructura de datos para almacenar la informacion de un alumno
typedef struct alumno_s {
    char apellidos[30];     //!< Contiene el apellido del alumno
    char nombres[30];       //!< Contiene el nombre del alumno
    char documento[11];     //! < Contiene el documento del alumno
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Serializa los datos de un alumno en una cadena JSON
 * 
 * Esta funcion se utiliza para convertir los datos estructurados en memoria
 * en una cadena de texto que pueda ser transmitida por un puerto de comunicaciones
 * Se utiliza el formato JSON proveniente de JavaScript y muy difundido en las
 * aplicaciones WEB
 * 
 * @param[out]  cadena      Puntero a la cadena de caracteres
 * @param[in]   espacio     Espacio disponible en la cadena de caracteres
 * @param[in]   alumno      Puntero a la esctructura con los datos del alumno
 * @return                  Indica si se pudieron serializar correctamente los datos
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Serializa los datos de todos los alumnos en una cadena JSON
 * 
 * @param[out]  cadena      Puntero a la cadena de caracteres 
 * @param[in]   espacio     Espacio disponible en la cadena de caracteres
 * @return                  Indica si se pudieron serializar correctamente los datos
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
