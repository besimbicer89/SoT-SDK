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

// Function BP_Constellation.BP_Constellation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Constellation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Constellation.BP_Constellation_C.UserConstructionScript");

	ABP_Constellation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Constellation.BP_Constellation_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Constellation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Constellation.BP_Constellation_C.ReceiveBeginPlay");

	ABP_Constellation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Constellation.BP_Constellation_C.ExecuteUbergraph_BP_Constellation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Constellation_C::ExecuteUbergraph_BP_Constellation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Constellation.BP_Constellation_C.ExecuteUbergraph_BP_Constellation");

	ABP_Constellation_C_ExecuteUbergraph_BP_Constellation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
