#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Sail.BP_Sail_C.Debug
struct ABP_Sail_C_Debug_Params
{
};

// Function BP_Sail.BP_Sail_C.Initialise
struct ABP_Sail_C_Initialise_Params
{
	bool                                               IsMainSail;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SailForceScalar;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Sail.BP_Sail_C.UserConstructionScript
struct ABP_Sail_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
