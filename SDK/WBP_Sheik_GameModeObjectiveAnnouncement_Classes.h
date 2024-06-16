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
	 * WidgetBlueprintGeneratedClass WBP_Sheik_GameModeObjectiveAnnouncement.WBP_Sheik_GameModeObjectiveAnnouncement_C
	 * Size -> 0x0018 (FullSize[0x0680] - InheritedSize[0x0668])
	 */
	class UWBP_Sheik_GameModeObjectiveAnnouncement_C : public USheikAnnouncementWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    PlayAnim;                                                // 0x0670(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          GameModeObjectiveText;                                   // 0x0678(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void ConstructOnlyOnce();
		void StartAnnouncement_BP(const struct FSheikAnnouncement& SheikAnnouncementData);
		void CloseAnnouncement_BP();
		void SetSpeedFactor_BP(float NewSpeedFactor);
		void HandleAnimationFinished();
		void ExecuteUbergraph_WBP_Sheik_GameModeObjectiveAnnouncement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
