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
	 * Class OnlineSubsystemUtils.OnlineBeacon
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class AOnlineBeacon : public AActor
	{
	public:
		unsigned char                                              UnknownData_X5BK[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeaconConnectionInitialTimeout;                          // 0x0228(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BeaconConnectionTimeout;                                 // 0x022C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNetDriver*                                          NetDriver;                                               // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9X52[0x18];                                  // 0x0238(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconClient
	 * Size -> 0x0060 (FullSize[0x02B0] - InheritedSize[0x0250])
	 */
	class AOnlineBeaconClient : public AOnlineBeacon
	{
	public:
		class AOnlineBeaconHostObject*                             BeaconOwner;                                             // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNetConnection*                                      BeaconConnection;                                        // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBeaconConnectionState                                     ConnectionState;                                         // 0x0260(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XFJ0[0x4F];                                  // 0x0261(0x004F) MISSED OFFSET (PADDING)

	public:
		void ClientOnConnected();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconHostObject
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class AOnlineBeaconHostObject : public AActor
	{
	public:
		class FString                                              BeaconTypeName;                                          // 0x0220(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ClientBeaconActorClass;                                  // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AOnlineBeaconClient*>                         ClientActors;                                            // 0x0238(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementId, bool* bFoundID, float* Progress);
		void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementId, bool* bFoundID, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bHidden);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ANT[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
		class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40EO[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)

	public:
		class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementName, float Progress, int32_t UserTag);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.ConnectionCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0Z5Z[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.CreateSessionCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVKX[0x48];                                  // 0x0050(0x0048) MISSED OFFSET (PADDING)

	public:
		class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.DestroySessionCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UX77[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.EndMatchCallbackProxy
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2PN6[0x30];                                  // 0x0050(0x0030) MISSED OFFSET (PADDING)

	public:
		class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, EMPMatchOutcome LocalPlayerOutcome, EMPMatchOutcome OtherPlayersOutcome);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.EndTurnCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AMC2[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.FindSessionsCallbackProxy
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GV5X[0x40];                                  // 0x0050(0x0040) MISSED OFFSET (PADDING)

	public:
		class FString GetServerName(const struct FBlueprintSessionResult& Result);
		int32_t GetPingInMs(const struct FBlueprintSessionResult& Result);
		int32_t GetMaxPlayers(const struct FBlueprintSessionResult& Result);
		int32_t GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
		class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_38TP[0x38];                                  // 0x0050(0x0038) MISSED OFFSET (PADDING)

	public:
		class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFFX[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseCallbackProxy2 : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UV17[0x60];                                  // 0x0048(0x0060) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController);
		class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController);
		class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest2& ProductRequest);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseQueryCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ERGS[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseQueryCallbackProxy2 : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RN61[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseRestoreCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDRN[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
	 * Size -> 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseRestoreCallbackProxy2 : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PP3[0x60];                                  // 0x0048(0x0060) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.IpConnection
	 * Size -> 0x00A0 (FullSize[0x1C48] - InheritedSize[0x1BA8])
	 */
	class UIpConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_9T1I[0x50];                                  // 0x1BA8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SocketErrorDisconnectDelay;                              // 0x1BF8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HXM2[0x4C];                                  // 0x1BFC(0x004C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.IpNetDriver
	 * Size -> 0x0070 (FullSize[0x07D0] - InheritedSize[0x0760])
	 */
	class UIpNetDriver : public UNetDriver
	{
	public:
		bool                                                       LogPortUnreach : 1;                                      // 0x0760(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowPlayerPortUnreach : 1;                              // 0x0760(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6DIR[0x3];                                   // 0x0761(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaxPortCountToTry;                                       // 0x0764(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOCU[0xC];                                   // 0x0768(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ServerDesiredSocketReceiveBufferBytes;                   // 0x0774(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ServerDesiredSocketSendBufferBytes;                      // 0x0778(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ClientDesiredSocketReceiveBufferBytes;                   // 0x077C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ClientDesiredSocketSendBufferBytes;                      // 0x0780(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FP6N[0x4];                                   // 0x0784(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxSecondsInReceive;                                     // 0x0788(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NbPacketsBetweenReceiveTimeTest;                         // 0x0790(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ResolutionConnectionTimeout;                             // 0x0794(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P2MY[0x38];                                  // 0x0798(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.JoinSessionCallbackProxy
	 * Size -> 0x0158 (FullSize[0x0188] - InheritedSize[0x0030])
	 */
	class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DNT[0x138];                                 // 0x0050(0x0138) MISSED OFFSET (PADDING)

	public:
		class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool WriteLeaderboardInteger(class APlayerController* PlayerController, const class FName& StatName, int32_t StatValue);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class ULeaderboardFlushCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CAVU[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, const class FName& SessionName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class ULeaderboardQueryCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9D9Y[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const class FName& StatName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LogoutCallbackProxy
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGDF[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconHost
	 * Size -> 0x00B8 (FullSize[0x0308] - InheritedSize[0x0250])
	 */
	class AOnlineBeaconHost : public AOnlineBeacon
	{
	public:
		int32_t                                                    ListenPort;                                              // 0x0250(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVR7[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AOnlineBeaconClient*>                         ClientActors;                                            // 0x0258(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I0SL[0xA0];                                  // 0x0268(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
	 * Size -> 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
	 */
	class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
	{
	public:
		TMap<class FName, class FName>                             MappedUniqueNetIdTypes;                                  // 0x0028(0x0050) Config, NativeAccessSpecifierPrivate
		TArray<class FName>                                        CompatibleUniqueNetIdTypes;                              // 0x0078(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		class FName                                                VoiceSubsystemNameOverride;                              // 0x0088(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HFCY[0xF8];                                  // 0x0090(0x00F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlinePIESettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UOnlinePIESettings : public UDeveloperSettings
	{
	public:
		bool                                                       bOnlinePIEEnabled;                                       // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_01VM[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPIELoginSettingsInternal>                   Logins;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineSessionClient
	 * Size -> 0x01A8 (FullSize[0x01D0] - InheritedSize[0x0028])
	 */
	class UOnlineSessionClient : public UOnlineSession
	{
	public:
		unsigned char                                              UnknownData_TWMI[0x1A0];                                 // 0x0028(0x01A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsFromInvite;                                           // 0x01C8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHandlingDisconnect;                                     // 0x01C9(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LCE5[0x6];                                   // 0x01CA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconClient
	 * Size -> 0x00C0 (FullSize[0x0370] - InheritedSize[0x02B0])
	 */
	class APartyBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_SON1[0x30];                                  // 0x02B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DestSessionId;                                           // 0x02E0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPartyReservation                                   PendingReservation;                                      // 0x02F0(0x0050) Protected, NativeAccessSpecifierProtected
		EClientRequestType                                         RequestType;                                             // 0x0340(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingReservationSent;                                 // 0x0341(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCancelReservation;                                      // 0x0342(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LE71[0x2D];                                  // 0x0343(0x002D) MISSED OFFSET (PADDING)

	public:
		void ServerUpdateReservationRequest(const class FString& SessionID, const struct FPartyReservation& ReservationUpdate);
		void ServerReservationRequest(const class FString& SessionID, const struct FPartyReservation& Reservation);
		void ServerRemoveMemberFromReservationRequest(const class FString& SessionID, const struct FPartyReservation& ReservationUpdate);
		void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
		void ServerAddOrUpdateReservationRequest(const class FString& SessionID, const struct FPartyReservation& Reservation);
		void ClientSendReservationUpdates(int32_t NumRemainingReservations);
		void ClientSendReservationFull();
		void ClientReservationResponse(EPartyReservationResult ReservationResponse);
		void ClientCancelReservationResponse(EPartyReservationResult ReservationResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconHost
	 * Size -> 0x0078 (FullSize[0x02C0] - InheritedSize[0x0248])
	 */
	class APartyBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		class UPartyBeaconState*                                   State;                                                   // 0x0248(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QQVB[0x60];                                  // 0x0250(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLogoutOnSessionTimeout;                                 // 0x02B0(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SYXZ[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SessionTimeoutSecs;                                      // 0x02B4(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TravelSessionTimeoutSecs;                                // 0x02B8(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A13D[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconState
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UPartyBeaconState : public UObject
	{
	public:
		class FName                                                SessionName;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumConsumedReservations;                                 // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxReservations;                                         // 0x0034(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumTeams;                                                // 0x0038(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumPlayersPerTeam;                                       // 0x003C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TeamAssignmentMethod;                                    // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ReservedHostTeamNum;                                     // 0x0048(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ForceTeamNum;                                            // 0x004C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictCrossConsole;                                   // 0x0050(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VGLZ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PlatformCrossplayRestrictions;                           // 0x0058(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FPartyBeaconCrossplayPlatformMapping>        PlatformTypeMapping;                                     // 0x0068(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		bool                                                       bEnableRemovalRequests;                                  // 0x0078(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GW3U[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPartyReservation>                           Reservations;                                            // 0x0080(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YJLJ[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.QuitMatchCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTYO[0x28];                                  // 0x0050(0x0028) MISSED OFFSET (PADDING)

	public:
		class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCGC[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.SpectatorBeaconClient
	 * Size -> 0x00E8 (FullSize[0x0398] - InheritedSize[0x02B0])
	 */
	class ASpectatorBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_7TNR[0x30];                                  // 0x02B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DestSessionId;                                           // 0x02E0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSpectatorReservation                               PendingReservation;                                      // 0x02F0(0x0078) Protected, NativeAccessSpecifierProtected
		ESpectatorClientRequestType                                RequestType;                                             // 0x0368(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingReservationSent;                                 // 0x0369(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCancelReservation;                                      // 0x036A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0P97[0x2D];                                  // 0x036B(0x002D) MISSED OFFSET (PADDING)

	public:
		void ServerReservationRequest(const class FString& SessionID, const struct FSpectatorReservation& Reservation);
		void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator);
		void ClientSendReservationUpdates(int32_t NumRemainingReservations);
		void ClientSendReservationFull();
		void ClientReservationResponse(ESpectatorReservationResult ReservationResponse);
		void ClientCancelReservationResponse(ESpectatorReservationResult ReservationResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.SpectatorBeaconHost
	 * Size -> 0x0078 (FullSize[0x02C0] - InheritedSize[0x0248])
	 */
	class ASpectatorBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		class USpectatorBeaconState*                               State;                                                   // 0x0248(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AUSC[0x60];                                  // 0x0250(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLogoutOnSessionTimeout;                                 // 0x02B0(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AJ3X[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SessionTimeoutSecs;                                      // 0x02B4(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TravelSessionTimeoutSecs;                                // 0x02B8(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EVXZ[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.SpectatorBeaconState
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class USpectatorBeaconState : public UObject
	{
	public:
		class FName                                                SessionName;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumConsumedReservations;                                 // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxReservations;                                         // 0x0034(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictCrossConsole;                                   // 0x0038(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DPIA[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpectatorReservation>                       Reservations;                                            // 0x0040(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F8K9[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TestBeaconClient
	 * Size -> 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
	 */
	class ATestBeaconClient : public AOnlineBeaconClient
	{
	public:
		void ServerPong();
		void ClientPing();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TestBeaconHost
	 * Size -> 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
	 */
	class ATestBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
		void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32_t PlayerIndex, class FString* PlayerDisplayName);
		void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32_t* PlayerIndex);
		void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.VoipListenerSynthComponent
	 * Size -> 0x0060 (FullSize[0x0730] - InheritedSize[0x06D0])
	 */
	class UVoipListenerSynthComponent : public USynthComponent
	{
	public:
		unsigned char                                              UnknownData_ZL9L[0x60];                                  // 0x06D0(0x0060) MISSED OFFSET (PADDING)

	public:
		bool IsIdling();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
