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

// BlueprintGeneratedClass BP_FirePropagationActor_SmallShip.BP_FirePropagationActor_SmallShip_C
// 0x0010 (0x0420 - 0x0410)
class ABP_FirePropagationActor_SmallShip_C : public AActor
{
public:
	class UShipFirePropagationComponent*               ShipFirePropagation;                                      // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FirePropagationActor_SmallShip.BP_FirePropagationActor_SmallShip_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
