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

// BlueprintGeneratedClass BP_VotableVoyageProposal.BP_VotableVoyageProposal_C
// 0x0050 (0x0570 - 0x0520)
class ABP_VotableVoyageProposal_C : public AVotableObjectView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Token_1;                                                  // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Token_4;                                                  // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Token_3;                                                  // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Token_2;                                                  // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                Tokens;                                                   // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 Token_Asset;                                              // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VoteCount;                                                // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Show_Token_Animation_Time;                                // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Token_Material;                                           // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VotableVoyageProposal.BP_VotableVoyageProposal_C");
		return ptr;
	}


	void PlayShowTokenAnimation(class UPrimitiveComponent* Token);
	void Is_Session_Locked(bool* IsLocked);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnVoteAdded(TScriptInterface<class UVoterInterface>* Voter);
	void OnVoteRemoved(TScriptInterface<class UVoterInterface>* Voter);
	void ExecuteUbergraph_BP_VotableVoyageProposal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
