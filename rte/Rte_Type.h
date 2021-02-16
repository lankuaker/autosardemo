/* Rte_Type.h */

#ifndef RTE_TYPE_H
#define RTE_TYPE_H

#include "Rte.h"

typedef void * Rte_Instance;

typedef boolean Boolean;

#define _DEFINED_TYPEDEF_FOR_Boolean_ 

typedef sint16 SInt16;
#define SInt16_LowerLimit -32768
#define SInt16_UpperLimit 32767

#define _DEFINED_TYPEDEF_FOR_SInt16_ 

typedef sint32 SInt32;
#define SInt32_LowerLimit -2147483648
#define SInt32_UpperLimit 2147483647

#define _DEFINED_TYPEDEF_FOR_SInt32_ 

typedef sint8 SInt8;
#define SInt8_LowerLimit -128
#define SInt8_UpperLimit 127

#define _DEFINED_TYPEDEF_FOR_SInt8_ 


typedef uint16 UInt16;
#define UInt16_LowerLimit 0
#define UInt16_UpperLimit 65535

#define _DEFINED_TYPEDEF_FOR_UInt16_ 

typedef uint32 UInt32;
#define UInt32_LowerLimit 0
#define UInt32_UpperLimit 4294967295

#define _DEFINED_TYPEDEF_FOR_UInt32_ 

typedef uint8 UInt8;
#define UInt8_LowerLimit 0
#define UInt8_UpperLimit 255

#define _DEFINED_TYPEDEF_FOR_UInt8_ 

typedef uint16 IoHwAb_SignalType;
#define IoHwAb_SignalType_LowerLimit 0
#define IoHwAb_SignalType_UpperLimit 65535

#define _DEFINED_TYPEDEF_FOR_IoHwAb_SignalType_ 

#endif