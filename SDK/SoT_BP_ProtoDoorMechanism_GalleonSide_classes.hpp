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

// BlueprintGeneratedClass BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C
// 0x0041 (0x06B9 - 0x0678)
class ABP_ProtoDoorMechanism_GalleonSide_C : public ADoorMechanism
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             OpenJumpToLocation;                                       // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             ClosedJumpToLocation;                                     // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             OpenKnockbackDirection;                                   // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             ClosedKnockbackDirection;                                 // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        InteractionPoint;                                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               OpenVolume;                                               // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               ClosedVolume;                                             // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableJumpToLocation;                                     // 0x06B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Blueprint_OnStarted();
	void Blueprint_OnStopped();
	void BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
