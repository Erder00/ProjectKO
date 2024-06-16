﻿#pragma once

/**
 * Name: Rumbleverse
 * Version: Latest
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass SnowBall_Large.SnowBall_Large_C
	 * Size -> 0x0008 (FullSize[0x0780] - InheritedSize[0x0778])
	 */
	class ASnowBall_Large_C : public ABP_WeaponBase_Parent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0778(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnMaxDurabilityReached();
		void ExecuteUbergraph_SnowBall_Large(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
