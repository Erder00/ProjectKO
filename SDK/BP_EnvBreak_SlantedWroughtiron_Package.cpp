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
	 * 		Name   -> PredefinedFunction ABP_EnvBreak_SlantedWroughtiron_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EnvBreak_SlantedWroughtiron_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnvBreak_SlantedWroughtiron.BP_EnvBreak_SlantedWroughtiron_C");
		return ptr;
	}

}


