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
	 * 		Name   -> Function BTT_RotateToFaceTeamLeader.BTT_RotateToFaceTeamLeader_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_RotateToFaceTeamLeader_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_RotateToFaceTeamLeader.BTT_RotateToFaceTeamLeader_C.ReceiveExecuteAI");
		
		UBTT_RotateToFaceTeamLeader_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_RotateToFaceTeamLeader.BTT_RotateToFaceTeamLeader_C.ReceiveTickAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_RotateToFaceTeamLeader_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_RotateToFaceTeamLeader.BTT_RotateToFaceTeamLeader_C.ReceiveTickAI");
		
		UBTT_RotateToFaceTeamLeader_C_ReceiveTickAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_RotateToFaceTeamLeader.BTT_RotateToFaceTeamLeader_C.ExecuteUbergraph_BTT_RotateToFaceTeamLeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_RotateToFaceTeamLeader_C::ExecuteUbergraph_BTT_RotateToFaceTeamLeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_RotateToFaceTeamLeader.BTT_RotateToFaceTeamLeader_C.ExecuteUbergraph_BTT_RotateToFaceTeamLeader");
		
		UBTT_RotateToFaceTeamLeader_C_ExecuteUbergraph_BTT_RotateToFaceTeamLeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_RotateToFaceTeamLeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_RotateToFaceTeamLeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_RotateToFaceTeamLeader.BTT_RotateToFaceTeamLeader_C");
		return ptr;
	}

}


