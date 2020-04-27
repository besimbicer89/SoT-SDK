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

// BlueprintGeneratedClass BP_CapstanRelease.BP_CapstanRelease_C
// 0x0008 (0x0500 - 0x04F8)
class ABP_CapstanRelease_C : public ACapstanRelease
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CapstanRelease.BP_CapstanRelease_C");
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
