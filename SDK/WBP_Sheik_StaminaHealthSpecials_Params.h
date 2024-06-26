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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_Sheik_StaminaHealthSpecials.WBP_Sheik_StaminaHealthSpecials_C.SetForPlayer
	 */
	struct UWBP_Sheik_StaminaHealthSpecials_C_SetForPlayer_Params
	{
	public:
		class ASheikPlayerStateCommon*                             SheikPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Sheik_StaminaHealthSpecials.WBP_Sheik_StaminaHealthSpecials_C.PreConstruct
	 */
	struct UWBP_Sheik_StaminaHealthSpecials_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Sheik_StaminaHealthSpecials.WBP_Sheik_StaminaHealthSpecials_C.ExecuteUbergraph_WBP_Sheik_StaminaHealthSpecials
	 */
	struct UWBP_Sheik_StaminaHealthSpecials_C_ExecuteUbergraph_WBP_Sheik_StaminaHealthSpecials_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
