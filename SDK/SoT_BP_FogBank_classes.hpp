#pragma once

// SeaOfThieves (1.6.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FogBank.BP_FogBank_C
// 0x0008 (0x0580 - 0x0578)
class ABP_FogBank_C : public AFogBank
{
public:
	class UAthenaPlayerZonePenetrationTrackerComponent* AthenaPlayerZonePenetrationTracker;                       // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FogBank.BP_FogBank_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
