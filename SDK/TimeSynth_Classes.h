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
	 * Class TimeSynth.TimeSynthVolumeGroup
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UTimeSynthVolumeGroup : public UObject
	{
	public:
		float                                                      DefaultVolume;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8EIB[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TimeSynth.TimeSynthClip
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UTimeSynthClip : public UObject
	{
	public:
		TArray<struct FTimeSynthClipSound>                         Sounds;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           VolumeScaleDb;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           PitchScaleSemitones;                                     // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimeSynthTimeDef                                   FadeInTime;                                              // 0x0048(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bApplyFadeOut;                                           // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3TYI[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimeSynthTimeDef                                   FadeOutTime;                                             // 0x0054(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTimeSynthTimeDef                                   ClipDuration;                                            // 0x005C(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		ETimeSynthEventClipQuantization                            ClipQuantization;                                        // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NAG[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TimeSynth.TimeSynthComponent
	 * Size -> 0x0A50 (FullSize[0x1120] - InheritedSize[0x06D0])
	 */
	class UTimeSynthComponent : public USynthComponent
	{
	public:
		struct FTimeSynthQuantizationSettings                      QuantizationSettings;                                    // 0x06D0(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableSpectralAnalysis : 1;                             // 0x06E4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBWP[0x3];                                   // 0x06E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FrequenciesToAnalyze;                                    // 0x06E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ETimeSynthFFTSize                                          FFTSize;                                                 // 0x06F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_152I[0x7];                                   // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlaybackTime;                                          // 0x0700(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bIsFilterAEnabled : 1;                                   // 0x0710(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFilterBEnabled : 1;                                   // 0x0710(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5RX[0x3];                                   // 0x0711(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimeSynthFilterSettings                            FilterASettings;                                         // 0x0714(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FTimeSynthFilterSettings                            FilterBSettings;                                         // 0x0720(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsEnvelopeFollowerEnabled : 1;                          // 0x072C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O2QC[0x3];                                   // 0x072D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimeSynthEnvelopeFollowerSettings                  EnvelopeFollowerSettings;                                // 0x0730(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxPoolSize;                                             // 0x073C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VN9K[0x9E0];                                 // 0x0740(0x09E0) MISSED OFFSET (PADDING)

	public:
		void StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime);
		void StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization);
		void StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime);
		void StopClip(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization);
		void SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);
		void SetSeed(int32_t InSeed);
		void SetQuantizationSettings(const struct FTimeSynthQuantizationSettings& InQuantizationSettings);
		void SetFilterSettings(ETimeSynthFilter Filter, const struct FTimeSynthFilterSettings& InSettings);
		void SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled);
		void SetFFTSize(ETimeSynthFFTSize InFFTSize);
		void SetEnvelopeFollowerSettings(const struct FTimeSynthEnvelopeFollowerSettings& InSettings);
		void SetEnvelopeFollowerEnabled(bool bInIsEnabled);
		void SetBPM(float BeatsPerMinute);
		void ResetSeed();
		struct FTimeSynthClipHandle PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup);
		bool HasActiveClips();
		TArray<struct FTimeSynthSpectralData> GetSpectralData();
		int32_t GetMaxActiveClipLimit();
		float GetEnvelopeFollowerValue();
		int32_t GetBPM();
		void AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, const class FScriptDelegate& OnQuantizationEvent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
