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

// Class AthenaDebug.DrawDebugServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UDrawDebugServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.DrawDebugServiceInterface");
		return ptr;
	}

};


// Class AthenaDebug.DrawDebugService
// 0x0078 (0x0488 - 0x0410)
class ADrawDebugService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	TArray<struct FDrawDebugItemMessage>               MessagesReplicated;                                       // 0x0418(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemSphere>                SpheresReplicated;                                        // 0x0428(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemBox>                   BoxesReplicated;                                          // 0x0438(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemCapsule>               CapsulesReplicated;                                       // 0x0448(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemLine>                  LinesReplicated;                                          // 0x0458(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemSector>                SectorsReplicated;                                        // 0x0468(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemString>                StringsReplicated;                                        // 0x0478(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.DrawDebugService");
		return ptr;
	}


	void OnRep_PersistentShapeChanged();
	void Multicast_ClearGroup(const struct FName& GroupName);
	void Multicast_AddStrings(TArray<struct FDrawDebugItemString> Strings);
	void Multicast_AddSpheres(TArray<struct FDrawDebugItemSphere> Spheres);
	void Multicast_AddSectors(TArray<struct FDrawDebugItemSector> Sectors);
	void Multicast_AddLines(TArray<struct FDrawDebugItemLine> Lines);
	void Multicast_AddCapsules(TArray<struct FDrawDebugItemCapsule> Capsules);
	void Multicast_AddBoxes(TArray<struct FDrawDebugItemBox> Boxes);
};


// Class AthenaDebug.TickableDebugDrawingServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UTickableDebugDrawingServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.TickableDebugDrawingServiceInterface");
		return ptr;
	}

};


// Class AthenaDebug.Videprinter
// 0x0028 (0x0438 - 0x0410)
class AVideprinter : public AActor
{
public:
	TArray<struct FString>                             OutputRingBuffer;                                         // 0x0410(0x0010) (Net, ZeroConstructor)
	int                                                AddAt;                                                    // 0x0420(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       Id;                                                       // 0x0424(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x042C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.Videprinter");
		return ptr;
	}

};


// Class AthenaDebug.VideprinterServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UVideprinterServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.VideprinterServiceInterface");
		return ptr;
	}

};


// Class AthenaDebug.VideprinterService
// 0x0018 (0x0040 - 0x0028)
class UVideprinterService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<class AVideprinter*>                        Videprinters;                                             // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaDebug.VideprinterService");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
