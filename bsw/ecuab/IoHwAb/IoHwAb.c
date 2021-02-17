/* -------------------------------- Arctic Core ------------------------------
 * Arctic Core - the open source AUTOSAR platform http://arccore.com
 *
 * Copyright (C) 2009  ArcCore AB <contact@arccore.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 * -------------------------------- Arctic Core ------------------------------*/

#include "Rte_Type.h"
#include "IoHwAb.h"

Std_ReturnType IoHwAb_Get_Digital(IoHwAb_SignalType signal, IoHwAb_LevelType *value, IoHwAb_StatusType *status);
Std_ReturnType IoHwAb_Set_Digital(IoHwAb_SignalType signal, IoHwAb_LevelType newValue, IoHwAb_StatusType *status);

Std_ReturnType DigitalInput_Get(IoHwAb_SignalType signalId,
		IoHwAb_LevelType* value, SignalQuality* quality)
{
	Std_ReturnType rv;
	IoHwAb_StatusType s;

	rv = IoHwAb_Get_Digital( signalId, value, &s );
	*quality= (SignalQuality)s.quality;
    return rv;
}


Std_ReturnType DigitalOutput_Set(IoHwAb_SignalType signalId,
		const DigitalLevel value)
{
	IoHwAb_StatusType status;
	return IoHwAb_Set_Digital( signalId, value, &status );
}
