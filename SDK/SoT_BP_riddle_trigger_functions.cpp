// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_riddle_trigger.BP_riddle_trigger_C.Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_riddle_trigger_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_riddle_trigger.BP_riddle_trigger_C.Destroy");

	ABP_riddle_trigger_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_riddle_trigger.BP_riddle_trigger_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_riddle_trigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_riddle_trigger.BP_riddle_trigger_C.UserConstructionScript");

	ABP_riddle_trigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
