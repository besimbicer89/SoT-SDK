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

// Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStarted
struct UBP_Anim_Concertina_C_OnUseStarted_Params
{
	class UClass**                                     InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWieldableItemActionVisuals*                ActionVisuals;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Anim_Concertina.BP_Anim_Concertina_C.OnUseStopped
struct UBP_Anim_Concertina_C_OnUseStopped_Params
{
	class UClass**                                     InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Anim_Concertina.BP_Anim_Concertina_C.ExecuteUbergraph_BP_Anim_Concertina
struct UBP_Anim_Concertina_C_ExecuteUbergraph_BP_Anim_Concertina_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
