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

// BlueprintGeneratedClass tls_wld_Orb_light_D.tls_wld_Orb_light_D_C
// 0x0008 (0x0428 - 0x0420)
class Atls_wld_Orb_light_D_C : public AStaticMeshActor
{
public:
	class UPointLightComponent*                        PointLight;                                               // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass tls_wld_Orb_light_D.tls_wld_Orb_light_D_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
