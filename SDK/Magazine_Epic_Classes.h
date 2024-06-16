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
	 * BlueprintGeneratedClass Magazine_Epic.Magazine_Epic_C
	 * Size -> 0x0038 (FullSize[0x06F8] - InheritedSize[0x06C0])
	 */
	class AMagazine_Epic_C : public ASheikSpecialMoveConsumable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_ProjectileFXComponent_C*                         BP_ProjectileFXComponent;                                // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Projectile_SFX_Oscillator_Timeline_Pitch_Multiplier_44BF9CB94273B6186D659E848245C40F; // 0x06D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Projectile_SFX_Oscillator_Timeline_Volume_Multiplier_44BF9CB94273B6186D659E848245C40F; // 0x06D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Projectile_SFX_Oscillator_Timeline__Direction_44BF9CB94273B6186D659E848245C40F; // 0x06D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WJU3[0x7];                                   // 0x06D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ProjectileSFXOscillatorTimeline;                         // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleReference;                                       // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioReference;                                          // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ProjectileSFXOscillatorTimeline__FinishedFunc();
		void ProjectileSFXOscillatorTimeline__UpdateFunc();
		void OnActivateProjectile();
		void OnDeactivateProjectile();
		void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
		void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
		void ExecuteUbergraph_Magazine_Epic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
