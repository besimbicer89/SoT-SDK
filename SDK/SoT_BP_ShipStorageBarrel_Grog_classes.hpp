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

// BlueprintGeneratedClass BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C
// 0x0018 (0x0450 - 0x0438)
class ABP_ShipStorageBarrel_Grog_C : public AInteractableBase
{
public:
	class UTankardRefillerComponent*                   TankardRefiller;                                          // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C");
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius);
	bool ShouldDrawTooltipInWorldSpace(class AActor** InInteractor, struct FVector* DesiredTooltipWorldPosition);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
