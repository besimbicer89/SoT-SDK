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

// BlueprintGeneratedClass BP_LargeShipLadder.BP_LargeShipLadder_C
// 0x0028 (0x0628 - 0x0600)
class ABP_LargeShipLadder_C : public ALadder
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OffTopSplineComponentPositions;                           // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             OnTopSplineComponentPositions;                            // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeShipLadder.BP_LargeShipLadder_C");
		return ptr;
	}


	struct FDockableInfo GetDockableInfo();
	void Setup_Spline(class USplineComponent* Spline, TArray<struct FVector>* Positions);
	bool CanInteract(class AActor** InInteractor);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
