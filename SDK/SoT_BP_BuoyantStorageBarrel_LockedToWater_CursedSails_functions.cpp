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

// Function BP_BuoyantStorageBarrel_LockedToWater_CursedSails.BP_BuoyantStorageBarrel_LockedToWater_CursedSails_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BuoyantStorageBarrel_LockedToWater_CursedSails_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuoyantStorageBarrel_LockedToWater_CursedSails.BP_BuoyantStorageBarrel_LockedToWater_CursedSails_C.UserConstructionScript");

	ABP_BuoyantStorageBarrel_LockedToWater_CursedSails_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
