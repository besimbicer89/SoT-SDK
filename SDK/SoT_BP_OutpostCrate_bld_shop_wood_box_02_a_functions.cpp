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

// Function BP_OutpostCrate_bld_shop_wood_box_02_a.BP_OutpostCrate_bld_shop_wood_box_02_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OutpostCrate_bld_shop_wood_box_02_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OutpostCrate_bld_shop_wood_box_02_a.BP_OutpostCrate_bld_shop_wood_box_02_a_C.UserConstructionScript");

	ABP_OutpostCrate_bld_shop_wood_box_02_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
