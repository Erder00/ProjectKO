﻿/**
 * Name: Rumbleverse
 * Version: Latest
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.BuoyancyComponent.OnPontoonExitedWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSphericalPontoon                           Pontoon                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBuoyancyComponent::OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.OnPontoonExitedWater");
		
		UBuoyancyComponent_OnPontoonExitedWater_Params params {};
		params.Pontoon = Pontoon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.BuoyancyComponent.OnPontoonEnteredWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSphericalPontoon                           Pontoon                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBuoyancyComponent::OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.OnPontoonEnteredWater");
		
		UBuoyancyComponent_OnPontoonEnteredWater_Params params {};
		params.Pontoon = Pontoon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.BuoyancyComponent.IsInWaterBody
	 * 		Flags  -> ()
	 */
	bool UBuoyancyComponent::IsInWaterBody()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.IsInWaterBody");
		
		UBuoyancyComponent_IsInWaterBody_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OutWaterPlaneLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutWaterPlaneNormal                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutWaterSurfacePosition                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutWaterDepth                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutWaterBodyIdx                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutWaterVelocity                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBuoyancyComponent::GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int32_t* OutWaterBodyIdx, struct FVector* OutWaterVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo");
		
		UBuoyancyComponent_GetLastWaterSurfaceInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWaterPlaneLocation != nullptr)
			*OutWaterPlaneLocation = params.OutWaterPlaneLocation;
		if (OutWaterPlaneNormal != nullptr)
			*OutWaterPlaneNormal = params.OutWaterPlaneNormal;
		if (OutWaterSurfacePosition != nullptr)
			*OutWaterSurfacePosition = params.OutWaterSurfacePosition;
		if (OutWaterDepth != nullptr)
			*OutWaterDepth = params.OutWaterDepth;
		if (OutWaterBodyIdx != nullptr)
			*OutWaterBodyIdx = params.OutWaterBodyIdx;
		if (OutWaterVelocity != nullptr)
			*OutWaterVelocity = params.OutWaterVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuoyancyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuoyancyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.BuoyancyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.BuoyancyManager.GetBuoyancyComponentManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ABuoyancyManager*                            Manager                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ABuoyancyManager::GetBuoyancyComponentManager(class UObject* WorldContextObject, class ABuoyancyManager** Manager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.BuoyancyManager.GetBuoyancyComponentManager");
		
		ABuoyancyManager_GetBuoyancyComponentManager_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Manager != nullptr)
			*Manager = params.Manager;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuoyancyManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuoyancyManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.BuoyancyManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConvertWaterBodyActorsCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConvertWaterBodyActorsCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.ConvertWaterBodyActorsCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_InsideWaterBody.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_InsideWaterBody::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.EnvQueryTest_InsideWaterBody");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGerstnerWave>                       OutWaves                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGerstnerWaterWaveGeneratorBase::GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves");
		
		UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWaves != nullptr)
			*OutWaves = params.OutWaves;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGerstnerWaterWaveGeneratorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGerstnerWaterWaveGeneratorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.GerstnerWaterWaveGeneratorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGerstnerWaterWaveGeneratorSimple.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGerstnerWaterWaveGeneratorSimple::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.GerstnerWaterWaveGeneratorSimple");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGerstnerWaterWaveGeneratorSpectrum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGerstnerWaterWaveGeneratorSpectrum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.GerstnerWaterWaveGeneratorSpectrum");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterWavesBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterWavesBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterWavesBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterWaves.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterWaves::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterWaves");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGerstnerWaterWaves.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGerstnerWaterWaves::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.GerstnerWaterWaves");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGerstnerWaterWaveSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGerstnerWaterWaveSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.GerstnerWaterWaveSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULakeCollisionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULakeCollisionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.LakeCollisionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraDataInterfaceWater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraDataInterfaceWater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.NiagaraDataInterfaceWater");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.NiagaraWaterFunctionLibrary.SetWaterBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraComponent*                           NiagaraSystem                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OverrideName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AWaterBody*                                  WaterBody                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraWaterFunctionLibrary::SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.NiagaraWaterFunctionLibrary.SetWaterBody");
		
		UNiagaraWaterFunctionLibrary_SetWaterBody_Params params {};
		params.NiagaraSystem = NiagaraSystem;
		params.OverrideName = OverrideName;
		params.WaterBody = WaterBody;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraWaterFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraWaterFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.NiagaraWaterFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOceanCollisionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOceanCollisionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.OceanCollisionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOceanBoxCollisionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOceanBoxCollisionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.OceanBoxCollisionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterBody.SetWaterWaves
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWaterWavesBase*                             InWaterWaves                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWaterBody::SetWaterWaves(class UWaterWavesBase* InWaterWaves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.SetWaterWaves");
		
		AWaterBody_SetWaterWaves_Params params {};
		params.InWaterWaves = InWaterWaves;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterBody.OnWaterBodyChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShapeOrPositionChanged                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWeightmapSettingsChanged                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWaterBody::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.OnWaterBodyChanged");
		
		AWaterBody_OnWaterBodyChanged_Params params {};
		params.bShapeOrPositionChanged = bShapeOrPositionChanged;
		params.bWeightmapSettingsChanged = bWeightmapSettingsChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterBody.GetWaterSpline
	 * 		Flags  -> ()
	 */
	class UWaterSplineComponent* AWaterBody::GetWaterSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterSpline");
		
		AWaterBody_GetWaterSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterBody.GetWaterMaterialInstance
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* AWaterBody::GetWaterMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterMaterialInstance");
		
		AWaterBody_GetWaterMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterBody.GetWaterMaterial
	 * 		Flags  -> ()
	 */
	class UMaterialInterface* AWaterBody::GetWaterMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetWaterMaterial");
		
		AWaterBody_GetWaterMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* AWaterBody::GetUnderwaterPostProcessMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance");
		
		AWaterBody_GetUnderwaterPostProcessMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* AWaterBody::GetRiverToOceanTransitionMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance");
		
		AWaterBody_GetRiverToOceanTransitionMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* AWaterBody::GetRiverToLakeTransitionMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance");
		
		AWaterBody_GetRiverToLakeTransitionMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterBody.GetMaxWaveHeight
	 * 		Flags  -> ()
	 */
	float AWaterBody::GetMaxWaveHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetMaxWaveHeight");
		
		AWaterBody_GetMaxWaveHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterBody.GetIslands
	 * 		Flags  -> ()
	 */
	TArray<class AWaterBodyIsland*> AWaterBody::GetIslands()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetIslands");
		
		AWaterBody_GetIslands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterBody.GetExclusionVolumes
	 * 		Flags  -> ()
	 */
	TArray<class AWaterBodyExclusionVolume*> AWaterBody::GetExclusionVolumes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBody.GetExclusionVolumes");
		
		AWaterBody_GetExclusionVolumes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBody.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBody::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBody");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterBodyGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterBodyGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMeshGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMeshGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.CustomMeshGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBodyCustom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBodyCustom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyCustom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBodyExclusionVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBodyExclusionVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyExclusionVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterBodyIsland.GetWaterSpline
	 * 		Flags  -> ()
	 */
	class UWaterSplineComponent* AWaterBodyIsland::GetWaterSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterBodyIsland.GetWaterSpline");
		
		AWaterBodyIsland_GetWaterSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBodyIsland.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBodyIsland::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyIsland");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULakeGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULakeGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.LakeGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBodyLake.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBodyLake::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyLake");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOceanGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOceanGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.OceanGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBodyOcean.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBodyOcean::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyOcean");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URiverGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URiverGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.RiverGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterBodyRiver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterBodyRiver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyRiver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterBrushActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterBrushActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterBrushActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterMeshComponent.IsEnabled
	 * 		Flags  -> ()
	 */
	bool UWaterMeshComponent::IsEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterMeshComponent.IsEnabled");
		
		UWaterMeshComponent_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterRuntimeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterRuntimeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterRuntimeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSplineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSplineComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterSplineComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSplineMetadata.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSplineMetadata::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterSplineMetadata");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.SetOceanFloodHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFloodHeight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWaterSubsystem::SetOceanFloodHeight(float InFloodHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.SetOceanFloodHeight");
		
		UWaterSubsystem_SetOceanFloodHeight_Params params {};
		params.InFloodHeight = InFloodHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.PrintToWaterLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWarning                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWaterSubsystem::PrintToWaterLog(const class FString& Message, bool bWarning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.PrintToWaterLog");
		
		UWaterSubsystem_PrintToWaterLog_Params params {};
		params.Message = Message;
		params.bWarning = bWarning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.IsWaterRenderingEnabled
	 * 		Flags  -> ()
	 */
	bool UWaterSubsystem::IsWaterRenderingEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsWaterRenderingEnabled");
		
		UWaterSubsystem_IsWaterRenderingEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
	 * 		Flags  -> ()
	 */
	bool UWaterSubsystem::IsUnderwaterPostProcessEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled");
		
		UWaterSubsystem_IsUnderwaterPostProcessEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled
	 * 		Flags  -> ()
	 */
	bool UWaterSubsystem::IsShallowWaterSimulationEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled");
		
		UWaterSubsystem_IsShallowWaterSimulationEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.GetWaterTimeSeconds
	 * 		Flags  -> ()
	 */
	float UWaterSubsystem::GetWaterTimeSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetWaterTimeSeconds");
		
		UWaterSubsystem_GetWaterTimeSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
	 * 		Flags  -> ()
	 */
	float UWaterSubsystem::GetSmoothedWorldTimeSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds");
		
		UWaterSubsystem_GetSmoothedWorldTimeSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
	 * 		Flags  -> ()
	 */
	int32_t UWaterSubsystem::GetShallowWaterSimulationRenderTargetSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize");
		
		UWaterSubsystem_GetShallowWaterSimulationRenderTargetSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
	 * 		Flags  -> ()
	 */
	int32_t UWaterSubsystem::GetShallowWaterMaxImpulseForces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces");
		
		UWaterSubsystem_GetShallowWaterMaxImpulseForces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
	 * 		Flags  -> ()
	 */
	int32_t UWaterSubsystem::GetShallowWaterMaxDynamicForces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces");
		
		UWaterSubsystem_GetShallowWaterMaxDynamicForces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.GetOceanTotalHeight
	 * 		Flags  -> ()
	 */
	float UWaterSubsystem::GetOceanTotalHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanTotalHeight");
		
		UWaterSubsystem_GetOceanTotalHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.GetOceanFloodHeight
	 * 		Flags  -> ()
	 */
	float UWaterSubsystem::GetOceanFloodHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanFloodHeight");
		
		UWaterSubsystem_GetOceanFloodHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.GetOceanBaseHeight
	 * 		Flags  -> ()
	 */
	float UWaterSubsystem::GetOceanBaseHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetOceanBaseHeight");
		
		UWaterSubsystem_GetOceanBaseHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Water.WaterSubsystem.GetCameraUnderwaterDepth
	 * 		Flags  -> ()
	 */
	float UWaterSubsystem::GetCameraUnderwaterDepth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Water.WaterSubsystem.GetCameraUnderwaterDepth");
		
		UWaterSubsystem_GetCameraUnderwaterDepth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterWavesAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterWavesAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterWavesAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWaterWavesAssetReference.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWaterWavesAssetReference::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Water.WaterWavesAssetReference");
		return ptr;
	}

}


