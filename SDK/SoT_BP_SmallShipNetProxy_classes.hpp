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

// BlueprintGeneratedClass BP_SmallShipNetProxy.BP_SmallShipNetProxy_C
// 0x0020 (0x04C0 - 0x04A0)
class ABP_SmallShipNetProxy_C : public AShipNetProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        EmissaryFlags;                                            // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Materials;                                        // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShipNetProxy.BP_SmallShipNetProxy_C");
		return ptr;
	}


	void Set_Colour_on_All_Materials(const struct FName& ParameterName, const struct FLinearColor& Value);
	void Set_Value_on_All_Materials(const struct FName& Variable_Name, float Value);
	void Apply_Bits_to_Lanterns(int Bits);
	void Create_Dynamic_Materials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLanternStateChanged(int* LanternStateBits);
	void OnEmissaryActiveStateChanged(bool* InNewEmissaryActiveState);
	void ExecuteUbergraph_BP_SmallShipNetProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
