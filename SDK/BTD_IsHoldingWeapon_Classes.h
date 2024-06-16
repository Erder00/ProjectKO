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
	 * BlueprintGeneratedClass BTD_IsHoldingWeapon.BTD_IsHoldingWeapon_C
	 * Size -> 0x0001 (FullSize[0x00A1] - InheritedSize[0x00A0])
	 */
	class UBTD_IsHoldingWeapon_C : public UBTDecorator_BlueprintBase
	{
	public:
		bool                                                       IncludeBoxesAsWeapons;                                   // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
