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

// BlueprintGeneratedClass BP_DarkRelic_Proxy_HexingSkull.BP_DarkRelic_Proxy_HexingSkull_C
// 0x0000 (0x07F0 - 0x07F0)
class ABP_DarkRelic_Proxy_HexingSkull_C : public ABP_BountyRewardSkull_Proxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DarkRelic_Proxy_HexingSkull.BP_DarkRelic_Proxy_HexingSkull_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
