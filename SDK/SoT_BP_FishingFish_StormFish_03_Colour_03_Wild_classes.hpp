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

// BlueprintGeneratedClass BP_FishingFish_StormFish_03_Colour_03_Wild.BP_FishingFish_StormFish_03_Colour_03_Wild_C
// 0x0000 (0x08F0 - 0x08F0)
class ABP_FishingFish_StormFish_03_Colour_03_Wild_C : public ABP_FishingFish_StormFish_03_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FishingFish_StormFish_03_Colour_03_Wild.BP_FishingFish_StormFish_03_Colour_03_Wild_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif