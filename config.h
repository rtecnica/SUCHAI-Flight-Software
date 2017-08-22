/**
 * @file  SUCHAI_config.h
 * @author Tomas Opazo T
 * @author Carlos Gonzalez C
 * @autor Ignacio Ibañez A
 * @date 04-01-2013
 * @copyright GNU Public License.
 *
 * El proposito de este header file es configurar las ditintas opciones de SUCHAI
 * en un solo archivo a traves de una serie de defines que son utilzadas por
 * el pre-procesador del compilador. Las configuraciones descritas aca, afectan
 * la forma en que funciona el sistema de vuelo del satelite SUCHAI, por ejemplo
 * activando o desactivando opciones de debug, hardware disponible y parametros
 * generales del sistema.
 */

#ifndef SUCHAI_CONFIG_H
#define	SUCHAI_CONFIG_H

/* General includes */
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include "osQueue.h"

/* General system configurations */

/* system debug configurations */
#define LOG_LEVEL     LOG_LVL_DEBUG 	///< Define debug levels

/* Data repository configurations */
#define SCH_STATUS_REPO_MODE    	0   ///< Status repository location. (0) Internal, (1) Single external.
#define SCH_CHECK_IF_EXECUTABLE_SOC 0   ///< Check if a command is executable using energy level (SOC)

#endif	/* SUCHAI_CONFIG_H */