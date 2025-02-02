#pragma once

// What addresses to use?
#define KZ_105_STEAM

// Please please please, keep address format like this:
// #define Something_Addr (0xSOMETHINGu)

#ifdef KZ_105_STEAM /* Katana Zero v1.0.5 Windows Steam */
#define RFunctionTable_Addr    (0x01CFCB54u)
#define RFunctionTableL_Addr   (0x01CFCB58u)
#define FREE_RValue__Pre_Addr  (0x00001070u)
#define YYSetString_Addr       (0x014DB840u)
#define YYCreateString_Addr    (0x014DAE30u)
#define YYStrDup_Addr          (0x014DB8C0u)
#define YYFree_Addr            (0x0151FFA0u)
#define ARRAY_LVAL_RV_Addr     (0x014DBF50u)
#define Variable_Addr          (0x01A37CF8u)
#define GMLScript_Addr         (0x01A3C6F4u)
#define Run_Room_Addr          (0x01CF88D8u)
#define CInstanceHash_Addr     (0x01A49AF8u)
#define Global_YYObject_Addr   (0x01ADE1D8u)
#define Object_Hash_Addr       (0x01AE769Cu)
#define GetCtxStackTop_Addr    (0x014D5A80u)
#define DeterminePotRoot_Addr  (0x014BF440u)
#define GetEvRecursive_Addr    (0x01522300u)
#define InsertEvent_Addr       (0x015224A0u)
#define YYSTraceStart_Addr     (0x01AD8B90u)
#define BuiltinVars_Addr       (0x01ADE300u)
#define YYError_Addr           (0x014DB040u)
#define ConstNumb_Addr         (0x01D09634u)
#define ConstNames_Addr        (0x01D0962Cu)
#define ConstValues_Addr       (0x01D09630u)
#define AllocNewVarSlot_Addr   (0x01525840u)
#define MenuVersionString_Addr (0x01233C16u)
#define DispatchAsync_Addr     (0x00000000u)
#define New_Room_Addr          (0x01CF8904u)
#define SET_RValue_Addr		   (0x014ddb20u)
#define CreateArray_Addr	   (0x01504d80u)
#endif

#ifdef KZ_105_GOG /* Katana ZERO v1.0.5 Windows GOG */
#define RFunctionTable_Addr    (0x01CFBAE4u)
#define RFunctionTableL_Addr   (0x01CFBAE8u)
#define FREE_RValue__Pre_Addr  (0x00001070u)
#define YYSetString_Addr       (0x014DA4C0u)
#define YYCreateString_Addr    (0x014D98B0u)
#define YYStrDup_Addr          (0x014DA540u)
#define YYFree_Addr            (0x0151EC20u)
#define ARRAY_LVAL_RV_Addr     (0x014DABD0u)
#define Variable_Addr          (0x01A36CC0u)
#define GMLScript_Addr         (0x01A3B680u)
#define Run_Room_Addr          (0x01CF7868u)
#define CInstanceHash_Addr     (0x01A48A88u)
#define Global_YYObject_Addr   (0x01ADD168u)
#define Object_Hash_Addr       (0x01AE662Cu)
#define GetCtxStackTop_Addr    (0x014D4700u)
#define DeterminePotRoot_Addr  (0x014BE0B0u)
#define GetEvRecursive_Addr    (0x01520F80u)
#define InsertEvent_Addr       (0x01521120u)
#define YYSTraceStart_Addr     (0x01AD7B20u)
#define BuiltinVars_Addr       (0x01ADD290u)
#define YYError_Addr           (0x014D9CC0u)
#define ConstNumb_Addr         (0x01D085C4u)
#define ConstNames_Addr        (0x01D085BCu)
#define ConstValues_Addr       (0x01D085C0u)
#define AllocNewVarSlot_Addr   (0x015244C0u)
#define MenuVersionString_Addr (0x01232846u)
#define DispatchAsync_Addr     (0x00000000u)
#define New_Room_Addr          (0x01CF7894u)
#endif
