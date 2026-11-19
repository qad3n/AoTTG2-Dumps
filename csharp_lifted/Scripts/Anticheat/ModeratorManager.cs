// ==================== AoTTG2 cross-reference ====================
// Type: Anticheat.ModeratorManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Anticheat/ModeratorManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace Anticheat;

[Token(Token = "0x20009D3")]
internal class ModeratorManager : MonoBehaviour, IOnEventCallback, IInRoomCallbacks, IMatchmakingCallbacks
{
	[Token(Token = "0x400313A")]
	private const byte CodeRoomRemove = 180;

	[Token(Token = "0x400313B")]
	private const byte CodeRoomBanList = 181;

	[Token(Token = "0x400313C")]
	private const byte CodeRoomPlayerList = 182;

	[Token(Token = "0x400313D")]
	private const byte CodeRegionRemove = 183;

	[Token(Token = "0x400313E")]
	private const byte CodeRegionBanList = 184;

	[Token(Token = "0x400313F")]
	private const byte CodePlayerListNotification = 188;

	[Token(Token = "0x4003140")]
	private const byte CodePlayerJoinNotification = 189;

	[Token(Token = "0x4003141")]
	private const byte CodeServerResponse = 190;

	[Token(Token = "0x4003142")]
	private const int RemoveKick = 1;

	[Token(Token = "0x4003143")]
	private const int RemoveBan = 2;

	[Token(Token = "0x4003144")]
	private const int RemoveIPBan = 3;

	[Token(Token = "0x4003145")]
	private const int RemoveUnban = 4;

	[Token(Token = "0x4003146")]
	private const int RemoveUnIPBan = 5;

	[Token(Token = "0x4003147")]
	private const int TargetByActorNumber = 0;

	[Token(Token = "0x4003148")]
	private const int TargetBySessionID = 1;

	[Token(Token = "0x4003149")]
	private const int TargetByIPAddress = 2;

	[Token(Token = "0x400314A")]
	private const int TargetByTargetID = 3;

	[Token(Token = "0x400314B")]
	private const int TargetByEncryptedIPAddress = 4;

	[Token(Token = "0x400314C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static ModeratorManager _instance;

	[Token(Token = "0x400314D")]
	public const int AuthLevelTrusted = 0;

	[Token(Token = "0x400314E")]
	public const int AuthLevelModerator = 1;

	[Token(Token = "0x400314F")]
	public const int AuthLevelAdmin = 2;

	[Token(Token = "0x4003154")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	private static Action m_AuthChanged;

	[Token(Token = "0x4003155")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	private static Action m_PlayerListChanged;

	[Token(Token = "0x4003156")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	private static Action<string> m_StatusMessage;

	[Token(Token = "0x4003157")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	private static Action<RoomBanPage> m_RoomBanListReceived;

	[Token(Token = "0x4003158")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private static Action<RegionBanPage> m_RegionBanListReceived;

	[Token(Token = "0x4003159")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Action<Dictionary<byte, object>>> _pendingCallbacks;

	[Token(Token = "0x400315A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, float> _pendingTimestamps;

	[Token(Token = "0x400315B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly Dictionary<string, float> _pendingTimeouts;

	[Token(Token = "0x400315C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly Dictionary<string, Action> _pendingTimeoutCallbacks;

	[Token(Token = "0x17000FA6")]
	public static bool IsAuthenticated
	{
		[Token(Token = "0x6005ACF")]
		[Address(RVA = "0x5D2EF00", Offset = "0x5D2DF00", VA = "0x5D2EF00")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$get_IsAuthenticated): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548539 == false) {
				Il2CppMethodInitialized_07548539 = true;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ModeratorManager._IsAuthenticated_k__BackingField;
			}
			return (bool)*(byte)((long)(typeof(ModeratorManager)).static_fields + 8);
		}
		[Token(Token = "0x6005AD0")]
		[Address(RVA = "0x5D2EF70", Offset = "0x5D2DF70", VA = "0x5D2EF70")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$set_IsAuthenticated): clean
			ModeratorManager._IsAuthenticated_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000FA7")]
	public static int AuthLevel
	{
		[Token(Token = "0x6005AD1")]
		[Address(RVA = "0x5D2EFC0", Offset = "0x5D2DFC0", VA = "0x5D2EFC0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$get_AuthLevel): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754853b == false) {
				Il2CppMethodInitialized_0754853b = true;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ModeratorManager._AuthLevel_k__BackingField;
			}
			return *(int)((long)(typeof(ModeratorManager)).static_fields + 0xc);
		}
		[Token(Token = "0x6005AD2")]
		[Address(RVA = "0x5D2F030", Offset = "0x5D2E030", VA = "0x5D2F030")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$set_AuthLevel): clean
			ModeratorManager._AuthLevel_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000FA8")]
	public static string AuthUsername
	{
		[Token(Token = "0x6005AD3")]
		[Address(RVA = "0x5D2F080", Offset = "0x5D2E080", VA = "0x5D2F080")]
		get
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$get_AuthUsername): clean
			uint uVar1;
			String pSVar2;

			if (Il2CppMethodInitialized_0754853d == false) {
				Il2CppMethodInitialized_0754853d = true;
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pSVar2 = AccountManager.Username;
			}
			else {
				pSVar2 = AccountManager.Username;
			}
			if (pSVar2 == null) {
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			return pSVar2;
		}
	}

	[Token(Token = "0x17000FA9")]
	public static Dictionary<int, PlayerEntry> ActivePlayers
	{
		[Token(Token = "0x6005AD4")]
		[Address(RVA = "0x5D2F100", Offset = "0x5D2E100", VA = "0x5D2F100")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$get_ActivePlayers): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754853e == false) {
				Il2CppMethodInitialized_0754853e = true;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ModeratorManager._ActivePlayers_k__BackingField;
			}
			return *(Dictionary<int, PlayerEntry>*)((long)(typeof(ModeratorManager)).static_fields + 0x10);
		}
		[Token(Token = "0x6005AD5")]
		[Address(RVA = "0x5D2F170", Offset = "0x5D2E170", VA = "0x5D2F170")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$set_ActivePlayers): clean

			ModeratorManager._ActivePlayers_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000FAA")]
	public static List<PlayerEntry> PastPlayers
	{
		[Token(Token = "0x6005AD6")]
		[Address(RVA = "0x5D2F1D0", Offset = "0x5D2E1D0", VA = "0x5D2F1D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$get_PastPlayers): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07548540 == false) {
				Il2CppMethodInitialized_07548540 = true;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return ModeratorManager._PastPlayers_k__BackingField;
			}
			return *(List<PlayerEntry>*)((long)(typeof(ModeratorManager)).static_fields + 0x18);
		}
		[Token(Token = "0x6005AD7")]
		[Address(RVA = "0x5D2F240", Offset = "0x5D2E240", VA = "0x5D2F240")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$set_PastPlayers): clean

			ModeratorManager._PastPlayers_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x14000015")]
	public static event Action AuthChanged
	{
		[Token(Token = "0x6005AD8")]
		[Address(RVA = "0x5D2F2A0", Offset = "0x5D2E2A0", VA = "0x5D2F2A0")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$add_AuthChanged): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action a;
			bool bVar2;

			a = ModeratorManager.AuthChanged;
			do {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&ModeratorManager.AuthChanged, value_00, a);
				bVar2 = pSVar1 != a;
				a = pSVar1;
			} while (bVar2);
			return;
		}
		[Token(Token = "0x6005AD9")]
		[Address(RVA = "0x5D2F380", Offset = "0x5D2E380", VA = "0x5D2F380")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$remove_AuthChanged): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action source;
			bool bVar2;

			source = ModeratorManager.AuthChanged;
			do {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&ModeratorManager.AuthChanged, value_00, source);
				bVar2 = pSVar1 != source;
				source = pSVar1;
			} while (bVar2);
			return;
		}
	}

	[Token(Token = "0x14000016")]
	public static event Action PlayerListChanged
	{
		[Token(Token = "0x6005ADA")]
		[Address(RVA = "0x5D2F460", Offset = "0x5D2E460", VA = "0x5D2F460")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$add_PlayerListChanged): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action a;
			bool bVar2;

			a = ModeratorManager.PlayerListChanged;
			do {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&ModeratorManager.PlayerListChanged, value_00, a);
				bVar2 = pSVar1 != a;
				a = pSVar1;
			} while (bVar2);
			return;
		}
		[Token(Token = "0x6005ADB")]
		[Address(RVA = "0x5D2F540", Offset = "0x5D2E540", VA = "0x5D2F540")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$remove_PlayerListChanged): 2 lines keep C-only constructs
			Action pSVar1;
			Delegate value_00;
			Action source;
			bool bVar2;

			source = ModeratorManager.PlayerListChanged;
			do {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((Action)value_00.klass != typeof(Action))) {
					throw new InvalidCastException();
				}
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&ModeratorManager.PlayerListChanged, value_00, source);
				bVar2 = pSVar1 != source;
				source = pSVar1;
			} while (bVar2);
			return;
		}
	}

	[Token(Token = "0x14000017")]
	public static event Action<string> StatusMessage
	{
		[Token(Token = "0x6005ADC")]
		[Address(RVA = "0x5D2F620", Offset = "0x5D2E620", VA = "0x5D2F620")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$add_StatusMessage): 1 lines keep C-only constructs
			Action<string> pSVar2;
			Delegate obj;
			object value_00;
			Action<string> a;
			bool bVar3;

			a = ModeratorManager.StatusMessage;
			do {
				obj = Delegate.Combine((Delegate)a, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<string>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&ModeratorManager.StatusMessage, value_00, a);
				bVar3 = pSVar2 != a;
				a = pSVar2;
			} while (bVar3);
			return;
		}
		[Token(Token = "0x6005ADD")]
		[Address(RVA = "0x5D2F710", Offset = "0x5D2E710", VA = "0x5D2F710")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$remove_StatusMessage): 1 lines keep C-only constructs
			Action<string> pSVar2;
			Delegate obj;
			object value_00;
			Action<string> source;
			bool bVar3;

			source = ModeratorManager.StatusMessage;
			do {
				obj = Delegate.Remove((Delegate)source, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<string>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&ModeratorManager.StatusMessage, value_00, source);
				bVar3 = pSVar2 != source;
				source = pSVar2;
			} while (bVar3);
			return;
		}
	}

	[Token(Token = "0x14000018")]
	public static event Action<RoomBanPage> RoomBanListReceived
	{
		[Token(Token = "0x6005ADE")]
		[Address(RVA = "0x5D2F800", Offset = "0x5D2E800", VA = "0x5D2F800")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$add_RoomBanListReceived): 1 lines keep C-only constructs
			Action<RoomBanPage> pSVar2;
			Delegate obj;
			object value_00;
			Action<RoomBanPage> a;
			bool bVar3;

			a = ModeratorManager.RoomBanListReceived;
			do {
				obj = Delegate.Combine((Delegate)a, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<RoomBanPage>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&ModeratorManager.RoomBanListReceived, value_00, a);
				bVar3 = pSVar2 != a;
				a = pSVar2;
			} while (bVar3);
			return;
		}
		[Token(Token = "0x6005ADF")]
		[Address(RVA = "0x5D2F8F0", Offset = "0x5D2E8F0", VA = "0x5D2F8F0")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$remove_RoomBanListReceived): 1 lines keep C-only constructs
			Action<RoomBanPage> pSVar2;
			Delegate obj;
			object value_00;
			Action<RoomBanPage> source;
			bool bVar3;

			source = ModeratorManager.RoomBanListReceived;
			do {
				obj = Delegate.Remove((Delegate)source, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<RoomBanPage>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&ModeratorManager.RoomBanListReceived, value_00, source);
				bVar3 = pSVar2 != source;
				source = pSVar2;
			} while (bVar3);
			return;
		}
	}

	[Token(Token = "0x14000019")]
	public static event Action<RegionBanPage> RegionBanListReceived
	{
		[Token(Token = "0x6005AE0")]
		[Address(RVA = "0x5D2F9E0", Offset = "0x5D2E9E0", VA = "0x5D2F9E0")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$add_RegionBanListReceived): 1 lines keep C-only constructs
			Action<RegionBanPage> pSVar2;
			Delegate obj;
			object value_00;
			Action<RegionBanPage> a;
			bool bVar3;

			a = ModeratorManager.RegionBanListReceived;
			do {
				obj = Delegate.Combine((Delegate)a, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<RegionBanPage>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&ModeratorManager.RegionBanListReceived, value_00, a) ;
				bVar3 = pSVar2 != a;
				a = pSVar2;
			} while (bVar3);
			return;
		}
		[Token(Token = "0x6005AE1")]
		[Address(RVA = "0x5D2FAD0", Offset = "0x5D2EAD0", VA = "0x5D2FAD0")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$remove_RegionBanListReceived): 1 lines keep C-only constructs
			Action<RegionBanPage> pSVar2;
			Delegate obj;
			object value_00;
			Action<RegionBanPage> source;
			bool bVar3;

			source = ModeratorManager.RegionBanListReceived;
			do {
				obj = Delegate.Remove((Delegate)source, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<RegionBanPage>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&ModeratorManager.RegionBanListReceived, value_00, source);
				bVar3 = pSVar2 != source;
				source = pSVar2;
			} while (bVar3);
			return;
		}
	}

	[Token(Token = "0x6005AE2")]
	[Address(RVA = "0x5D2FBC0", Offset = "0x5D2EBC0", VA = "0x5D2FBC0")]
	public static void Init()
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$Init): clean
		ModeratorManager pAVar1;

		pAVar1 = SingletonFactory.CreateSingleton<ModeratorManager>((object)ModeratorManager._instance);
		ModeratorManager._instance = pAVar1;
		return;
	}

	[Token(Token = "0x6005AE3")]
	[Address(RVA = "0x5D2FC40", Offset = "0x5D2EC40", VA = "0x5D2FC40")]
	private void OnEnable()
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnEnable): 2 lines keep C-only constructs
		Action pSVar1;

		PhotonNetwork.AddCallbackTarget((object)this);
		pSVar1 = new Action(null, (intptr_t)MethodInfo_Anticheat_ModeratorManager_UpdateAuthFromRoles);
		AccountManager.add_OnLoggedIn(pSVar1);
		pSVar1 = new Action(null, (intptr_t)MethodInfo_Anticheat_ModeratorManager_ClearAuth);
		AccountManager.add_OnLoggedOut(pSVar1);
		return;
	}

	[Token(Token = "0x6005AE4")]
	[Address(RVA = "0x5D2FD40", Offset = "0x5D2ED40", VA = "0x5D2FD40")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnDisable): 2 lines keep C-only constructs
		Action pSVar1;

		PhotonNetwork.RemoveCallbackTarget((object)this);
		pSVar1 = new Action(null, (intptr_t)MethodInfo_Anticheat_ModeratorManager_UpdateAuthFromRoles);
		AccountManager.remove_OnLoggedIn(pSVar1);
		pSVar1 = new Action(null, (intptr_t)MethodInfo_Anticheat_ModeratorManager_ClearAuth);
		AccountManager.remove_OnLoggedOut(pSVar1);
		return;
	}

	[Token(Token = "0x6005AE5")]
	[Address(RVA = "0x5D2FE40", Offset = "0x5D2EE40", VA = "0x5D2FE40")]
	private void Update()
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$Update): clean
		this.TickTimeouts();
		return;
	}

	[Token(Token = "0x6005AE6")]
	[Address(RVA = "0x5D30380", Offset = "0x5D2F380", VA = "0x5D30380", Slot = "4")]
	public void OnEvent(EventData photonEvent)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnEvent): 7 lines keep C-only constructs
		byte uVar1;
		ParameterDictionary __this_00;
		Dictionary<object, object> pSVar2;
		Dictionary<string, float> pSVar3;
		ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields pEVar4;
		bool bVar5;
		int iVar6;
		Dictionary<byte, object> __this_01;
		object key;
		ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o EVar7;
		System_Collections_Generic_KeyValuePair_K__V__o SVar8;
		ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields EStack_58;
		object pIStack_48;
		byte puStack_38;

		pIStack_48 = null;
		EStack_58._index = 0;
		EStack_58._4_4_ = 0;
		if (photonEvent == null) {
	label_05e306e5: ;
			throw new NullReferenceException();
		}
		iVar6 = photonEvent.Sender;
		if (iVar6 == -1) {
			uVar1 = photonEvent.Code;
			if (uVar1 == 0xbe) {
				__this_01 = new Dictionary<byte, object>();
				__this_00 = photonEvent.Parameters;
				if (__this_00 != null) {
					EVar7 = __this_00.GetEnumerator();
					EStack_58._dict = EVar7._dict;
					puStack_38 = (byte)&EStack_58;
					EStack_58._index = EVar7._index;
					pEVar4 = &EStack_58;
					if (__this_01 == null) {
						bVar5 = EStack_58.MoveNext();
						if (bVar5) {
							EStack_58.Current;
							throw new NullReferenceException();
						}
					}
					else {
						while (true) {
							puStack_38 = (byte)pEVar4;
							bVar5 = EStack_58.MoveNext();
							if (!(bVar5)) break;
							SVar8 = EStack_58.Current;
							__this_01.set_Item((uint8_t)SVar8.key, SVar8.value);
							pEVar4 = (ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields)puStack_38;
						}
					}
					EStack_58.Dispose();
					if (__this_01 == null) {
						return;
					}
					bVar5 = __this_01.ContainsKey(0);
					if (!bVar5) {
						return;
					}
					key = __this_01.get_Item(0);
					if ((key != null) && (key.klass != g_data_07556758)) {
						throw new InvalidCastException();
					}
					pSVar2 = (Dictionary<object, object>)this._pendingCallbacks ;
					if (pSVar2 != null) {
						bVar5 = pSVar2.TryGetValue(key, ref pIStack_48);
						if (!bVar5) {
							return;
						}
						pSVar2 = (Dictionary<object, object>)this._pendingCallbacks;
						if (pSVar2 != null) {
							pSVar2.Remove(key);
							pSVar3 = this._pendingTimestamps;
							if (pSVar3 != null) {
								pSVar3.Remove(key);
								pSVar3 = this._pendingTimeouts;
								if (pSVar3 != null) {
									pSVar3.Remove(key);
									pSVar2 = (Dictionary<object, object>)this._pendingTimeoutCallbacks;
									if (pSVar2 != null) {
										pSVar2.Remove(key);
										if (pIStack_48 == null) {
											return;
										}
										(*pIStack_48[1].monitor)(pIStack_48[4].klass,__this_01,pIStack_48[2].monitor);
										return;
									}
								}
							}
						}
					}
				}
				goto label_05e306e5;
			}
			if (uVar1 == 0xbd) {
				ModeratorManager.HandlePlayerJoinNotification(photonEvent);
				return;
			}
			if (uVar1 == 0xbc) {
				ModeratorManager.HandlePlayerListNotification(photonEvent);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6005AE7")]
	[Address(RVA = "0x5D30EC0", Offset = "0x5D2FEC0", VA = "0x5D30EC0", Slot = "5")]
	public void OnPlayerEnteredRoom(Player newPlayer)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnPlayerEnteredRoom): clean
		return;
	}

	[Token(Token = "0x6005AE8")]
	[Address(RVA = "0x5D30ED0", Offset = "0x5D2FED0", VA = "0x5D30ED0", Slot = "6")]
	public void OnPlayerLeftRoom(Player otherPlayer)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnPlayerLeftRoom): 6 lines keep C-only constructs
		int piVar1;
		int key;
		uint uVar2;
		Dictionary<int, object> pSVar3;
		List<PlayerEntry> __this_00;
		PlayerEntry[] pAVar4;
		Action pSVar5;
		MethodInfo pMVar6;
		bool bVar7;
		PlayerEntry pAStack_18;

		pAStack_18 = null;
		if (otherPlayer == null) goto label_05e31135;
		key = otherPlayer.actorNumber;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07547eef != false) goto label_05e30f47;
	label_05e30f76: ;
			Il2CppMethodInitialized_07547eef = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e30f53;
	label_05e30f95: ;
			pSVar3 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_07547eef == false) goto label_05e30f76;
	label_05e30f47: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e30f95;
	label_05e30f53: ;
			pSVar3 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		if (pSVar3 == null) goto label_05e31135;
		bVar7 = pSVar3.TryGetValue(key, (object*)&pAStack_18);
		if (!bVar7) {
			return;
		}
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07547eef != false) goto label_05e30fe2;
	label_05e31011: ;
			Il2CppMethodInitialized_07547eef = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e30fee;
	label_05e31030: ;
			pSVar3 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_07547eef == false) goto label_05e31011;
	label_05e30fe2: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e31030;
	label_05e30fee: ;
			pSVar3 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		if (pSVar3 == null) goto label_05e31135;
		pSVar3.Remove(key);
		if (Il2CppMethodInitialized_07547ef0 == false) {
			Il2CppMethodInitialized_07547ef0 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e31072;
	label_05e310a6: ;
			__this_00 = ModeratorManager._PastPlayers_k__BackingField;
			pMVar6 = MethodInfo_System_Collections_Generic_List_PlayerEntry_Add;
		}
		else {
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e310a6;
	label_05e31072: ;
			__this_00 = ModeratorManager._PastPlayers_k__BackingField;
			pMVar6 = MethodInfo_System_Collections_Generic_List_PlayerEntry_Add;
		}
		MethodInfo_System_Collections_Generic_List_PlayerEntry_Add = pMVar6;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pAVar4 = __this_00._items;
			if (pAVar4 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pAVar4.Length) {
					__this_00._size = uVar2 + 1;
					pAVar4[(int)uVar2] = pAStack_18;
				}
				else {
					__this_00.AddWithResize((object)pAStack_18);
				}
				pSVar5 = ModeratorManager.PlayerListChanged;
				if (pSVar5 != null) {
					(*(code)pSVar5.invoke_impl)(pSVar5.method_code,pSVar5.method);
				}
				return;
			}
		}
	label_05e31135: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005AE9")]
	[Address(RVA = "0x5D31140", Offset = "0x5D30140", VA = "0x5D31140", Slot = "7")]
	public void OnRoomPropertiesUpdate(Hashtable propertiesThatChanged)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnRoomPropertiesUpdate): clean
		return;
	}

	[Token(Token = "0x6005AEA")]
	[Address(RVA = "0x5D31150", Offset = "0x5D30150", VA = "0x5D31150", Slot = "8")]
	public void OnPlayerPropertiesUpdate(Player targetPlayer, Hashtable changedProps)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnPlayerPropertiesUpdate): clean
		return;
	}

	[Token(Token = "0x6005AEB")]
	[Address(RVA = "0x5D31160", Offset = "0x5D30160", VA = "0x5D31160", Slot = "9")]
	public void OnMasterClientSwitched(Player newMasterClient)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnMasterClientSwitched): clean
		return;
	}

	[Token(Token = "0x6005AEC")]
	[Address(RVA = "0x5D31170", Offset = "0x5D30170", VA = "0x5D31170", Slot = "13")]
	public void OnJoinedRoom()
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnJoinedRoom): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07548551 == false) {
			Il2CppMethodInitialized_07548551 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ModeratorManager);
		}
		else {
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ModeratorManager);
		}
		typeof(ModeratorManager) = (ModeratorManager)klass;
		if (uVar1 == 0) {
			ModeratorManager.UpdateAuthFromRoles();
			return;
		}
		ModeratorManager.UpdateAuthFromRoles();
		return;
	}

	[Token(Token = "0x6005AED")]
	[Address(RVA = "0x5D31610", Offset = "0x5D30610", VA = "0x5D31610", Slot = "16")]
	public void OnLeftRoom()
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnLeftRoom): 2 lines keep C-only constructs
		int piVar1;
		int length;
		Dictionary<int, object> __this_00;
		List<PlayerEntry> pSVar2;
		Dictionary<object, object> pSVar3;
		Dictionary<string, float> pSVar4;

		if (Il2CppMethodInitialized_07548552 == false) {
			Il2CppMethodInitialized_07548552 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e316d9;
	label_05e31638: ;
			ModeratorManager.ClearAuth();
			if (Il2CppMethodInitialized_07547eef != false) goto label_05e3164a;
	label_05e316f0: ;
			Il2CppMethodInitialized_07547eef = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e31713;
	label_05e3165a: ;
			__this_00 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		else {
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e31638;
	label_05e316d9: ;
			ModeratorManager.ClearAuth();
			if (Il2CppMethodInitialized_07547eef == false) goto label_05e316f0;
	label_05e3164a: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e3165a;
	label_05e31713: ;
			__this_00 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		if (__this_00 == null) goto label_05e3181b;
		__this_00.Clear();
		if (Il2CppMethodInitialized_07547ef0 == false) {
			Il2CppMethodInitialized_07547ef0 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e31787;
	label_05e31753: ;
			pSVar2 = ModeratorManager._PastPlayers_k__BackingField;
		}
		else {
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e31753;
	label_05e31787: ;
			pSVar2 = ModeratorManager._PastPlayers_k__BackingField;
		}
		if (pSVar2 != null) {
			piVar1 = &pSVar2._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar2._size;
			pSVar2._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar2._items, 0, length);
			}
			pSVar3 = (Dictionary<object, object>)this._pendingCallbacks;
			if (pSVar3 != null) {
				pSVar3.Clear();
				pSVar4 = this._pendingTimestamps;
				if (pSVar4 != null) {
					pSVar4.Clear();
					pSVar4 = this._pendingTimeouts;
					if (pSVar4 != null) {
						pSVar4.Clear();
						pSVar3 = (Dictionary<object, object>)this._pendingTimeoutCallbacks;
						if (pSVar3 != null) {
							pSVar3.Clear();
							return;
						}
					}
				}
			}
		}
	label_05e3181b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005AEE")]
	[Address(RVA = "0x5D311D0", Offset = "0x5D301D0", VA = "0x5D311D0")]
	private static void UpdateAuthFromRoles()
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$UpdateAuthFromRoles): 3 lines keep C-only constructs
		uint uVar1;
		IntPtr pvVar2;
		long lVar3;
		bool bVar4;
		String[] source;
		Il2CppClass pIVar5;

		if (Il2CppMethodInitialized_07548553 == false) {
			Il2CppMethodInitialized_07548553 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e31263;
	label_05e311f0: ;
			source = AccountManager.Roles;
		}
		else {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e311f0;
	label_05e31263: ;
			source = AccountManager.Roles;
		}
		if (source == null) {
	label_05e3144f: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
				ModeratorManager.ClearAuth();
				return;
			}
			ModeratorManager.ClearAuth();
			return;
		}
		bVar4 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (Il2CppObject *)"admin");
		if (!bVar4) {
			bVar4 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (Il2CppObject *)"moderator");
			if (!bVar4) {
				bVar4 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (Il2CppObject *)"trusted");
				if (!bVar4) goto label_05e3144f;
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
					if (g_data_07548590 == false) goto label_05e31593;
	label_05e313f7: ;
					if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e31407;
	label_05e315b6: ;
					pIVar5 = typeof(ModeratorManager);
					ModeratorManager._IsAuthenticated_k__BackingField = true;
					if (g_data_07548591 == false) goto label_05e315d6;
	label_05e3141f: ;
					uVar1 = (pIVar5._2).cctor_finished_or_no_cctor;
				}
				else {
					if (g_data_07548590 != false) goto label_05e313f7;
	label_05e31593: ;
					g_data_07548590 = true;
					if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e315b6;
	label_05e31407: ;
					pIVar5 = typeof(ModeratorManager);
					ModeratorManager._IsAuthenticated_k__BackingField = true;
					if (g_data_07548591 != false) goto label_05e3141f;
	label_05e315d6: ;
					g_data_07548591 = true;
					uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
					pIVar5 = typeof(ModeratorManager);
				}
				if (uVar1 == 0) {
					pIVar5 = typeof(ModeratorManager);
				}
				pvVar2 = pIVar5.static_fields;
				*(uint)((long)pvVar2 + 0xc) = 0;
				lVar3 = *(long)((long)pvVar2 + 0x20);
				goto joined_r0x05e31441;
			}
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07548590 == false) goto label_05e31512;
	label_05e31355: ;
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e31365;
	label_05e31535: ;
				pIVar5 = typeof(ModeratorManager);
				ModeratorManager._IsAuthenticated_k__BackingField = true;
				if (g_data_07548591 == false) goto label_05e31555;
	label_05e3137d: ;
				uVar1 = (pIVar5._2).cctor_finished_or_no_cctor;
			}
			else {
				if (g_data_07548590 != false) goto label_05e31355;
	label_05e31512: ;
				g_data_07548590 = true;
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e31535;
	label_05e31365: ;
				pIVar5 = typeof(ModeratorManager);
				ModeratorManager._IsAuthenticated_k__BackingField = true;
				if (g_data_07548591 != false) goto label_05e3137d;
	label_05e31555: ;
				g_data_07548591 = true;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
				pIVar5 = typeof(ModeratorManager);
			}
			if (uVar1 == 0) {
				pIVar5 = typeof(ModeratorManager);
			}
			pvVar2 = pIVar5.static_fields;
			*(uint)((long)pvVar2 + 0xc) = 1;
			lVar3 = *(long)((long)pvVar2 + 0x20);
			goto joined_r0x05e31441;
		}
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07548590 == false) goto label_05e31491;
	label_05e312bf: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e312cf;
	label_05e314b4: ;
			pIVar5 = typeof(ModeratorManager);
			ModeratorManager._IsAuthenticated_k__BackingField = true;
			if (g_data_07548591 == false) goto label_05e314d4;
	label_05e312e7: ;
			uVar1 = (pIVar5._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_07548590 != false) goto label_05e312bf;
	label_05e31491: ;
			g_data_07548590 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e314b4;
	label_05e312cf: ;
			pIVar5 = typeof(ModeratorManager);
			ModeratorManager._IsAuthenticated_k__BackingField = true;
			if (g_data_07548591 != false) goto label_05e312e7;
	label_05e314d4: ;
			g_data_07548591 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			pIVar5 = typeof(ModeratorManager);
		}
		if (uVar1 == 0) {
			pIVar5 = typeof(ModeratorManager);
		}
		pvVar2 = pIVar5.static_fields;
		*(uint)((long)pvVar2 + 0xc) = 2;
		lVar3 = *(long)((long)pvVar2 + 0x20);
	joined_r0x05e31441: ;
		if (lVar3 == 0) {
			return;
		}
		(**(code*)(lVar3 + 0x18))(*(ulong)(lVar3 + 0x40),*(ulong)(lVar3 + 0x28));
		return;
	}

	[Token(Token = "0x6005AEF")]
	[Address(RVA = "0x5D31820", Offset = "0x5D30820", VA = "0x5D31820")]
	private static void ClearAuth()
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$ClearAuth): 53 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		Action pSVar3;
		code *vtableDispatch;
		ulong in_RDX;
		ulong extraout_RDX;
		ulong extraout_RDX_00;
		ulong extraout_RDX_01;
		ulong extraout_RDX_02;
		ulong extraout_RDX_03;
		ulong extraout_RDX_04;
		ulong extraout_RDX_05;
		ulong extraout_RDX_06;
		ulong extraout_RDX_07;
		ulong extraout_RDX_08;
		ulong extraout_RDX_09;
		ulong extraout_RDX_10;
		ulong extraout_RDX_11;
		ulong extraout_RDX_12;
		ulong extraout_RDX_13;
		ulong extraout_RDX_14;
		ulong extraout_RDX_15;
		ulong extraout_RDX_16;
		int iVar4;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07548554 == false) {
			Il2CppMethodInitialized_07548554 = true;
			in_RDX = extraout_RDX;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e31902;
	label_05e31847: ;
			if (Il2CppMethodInitialized_07547eed != false) goto label_05e31854;
	label_05e31914: ;
			Il2CppMethodInitialized_07547eed = true;
			in_RDX = extraout_RDX_01;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e31937;
	label_05e31864: ;
			cVar1 = ModeratorManager._IsAuthenticated_k__BackingField;
			uVar2 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e31847;
	label_05e31902: ;
			in_RDX = extraout_RDX_00;
			if (Il2CppMethodInitialized_07547eed == false) goto label_05e31914;
	label_05e31854: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e31864;
	label_05e31937: ;
			cVar1 = ModeratorManager._IsAuthenticated_k__BackingField;
			uVar2 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			in_RDX = extraout_RDX_02;
		}
		if (cVar1 == false) {
			if (uVar2 == 0) {
				in_RDX = extraout_RDX_08;
				if (g_data_07547eee == false) goto label_05e31a2a;
	label_05e3196b: ;
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e3197b;
	label_05e31a4d: ;
				iVar4 = ModeratorManager._AuthLevel_k__BackingField;
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
					in_RDX = extraout_RDX_13;
					goto joined_r0x05e31b1d;
				}
				in_RDX = extraout_RDX_10;
				if (g_data_07548590 != false) goto label_05e31a79;
	label_05e31b23: ;
				g_data_07548590 = true;
				in_RDX = extraout_RDX_14;
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e31b46;
	label_05e31a89: ;
				klass = typeof(ModeratorManager);
				ModeratorManager._IsAuthenticated_k__BackingField = false;
				if (g_data_07548591 != false) goto label_05e31aa1;
	label_05e31b66: ;
				g_data_07548591 = true;
				uVar2 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
				klass = typeof(ModeratorManager);
				in_RDX = extraout_RDX_16;
			}
			else {
				if (g_data_07547eee != false) goto label_05e3196b;
	label_05e31a2a: ;
				g_data_07547eee = true;
				in_RDX = extraout_RDX_09;
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e31a4d;
	label_05e3197b: ;
				iVar4 = ModeratorManager._AuthLevel_k__BackingField;
	joined_r0x05e31b1d: ;
				if (g_data_07548590 == false) goto label_05e31b23;
	label_05e31a79: ;
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e31a89;
	label_05e31b46: ;
				klass = typeof(ModeratorManager);
				ModeratorManager._IsAuthenticated_k__BackingField = false;
				in_RDX = extraout_RDX_15;
				if (g_data_07548591 == false) goto label_05e31b66;
	label_05e31aa1: ;
				uVar2 = (klass._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				klass = typeof(ModeratorManager);
				in_RDX = extraout_RDX_11;
			}
			*(uint)((long)klass.static_fields + 0xc) = 0xffffffff;
			if (iVar4 == -1) {
				return;
			}
			goto label_05e31ac5;
		}
		if (uVar2 == 0) {
			in_RDX = extraout_RDX_03;
			if (g_data_07548590 == false) goto label_05e319a9;
	label_05e31890: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e318a0;
	label_05e319cc: ;
			klass = typeof(ModeratorManager);
			ModeratorManager._IsAuthenticated_k__BackingField = false;
			in_RDX = extraout_RDX_05;
			if (g_data_07548591 == false) goto label_05e319ec;
	label_05e318b8: ;
			uVar2 = (klass._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_07548590 != false) goto label_05e31890;
	label_05e319a9: ;
			g_data_07548590 = true;
			in_RDX = extraout_RDX_04;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e319cc;
	label_05e318a0: ;
			klass = typeof(ModeratorManager);
			ModeratorManager._IsAuthenticated_k__BackingField = false;
			if (g_data_07548591 != false) goto label_05e318b8;
	label_05e319ec: ;
			g_data_07548591 = true;
			uVar2 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(ModeratorManager);
			in_RDX = extraout_RDX_06;
		}
		if (uVar2 == 0) {
			klass = typeof(ModeratorManager);
			in_RDX = extraout_RDX_07;
		}
		*(uint)((long)klass.static_fields + 0xc) = 0xffffffff;
	label_05e31ac5: ;
		if ((klass._2).cctor_finished_or_no_cctor == 0) {
			pSVar3 = ModeratorManager.AuthChanged;
			in_RDX = extraout_RDX_12;
		}
		else {
			pSVar3 = *(Action*)((long)klass.static_fields + 0x20);
		}
		if (pSVar3 == null) {
			return;
		}
		vtableDispatch = (code)pSVar3.invoke_impl;
		(*vtableDispatch)(pSVar3.method_code,pSVar3.method,in_RDX,vtableDispatch);
		return;
	}

	[Token(Token = "0x6005AF0")]
	[Address(RVA = "0x5D31B90", Offset = "0x5D30B90", VA = "0x5D31B90", Slot = "10")]
	public void OnFriendListUpdate(List<FriendInfo> friendList)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnFriendListUpdate): clean
		return;
	}

	[Token(Token = "0x6005AF1")]
	[Address(RVA = "0x5D31BA0", Offset = "0x5D30BA0", VA = "0x5D31BA0", Slot = "11")]
	public void OnCreatedRoom()
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnCreatedRoom): clean
		return;
	}

	[Token(Token = "0x6005AF2")]
	[Address(RVA = "0x5D31BB0", Offset = "0x5D30BB0", VA = "0x5D31BB0", Slot = "12")]
	public void OnCreateRoomFailed(short returnCode, string message)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnCreateRoomFailed): clean
		return;
	}

	[Token(Token = "0x6005AF3")]
	[Address(RVA = "0x5D31BC0", Offset = "0x5D30BC0", VA = "0x5D31BC0", Slot = "14")]
	public void OnJoinRoomFailed(short returnCode, string message)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnJoinRoomFailed): clean
		return;
	}

	[Token(Token = "0x6005AF4")]
	[Address(RVA = "0x5D31BD0", Offset = "0x5D30BD0", VA = "0x5D31BD0", Slot = "15")]
	public void OnJoinRandomFailed(short returnCode, string message)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$OnJoinRandomFailed): clean
		return;
	}

	[Token(Token = "0x6005AF5")]
	[Address(RVA = "0x5D2FE50", Offset = "0x5D2EE50", VA = "0x5D2FE50")]
	private void TickTimeouts()
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$TickTimeouts): 25 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<string, float> pSVar3;
		String[] pSVar4;
		Dictionary<object, object> pSVar5;
		String key;
		ulong item;
		float fVar7;
		bool bVar8;
		int iVar9;
		List<string> __this_00;
		float fVar10;
		float fVar11;
		byte[] auStack_a8 = new byte[16];
		String pSStack_98;
		object pIStack_90;
		int iStack_88;
		uint uStack_84;
		object pIStack_80;
		byte[] auStack_78 = new byte[8];
		ulong uStack_70;
		String pSStack_68;
		byte[] auStack_58 = new byte[24];
		object pIStack_40;
		ulong uStack_38;

		auStack_58._16_8_ = null;
		pIStack_40 = null;
		auStack_58._0_8_ = null;
		auStack_58._8_4_ = 0;
		auStack_58._12_4_ = 0;
		uStack_38._0_4_ = 0;
		uStack_38._4_4_ = 0;
		auStack_78 = (byte[])0x0;
		uStack_70._0_4_ = 0;
		uStack_70._4_4_ = 0;
		pSStack_68 = null;
		pIStack_80 = null;
		pSVar3 = this._pendingTimestamps;
		if (pSVar3 == null) {
	label_05e3029a: ;
			throw new NullReferenceException();
		}
		iVar9 = pSVar3.Count;
		if (iVar9 != 0) {
			fVar10 = Time.realtimeSinceStartup;
			pSVar3 = this._pendingTimestamps;
			if (pSVar3 == null) goto label_05e3029a;
			auStack_a8.GetEnumerator((Dictionary<TKey, TValue>)pSVar3);
			uStack_38._0_4_ = iStack_88;
			uStack_38._4_4_ = uStack_84;
			auStack_58._16_8_ = pSStack_98;
			pIStack_40 = pIStack_90;
			auStack_58._0_8_ = auStack_a8._0_8_;
			auStack_58._8_8_ = auStack_a8._8_8_;
			auStack_a8._0_8_ = null;
			__this_00 = null;
			auStack_a8._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o)auStack_58;
			while(true) {
				bVar8 = auStack_58.MoveNext();
				item = auStack_58._16_8_;
				if (!bVar8) break;
				pSVar3 = this._pendingTimeouts;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				fVar7 = pIStack_40._0_4_;
				fVar11 = pSVar3.get_Item((object)auStack_58._16_8_);
				if (fVar11 <= fVar10 - fVar7) {
					if (__this_00 == null) {
						__this_00 = new List<string>();
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
					}
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = __this_00._items;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar4.Length) {
						__this_00._size = uVar2 + 1;
						pSVar4[(int)uVar2] = (String)item;
					}
					else {
						__this_00.AddWithResize((object)item);
					}
				}
			}
			auStack_58.Dispose();
			if (__this_00 != null) {
				auStack_a8.GetEnumerator((List<object>)__this_00);
				pSStack_68 = pSStack_98;
				auStack_78 = (byte[])auStack_a8._0_8_;
				uStack_70 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o)auStack_a8._8_8_;
				auStack_a8._0_8_ = null;
				auStack_a8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_78;
				while(true) {
					bVar8 = auStack_78.MoveNext();
					key = pSStack_68;
					if (!bVar8) break;
					pSVar3 = this._pendingTimestamps;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					pSVar3.Remove((object)pSStack_68) ;
					pSVar3 = this._pendingTimeouts;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					pSVar3.Remove((object)key) ;
					pSVar5 = (Dictionary<object, object>)this._pendingCallbacks ;
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					pSVar5.Remove((object)key);
					pSVar5 = (Dictionary<object, object>)this._pendingTimeoutCallbacks;
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					pSVar5.TryGetValue((object)key, ref pIStack_80);
					pSVar5 = (Dictionary<object, object>)this._pendingTimeoutCallbacks;
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					pSVar5.Remove((object)key);
					if (pIStack_80 != null) {
						(*pIStack_80[1].monitor)(pIStack_80[4].klass,pIStack_80[2].monitor);
					}
				}
				auStack_78.Dispose();
			}
		}
		return;
	}

	[Token(Token = "0x6005AF6")]
	[Address(RVA = "0x5D31BE0", Offset = "0x5D30BE0", VA = "0x5D31BE0")]
	private static string TrackRequest(float timeoutSec, Action<Dictionary<byte, object>> onResponse, [Optional] Action onTimeout)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$TrackRequest): clean
		ModeratorManager pAVar1;
		Dictionary<object, object> pSVar2;
		Dictionary<string, float> pSVar3;
		String key;
		float value;
		Guid local_38;

		local_38 = Guid.NewGuid();
		key = local_38.ToString();
		pAVar1 = ModeratorManager._instance;
		if ((pAVar1 != null) &&(pSVar2 = (Dictionary<object, object>)pAVar1._pendingCallbacks, pSVar2 != null)) {
			pSVar2.set_Item((object)key, (object)onResponse) ;
			pAVar1 = ModeratorManager._instance;
			if (pAVar1 != null) {
				pSVar3 = pAVar1._pendingTimestamps;
				value = Time.realtimeSinceStartup;
				if (pSVar3 != null) {
					pSVar3.set_Item((object)key, value);
					pAVar1 = ModeratorManager._instance;
					if ((pAVar1 != null) &&(pSVar3 = pAVar1._pendingTimeouts, pSVar3 != null)) {
						pSVar3.set_Item((object)key, timeoutSec);
						if (onTimeout != null) {
							pAVar1 = ModeratorManager._instance;
							if ((pAVar1 == null) ||(pSVar2 = (Dictionary<object, object>)pAVar1._pendingTimeoutCallbacks, pSVar2 == null)) goto label_05e31d71;
							pSVar2.set_Item((object)key, (object)onTimeout);
						}
						return key;
					}
				}
			}
		}
	label_05e31d71: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005AF7")]
	[Address(RVA = "0x5D31D80", Offset = "0x5D30D80", VA = "0x5D31D80")]
	private static void RaiseModEvent(byte code, Dictionary<byte, object> data)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$RaiseModEvent): clean
		RaiseEventOptions __this;
		Int32[] pSVar1;
		Player pPVar2;

		__this = new RaiseEventOptions();
		pSVar1 = (Int32[])new int[1];
		pPVar2 = PhotonNetwork.LocalPlayer;
		if ((pPVar2 != null) && (pSVar1 != null)) {
			if ((int)pSVar1.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pSVar1[0] = pPVar2.actorNumber;
			if (__this != null) {
				__this.TargetActors = pSVar1;
				PhotonNetwork.RaiseEvent(code, (object)data, __this, (SendOptions)(SendOptions.SendReliable));
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005AF8")]
	[Address(RVA = "0x5D31EA0", Offset = "0x5D30EA0", VA = "0x5D31EA0")]
	private static void InvokeStatus(string text, [Optional] Action<string> localStatus)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$InvokeStatus): clean
		uint uVar1;
		Action<string> pSVar2;

		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar2 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,text,pSVar2.method);
		}
		if (localStatus == null) {
			return;
		}
		(*(code)localStatus.invoke_impl)(localStatus.method_code,text,localStatus.method);
		return;
	}

	[Token(Token = "0x6005AF9")]
	[Address(RVA = "0x5D31F50", Offset = "0x5D30F50", VA = "0x5D31F50")]
	private static Dictionary<byte, object>[] GetResponseEntries(Dictionary<byte, object> data, byte entriesKey)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$GetResponseEntries): 7 lines keep C-only constructs
		byte bVar1;
		bool bVar2;
		object pIVar3;
		Dictionary<byte, object>[] pSVar4;
		ulong uVar5;
		object pIVar6;
		Il2CppClass pIVar7;
		byte bVar8;
		ulong uVar9;
		long lVar10;
		object obj;

		if (data == null) {
	label_05e3213f: ;
			throw new NullReferenceException();
		}
		bVar2 = data.ContainsKey(entriesKey);
		if (bVar2) {
			pIVar3 = data.get_Item(entriesKey);
			pSVar4 = (Dictionary<byte, object>[])(pIVar3 as Dictionary<byte, object>[]) ;
			if (pSVar4 != null) {
				return pSVar4;
			}
			pIVar3 = (pIVar3 as object[]);
			if (pIVar3 != null) {
				pSVar4 = (Dictionary<byte, object>[])new Dictionary<byte, object>[*(uint)&pIVar3[1].monitor];
				if ((int)pIVar3[1].monitor < 1) {
					return pSVar4;
				}
				if (pSVar4 != null) {
					uVar5 = (ulong)pIVar3[1].monitor & 0xffffffff;
					lVar10 = 0x20;
					uVar9 = 0;
					do {
						if (uVar5 <= uVar9) goto label_05e3213a;
						obj = *(object*)((long)&pIVar3.klass + lVar10);
						if (obj == null) {
	label_05e320f0: ;
							obj = null;
						}
						else {
							pIVar7 = obj.klass;
							bVar1 = (pIVar7._2).typeHierarchyDepth;
							bVar8 = (typeof(Dictionary<byte, object>)._2).typeHierarchyDepth;
							if ((bVar8 <= bVar1) &&((pIVar7._2).typeHierarchy[(ulong)bVar8 - 1] ==typeof(Dictionary<byte, object>))) {
								pIVar6 = il2cpp_vm_Object_IsInst(obj, (((pSVar4.obj).klass)._1).element_class);
								if (pIVar6 == null) {
									pIVar3 = new ArrayTypeMismatchException();
									throw pIVar3;
								}
								pIVar7 = obj.klass;
								bVar8 = (typeof(Dictionary<byte, object>)._2).typeHierarchyDepth;
								if (bVar8 <= (pIVar7._2).typeHierarchyDepth) goto label_05e320a8;
								goto label_05e320f0;
							}
							if (bVar1 < bVar8) goto label_05e320f0;
	label_05e320a8: ;
							if ((pIVar7._2).typeHierarchy[(ulong)bVar8 - 1] !=typeof(Dictionary<byte, object>)) goto label_05e320f0;
						}
						if ((uint)pSVar4.Length <= uVar9) {
	label_05e3213a: ;
							throw new IndexOutOfRangeException();
						}
						*(object*)((long)pSVar4.m_Items + lVar10 + -0x20) = obj;
						uVar9 = uVar9 + 1;
						uVar5 = (ulong)*(uint)&pIVar3[1].monitor;
						lVar10 = lVar10 + 8;
						if ((long)(int)*(uint)&pIVar3[1].monitor <= (long)uVar9) {
							return pSVar4;
						}
					} while(true);
				}
				goto label_05e3213f;
			}
		}
		return null;
	}

	[Token(Token = "0x6005AFA")]
	[Address(RVA = "0x5D32160", Offset = "0x5D31160", VA = "0x5D32160")]
	private static int ReadInt(Dictionary<byte, object> data, byte key, int defaultValue = 0)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$ReadInt): 10 lines keep C-only constructs
		String pSVar1;
		bool bVar2;
		uint in_EAX;
		object pIVar3;
		String s;
		uint puVar4;
		short psVar5;
		byte pbVar6;
		ulong uStack_28;

		uStack_28._0_4_ = in_EAX;
		uStack_28 = (ulong)(uint)uStack_28;
		if (data != null) {
			bVar2 = data.ContainsKey(key);
			if (bVar2) {
				pIVar3 = data.get_Item(key);
				if (pIVar3 != null) {
					s = (String)data.get_Item(key);
					if (s != null) {
						pSVar1 = s.klass;
						if (pSVar1 == g_data_07556710) {
							puVar4 = il2cpp_vm_Object_Unbox((object)s);
							defaultValue = *puVar4;
						}
						else if (pSVar1 == g_data_07556730) {
							puVar4 = (uint)il2cpp_runtime_helper_02abd3a0(s);
							defaultValue = *puVar4;
						}
						else if (pSVar1 == g_data_07556700) {
							psVar5 = (short)il2cpp_runtime_helper_02abd3a0(s);
							defaultValue = (int32_t)*psVar5;
						}
						else if (pSVar1 == g_data_075566e0) {
							pbVar6 = (byte)il2cpp_runtime_helper_02abd3a0(s);
							defaultValue = (int32_t)*pbVar6;
						}
						else if (pSVar1 == g_data_07556758) {
							bVar2 = Int32.TryParse(s, (int)((long)&uStack_28 + 4));
							if (bVar2) {
							}
						}
					}
				}
			}
		}
		return defaultValue;
	}

	[Token(Token = "0x6005AFB")]
	[Address(RVA = "0x5D32280", Offset = "0x5D31280", VA = "0x5D32280")]
	private static PlayerEntry ParsePlayerEntry(Dictionary<byte, object> entry)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$ParsePlayerEntry): 6 lines keep C-only constructs
		bool bVar1;
		PlayerEntry __this;
		String pSVar2;
		object obj;
		int piVar3;
		int iVar4;

		__this = new PlayerEntry();
		if (entry == null) {
	label_05e324b9: ;
			throw new NullReferenceException();
		}
		bVar1 = entry.ContainsKey(0);
		if (bVar1) {
			pSVar2 = (String)entry.get_Item(0);
			if (pSVar2 == null) {
				pSVar2 = null;
			}
			else if (pSVar2.klass != g_data_07556758) goto label_05e32422;
		}
		else {
			pSVar2 = g_data_07556758.static_fields.Empty;
		}
		if (__this == null) goto label_05e324b9;
		__this.SessionId = pSVar2;
		bVar1 = entry.ContainsKey(1);
		if (bVar1) {
			pSVar2 = (String)entry.get_Item(1);
			if (pSVar2 == null) {
				pSVar2 = null;
			}
			else if (pSVar2.klass != g_data_07556758) goto label_05e32422;
		}
		else {
			pSVar2 = g_data_07556758.static_fields.Empty;
		}
		__this.IPAddress = pSVar2;
		bVar1 = entry.ContainsKey(2);
		if (bVar1) {
			pSVar2 = (String)entry.get_Item(2);
			if (pSVar2 == null) {
				pSVar2 = null;
			}
			else if (pSVar2.klass != g_data_07556758) {
	label_05e32422: ;
				throw new InvalidCastException();
			}
		}
		else {
			pSVar2 = g_data_07556758.static_fields.Empty;
		}
		__this.Username = pSVar2;
		bVar1 = entry.ContainsKey(3);
		iVar4 = 0;
		if (bVar1) {
			obj = entry.get_Item(3);
			if (obj == null) goto label_05e324b9;
			if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
				throw new InvalidCastException();
			}
			piVar3 = il2cpp_vm_Object_Unbox(obj);
			iVar4 = *piVar3;
		}
		__this.ActorNumber = iVar4;
		return __this;
	}

	[Token(Token = "0x6005AFC")]
	[Address(RVA = "0x5D324E0", Offset = "0x5D314E0", VA = "0x5D324E0")]
	public static void RequestPlayerList([Optional] Action<string> localStatus)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$RequestPlayerList): 2 lines keep C-only constructs
		Action<string> pSVar1;
		Action<string> pSVar2;
		ModeratorManager.c__DisplayClass85_0 __this;
		Action<Dictionary<byte, object>> __this_00;
		Action __this_01;
		String pSVar3;
		Dictionary<byte, object> __this_02;

		__this = new ModeratorManager.c__DisplayClass85_0();
		if (__this == null) goto label_05e32746;
		__this.localStatus = localStatus;
		pSVar1 = __this.localStatus;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548558 == false) goto label_05e32700;
	label_05e325de: ;
			pSVar3 = "Sending request...";
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e325ef;
	label_05e32724: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		else {
			if (Il2CppMethodInitialized_07548558 != false) goto label_05e325de;
	label_05e32700: ;
			pSVar3 = "Sending request...";
			Il2CppMethodInitialized_07548558 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e32724;
	label_05e325ef: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar3,pSVar2.method);
		}
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar3,pSVar1.method);
		}
		__this_00 = new Action<Dictionary<byte, object>>((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass85_0_RequestPlayerList_b__0);
		__this_01 = new Action((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass85_0_RequestPlayerList_b__1);
		pSVar3 = ModeratorManager.TrackRequest(5.0, __this_00, __this_01);
		__this_02 = new Dictionary<byte, object>();
		if (__this_02 != null) {
			__this_02.Add(0, (object)pSVar3);
			ModeratorManager.RaiseModEvent(0xb6, __this_02);
			return;
		}
	label_05e32746: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005AFD")]
	[Address(RVA = "0x5D32760", Offset = "0x5D31760", VA = "0x5D32760")]
	private static void PopulatePlayerList(Dictionary<byte, object> data)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$PopulatePlayerList): clean
		uint uVar1;
		uint uVar2;
		Dictionary<int, object> pSVar3;
		Dictionary<byte, object> entry;
		Action pSVar4;
		Dictionary<byte, object>[] pSVar5;
		ulong uVar6;
		PlayerEntry value;
		ulong uVar7;

		if (Il2CppMethodInitialized_0754855d == false) {
			Il2CppMethodInitialized_0754855d = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07547eef == false) {
			Il2CppMethodInitialized_07547eef = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		else {
			pSVar3 = *(Dictionary<int, object>*)((long)(typeof(ModeratorManager)).static_fields + 0x10);
		}
		if (pSVar3 == null) {
	label_05e329c3: ;
			throw new NullReferenceException();
		}
		pSVar3.Clear();
		pSVar5 = ModeratorManager.GetResponseEntries(data, 1);
		if ((pSVar5 != null) &&(0 < (int)pSVar5.Length)) {
			uVar6 = pSVar5.Length & 0xffffffff;
			uVar7 = 0;
			do {
				if (uVar6 <= uVar7) {
					throw new IndexOutOfRangeException();
				}
				entry = pSVar5[uVar7];
				if (entry != null) {
					value = ModeratorManager.ParsePlayerEntry(entry);
					if (value == null) goto label_05e329c3;
					if (0 < value.ActorNumber) {
						if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
							if (Il2CppMethodInitialized_07547eef != false) goto label_05e3291d;
	label_05e3293d: ;
							Il2CppMethodInitialized_07547eef = true;
							uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
						}
						else {
							if (Il2CppMethodInitialized_07547eef == false) goto label_05e3293d;
	label_05e3291d: ;
							uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						pSVar3 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
						if (pSVar3 == null) goto label_05e329c3;
						uVar2 = value.ActorNumber;
						pSVar3.set_Item(uVar2, (object)value);
					}
				}
				uVar7 = uVar7 + 1;
				uVar2 = (uint)pSVar5.Length;
				uVar6 = (ulong)uVar2;
			} while ((long)uVar7 < (long)(int)uVar2);
		}
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = ModeratorManager.PlayerListChanged;
		}
		else {
			pSVar4 = ModeratorManager.PlayerListChanged;
		}
		if (pSVar4 == null) {
			return;
		}
		(*(code)pSVar4.invoke_impl)(pSVar4.method_code,pSVar4.method);
		return;
	}

	[Token(Token = "0x6005AFE")]
	[Address(RVA = "0x5D30770", Offset = "0x5D2F770", VA = "0x5D30770")]
	private static void HandlePlayerListNotification(EventData photonEvent)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$HandlePlayerListNotification): 5 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		ParameterDictionary __this;
		Dictionary<int, object> pSVar3;
		Action pSVar4;
		ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields pEVar5;
		bool bVar6;
		Dictionary<byte, object> pSVar7;
		Dictionary<byte, object>[] pSVar8;
		ulong uVar9;
		PlayerEntry value;
		ulong uVar10;
		ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o EVar11;
		System_Collections_Generic_KeyValuePair_K__V__o SVar12;
		ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields EStack_48;
		byte puStack_30;

		EStack_48._index = 0;
		EStack_48._4_4_ = 0;
		pSVar7 = new Dictionary<byte, object>();
		if ((photonEvent == null) ||(__this = photonEvent.Parameters, __this == null)) goto label_05e30ad6;
		EVar11 = __this.GetEnumerator();
		EStack_48._dict = EVar11._dict;
		puStack_30 = (byte)&EStack_48;
		EStack_48._index = EVar11._index;
		pEVar5 = &EStack_48;
		if (pSVar7 == null) {
			bVar6 = EStack_48.MoveNext();
			if (bVar6) {
				EStack_48.Current;
				throw new NullReferenceException();
			}
		}
		else {
			while (true) {
				puStack_30 = (byte)pEVar5;
				bVar6 = EStack_48.MoveNext();
				if (!(bVar6)) break;
				SVar12 = EStack_48.Current;
				pSVar7.set_Item((uint8_t)SVar12.key, SVar12.value);
				pEVar5 = (ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields)puStack_30;
			}
		}
		EStack_48.Dispose();
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07547eef != false) goto label_05e30914;
	label_05e30943: ;
			Il2CppMethodInitialized_07547eef = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07547eef == false) goto label_05e30943;
	label_05e30914: ;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		else {
			pSVar3 = *(Dictionary<int, object>*)((long)(typeof(ModeratorManager)).static_fields + 0x10);
		}
		if (pSVar3 != null) {
			pSVar3.Clear();
			pSVar8 = ModeratorManager.GetResponseEntries(pSVar7, 0);
			if ((pSVar8 != null) &&(0 < (int)pSVar8.Length)) {
				uVar9 = pSVar8.Length & 0xffffffff;
				uVar10 = 0;
				do {
					if (uVar9 <= uVar10) {
						throw new IndexOutOfRangeException();
					}
					pSVar7 = pSVar8[uVar10];
					if (pSVar7 != null) {
						value = ModeratorManager.ParsePlayerEntry(pSVar7);
						if (value == null) goto label_05e30ad6;
						if (0 < value.ActorNumber) {
							if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
								if (Il2CppMethodInitialized_07547eef != false) goto label_05e30a4d;
	label_05e30a6d: ;
								Il2CppMethodInitialized_07547eef = true;
								uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
							}
							else {
								if (Il2CppMethodInitialized_07547eef == false) goto label_05e30a6d;
	label_05e30a4d: ;
								uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
							}
							if (uVar1 == 0) {
							}
							pSVar3 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
							if (pSVar3 == null) goto label_05e30ad6;
							uVar2 = value.ActorNumber;
							pSVar3.set_Item(uVar2, (object)value);
						}
					}
					uVar10 = uVar10 + 1;
					uVar2 = (uint)pSVar8.Length;
					uVar9 = (ulong)uVar2;
				} while ((long)uVar10 < (long)(int)uVar2);
			}
			pSVar4 = ModeratorManager.PlayerListChanged;
			if (pSVar4 != null) {
				(*(code)pSVar4.invoke_impl)(pSVar4.method_code,pSVar4.method);
			}
			return;
		}
	label_05e30ad6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005AFF")]
	[Address(RVA = "0x5D30B60", Offset = "0x5D2FB60", VA = "0x5D30B60")]
	private static void HandlePlayerJoinNotification(EventData photonEvent)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$HandlePlayerJoinNotification): 5 lines keep C-only constructs
		ParameterDictionary __this;
		Dictionary<int, object> __this_00;
		Action pSVar1;
		ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields pEVar2;
		bool bVar3;
		Dictionary<byte, object> pSVar4;
		Dictionary<byte, object>[] pSVar5;
		PlayerEntry value;
		ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o EVar6;
		System_Collections_Generic_KeyValuePair_K__V__o SVar7;
		ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields local_48;
		byte local_30;

		local_48._index = 0;
		local_48._4_4_ = 0;
		pSVar4 = new Dictionary<byte, object>();
		if ((photonEvent == null) ||(__this = photonEvent.Parameters, __this == null)) goto label_05e30e34;
		EVar6 = __this.GetEnumerator();
		local_48._dict = EVar6._dict;
		local_30 = (byte)&local_48;
		local_48._index = EVar6._index;
		pEVar2 = &local_48;
		if (pSVar4 == null) {
			bVar3 = local_48.MoveNext();
			if (bVar3) {
				local_48.Current;
				throw new NullReferenceException();
			}
		}
		else {
			while (true) {
				local_30 = (byte)pEVar2;
				bVar3 = local_48.MoveNext();
				if (!(bVar3)) break;
				SVar7 = local_48.Current;
				pSVar4.set_Item((uint8_t)SVar7.key, SVar7.value);
				pEVar2 = (ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields)local_30;
			}
		}
		local_48.Dispose();
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar5 = ModeratorManager.GetResponseEntries(pSVar4, 0);
		if (pSVar5 == null) {
			return;
		}
		if (pSVar5.Length == 0) {
			return;
		}
		if ((int)pSVar5.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pSVar4 = pSVar5[0];
		if (pSVar4 == null) {
			return;
		}
		value = ModeratorManager.ParsePlayerEntry(pSVar4);
		if (value == null) goto label_05e30e34;
		if (value.ActorNumber < 1) goto label_05e30da6;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07547eef != false) goto label_05e30d6d;
	label_05e30df5: ;
			Il2CppMethodInitialized_07547eef = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e30d7d;
	label_05e30e18: ;
			__this_00 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		else {
			if (Il2CppMethodInitialized_07547eef == false) goto label_05e30df5;
	label_05e30d6d: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e30e18;
	label_05e30d7d: ;
			__this_00 = (Dictionary<int, object>)ModeratorManager._ActivePlayers_k__BackingField;
		}
		if (__this_00 != null) {
			__this_00.set_Item(value.ActorNumber, (object)value);
	label_05e30da6: ;
			pSVar1 = ModeratorManager.PlayerListChanged;
			if (pSVar1 != null) {
				(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
			}
			return;
		}
	label_05e30e34: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B00")]
	[Address(RVA = "0x5D329D0", Offset = "0x5D319D0", VA = "0x5D329D0")]
	public static void KickPlayer(int actorNumber, [Optional] Action<string> localStatus)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$KickPlayer): 2 lines keep C-only constructs
		Action<string> pSVar1;
		Action<string> pSVar2;
		ModeratorManager.c__DisplayClass89_0 __this;
		Action<Dictionary<byte, object>> __this_00;
		Action __this_01;
		String pSVar3;
		Dictionary<byte, object> __this_02;
		object pIVar4;
		int[] aiStack_34 = new int[3];

		__this = new ModeratorManager.c__DisplayClass89_0();
		if (__this == null) goto label_05e32cbe;
		__this.localStatus = localStatus;
		pSVar1 = __this.localStatus;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548558 == false) goto label_05e32c78;
	label_05e32ad5: ;
			pSVar3 = "Sending request...";
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e32ae6;
	label_05e32c9c: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		else {
			if (Il2CppMethodInitialized_07548558 != false) goto label_05e32ad5;
	label_05e32c78: ;
			pSVar3 = "Sending request...";
			Il2CppMethodInitialized_07548558 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e32c9c;
	label_05e32ae6: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar3,pSVar2.method);
		}
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar3,pSVar1.method);
		}
		__this_00 = new Action<Dictionary<byte, object>>((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass89_0_KickPlayer_b__0);
		__this_01 = new Action((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass89_0_KickPlayer_b__1);
		pSVar3 = ModeratorManager.TrackRequest(5.0, __this_00, __this_01);
		__this_02 = new Dictionary<byte, object>();
		if (__this_02 != null) {
			__this_02.Add(0, (object)pSVar3);
			aiStack_34[2] = 1;
			pIVar4 = (object)(aiStack_34 + 2);
			__this_02.Add(1, pIVar4);
			aiStack_34[1] = 0;
			pIVar4 = (object)(aiStack_34 + 1);
			__this_02.Add(2, pIVar4);
			aiStack_34[0] = actorNumber;
			pIVar4 = (object)aiStack_34;
			__this_02.Add(3, pIVar4);
			ModeratorManager.RaiseModEvent(0xb4, __this_02);
			return;
		}
	label_05e32cbe: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B01")]
	[Address(RVA = "0x5D32CE0", Offset = "0x5D31CE0", VA = "0x5D32CE0")]
	public static void RoomBan(int actorNumber, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$RoomBan): 2 lines keep C-only constructs
		Action<string> pSVar1;
		Action<string> pSVar2;
		ModeratorManager.c__DisplayClass90_0 __this;
		Action<Dictionary<byte, object>> __this_00;
		Action __this_01;
		String pSVar3;
		Dictionary<byte, object> __this_02;
		object pIVar4;
		int[] local_3c = new int[3];

		__this = new ModeratorManager.c__DisplayClass90_0();
		if (__this == null) goto label_05e3303d;
		__this.localStatus = localStatus;
		pSVar1 = __this.localStatus;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548558 == false) goto label_05e32fe8;
	label_05e32df1: ;
			pSVar3 = "Sending request...";
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e32e01;
	label_05e33012: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		else {
			if (Il2CppMethodInitialized_07548558 != false) goto label_05e32df1;
	label_05e32fe8: ;
			pSVar3 = "Sending request...";
			Il2CppMethodInitialized_07548558 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e33012;
	label_05e32e01: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar3,pSVar2.method);
		}
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar3,pSVar1.method);
		}
		__this_00 = new Action<Dictionary<byte, object>>((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass90_0_RoomBan_b__0);
		__this_01 = new Action((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass90_0_RoomBan_b__1);
		pSVar3 = ModeratorManager.TrackRequest(5.0, __this_00, __this_01);
		__this_02 = new Dictionary<byte, object>();
		if (__this_02 != null) {
			__this_02.Add(0, (object)pSVar3);
			local_3c[2] = ipBan | 2;
			pIVar4 = (object)(local_3c + 2);
			__this_02.Add(1, pIVar4);
			local_3c[1] = 0;
			pIVar4 = (object)(local_3c + 1);
			__this_02.Add(2, pIVar4);
			local_3c[0] = actorNumber;
			pIVar4 = (object)local_3c;
			__this_02.Add(3, pIVar4);
			if (reason == null) {
				reason = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			__this_02.Add(4, (object)reason);
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			}
			ModeratorManager.RaiseModEvent(0xb4, __this_02);
			return;
		}
	label_05e3303d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B02")]
	[Address(RVA = "0x5D33060", Offset = "0x5D32060", VA = "0x5D33060")]
	public static void RoomBanPlayerEntry(PlayerEntry player, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$RoomBanPlayerEntry): 3 lines keep C-only constructs
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;
		bool bVar5;
		ModeratorManager.c__DisplayClass91_0 __this;
		Action<Dictionary<byte, object>> __this_00;
		Action __this_01;
		String pSVar6;
		Dictionary<byte, object> __this_02;
		object pIVar7;
		ModeratorManager.c__DisplayClass91_0 targetAddress;
		int local_3c;
		int local_38;
		uint local_34;

		__this = new ModeratorManager.c__DisplayClass91_0();
		if (__this == null) goto label_05e335bd;
		targetAddress = &__this.fields;
		__this.localStatus = localStatus;
		if (player == null) {
			pSVar2 = targetAddress.localStatus;
			pSVar4 = "Invalid player entry.";
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
				pSVar4 = "Invalid player entry.";
			}
	joined_r0x05e3328e: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
				pSVar3 = ModeratorManager.StatusMessage;
			}
			else {
				pSVar3 = ModeratorManager.StatusMessage;
			}
			if (pSVar3 != null) {
				(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
			}
			if (pSVar2 == null) {
				return;
			}
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
			return;
		}
		if (ipBan) {
			bVar5 = String.IsNullOrEmpty(player.IPAddress);
			if (bVar5) {
				pSVar2 = targetAddress.localStatus;
				pSVar4 = "Player has no IP address to ban.";
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
					pSVar4 = "Player has no IP address to ban.";
				}
				goto joined_r0x05e3328e;
			}
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07547eed == false) goto label_05e3358b;
	label_05e332df: ;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07547eed != false) goto label_05e332df;
	label_05e3358b: ;
				Il2CppMethodInitialized_07547eed = true;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			local_3c = (uint)(ModeratorManager._IsAuthenticated_k__BackingField == false) * 2 + 2;
			pSVar4 = player.IPAddress;
			pSVar2 = targetAddress.localStatus;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar5 = String.IsNullOrEmpty(player.SessionId);
			if (bVar5) {
				pSVar2 = targetAddress.localStatus;
				pSVar4 = "Player has no session ID to ban.";
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
					pSVar4 = "Player has no session ID to ban.";
				}
				goto joined_r0x05e3328e;
			}
			local_3c = 1;
			pSVar4 = player.SessionId;
			pSVar2 = targetAddress.localStatus;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar6 = "Sending request...";
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e33551;
	label_05e33379: ;
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e33379;
	label_05e33551: ;
			pSVar3 = ModeratorManager.StatusMessage;
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar6,pSVar3.method);
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar6,pSVar2.method);
		}
		__this_00 = new Action<Dictionary<byte, object>>((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass91_0_RoomBanPlayerEntry_b__0);
		__this_01 = new Action((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass91_0_RoomBanPlayerEntry_b__1);
		pSVar6 = ModeratorManager.TrackRequest(5.0, __this_00, __this_01);
		__this_02 = new Dictionary<byte, object>();
		if (__this_02 != null) {
			__this_02.Add(0, (object)pSVar6);
			local_34 = ipBan | 2;
			pIVar7 = (object)local_34;
			__this_02.Add(1, pIVar7);
			local_38 = local_3c;
			pIVar7 = (object)local_38;
			__this_02.Add(2, pIVar7);
			__this_02.Add(3, (object)pSVar4);
			if (reason == null) {
				reason = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			__this_02.Add(4, (object)reason);
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			}
			ModeratorManager.RaiseModEvent(0xb4, __this_02);
			return;
		}
	label_05e335bd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B03")]
	[Address(RVA = "0x5D335E0", Offset = "0x5D325E0", VA = "0x5D335E0")]
	public static void RoomUnban(RoomBanEntry banEntry, [Optional] Action<string> localStatus, [Optional] string reason)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$RoomUnban): 2 lines keep C-only constructs
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		ModeratorManager.c__DisplayClass92_0 __this;
		Action<Dictionary<byte, object>> __this_00;
		Action __this_01;
		String pSVar4;
		String value;
		Dictionary<byte, object> __this_02;
		object pIVar5;
		int iVar6;
		int local_44;
		uint local_40;
		int local_3c;
		String local_38;

		__this = new ModeratorManager.c__DisplayClass92_0();
		if (__this == null) goto label_05e339ff;
		__this.localStatus = localStatus;
		pSVar2 = __this.localStatus;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548558 != false) goto label_05e336ea;
	label_05e33825: ;
			pSVar4 = "Sending request...";
			Il2CppMethodInitialized_07548558 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e336fb;
	label_05e33849: ;
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			if (Il2CppMethodInitialized_07548558 == false) goto label_05e33825;
	label_05e336ea: ;
			pSVar4 = "Sending request...";
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e33849;
	label_05e336fb: ;
			pSVar3 = ModeratorManager.StatusMessage;
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
		}
		__this_00 = new Action<Dictionary<byte, object>>((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass92_0_RoomUnban_b__0);
		__this_01 = new Action((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass92_0_RoomUnban_b__1);
		pSVar4 = ModeratorManager.TrackRequest(5.0, __this_00, __this_01);
		if (banEntry == null) goto label_05e339ff;
		iVar6 = banEntry.ActorNumber;
		local_38 = reason;
		if (banEntry.IsIPBan == false) {
			if (0 < iVar6) goto label_05e33873;
			value = banEntry.SessionId;
			iVar6 = 1;
		}
		else if (iVar6 < 1) {
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07547eed != false) goto label_05e337d7;
	label_05e339cd: ;
				Il2CppMethodInitialized_07547eed = true;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07547eed == false) goto label_05e339cd;
	label_05e337d7: ;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			iVar6 = (uint)(ModeratorManager._IsAuthenticated_k__BackingField == false) * 2 + 2;
			value = banEntry.IPAddress;
		}
		else {
	label_05e33873: ;
			local_3c = iVar6;
			value = (String)(object)local_3c;
			iVar6 = 0;
		}
		__this_02 = new Dictionary<byte, object>();
		if (__this_02 != null) {
			__this_02.Add(0, (object)pSVar4);
			local_40 = banEntry.IsIPBan == false ^ 5;
			pIVar5 = (object)local_40;
			__this_02.Add(1, pIVar5);
			local_44 = iVar6;
			pIVar5 = (object)local_44;
			__this_02.Add(2, pIVar5);
			__this_02.Add(3, (object)value);
			pSVar4 = local_38;
			if (local_38 == null) {
				pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			__this_02.Add(4, (object)pSVar4);
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			}
			ModeratorManager.RaiseModEvent(0xb4, __this_02);
			return;
		}
	label_05e339ff: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B04")]
	[Address(RVA = "0x5D33A20", Offset = "0x5D32A20", VA = "0x5D33A20")]
	public static void RequestRoomBanList([Optional] Action<string> localStatus)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$RequestRoomBanList): clean


		ModeratorManager.RequestRoomBanList(0, 0x32, localStatus);
		return;
	}

	[Token(Token = "0x6005B05")]
	[Address(RVA = "0x5D33A70", Offset = "0x5D32A70", VA = "0x5D33A70")]
	public static void RequestRoomBanList(int startIndex, [Optional][DefaultParameterValue(50)] int amount, [Optional] Action<string> localStatus)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$RequestRoomBanList): 3 lines keep C-only constructs
		Action<string> pSVar1;
		Action<string> pSVar2;
		ModeratorManager.c__DisplayClass94_0 __this;
		Action<Dictionary<byte, object>> __this_00;
		Action __this_01;
		String pSVar3;
		Dictionary<byte, object> __this_02;
		object pIVar4;
		int iVar5;
		int local_38;
		int local_34;

		__this = new ModeratorManager.c__DisplayClass94_0();
		if (__this == null) goto label_05e33d4c;
		__this.localStatus = localStatus;
		pSVar1 = __this.localStatus;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548558 == false) goto label_05e33d06;
	label_05e33b77: ;
			pSVar3 = "Sending request...";
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e33b88;
	label_05e33d2a: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		else {
			if (Il2CppMethodInitialized_07548558 != false) goto label_05e33b77;
	label_05e33d06: ;
			pSVar3 = "Sending request...";
			Il2CppMethodInitialized_07548558 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e33d2a;
	label_05e33b88: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar3,pSVar2.method);
		}
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar3,pSVar1.method);
		}
		__this_00 = new Action<Dictionary<byte, object>>((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass94_0_RequestRoomBanList_b__0);
		__this_01 = new Action((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass94_0_RequestRoomBanList_b__1);
		pSVar3 = ModeratorManager.TrackRequest(5.0, __this_00, __this_01);
		__this_02 = new Dictionary<byte, object>();
		if (__this_02 != null) {
			__this_02.Add(0, (object)pSVar3);
			local_34 = 0;
			if (0 < startIndex) {
				local_34 = startIndex;
			}
			pIVar4 = (object)local_34;
			__this_02.Add(1, pIVar4);
			iVar5 = 1;
			if (1 < amount) {
				iVar5 = amount;
			}
			_local_38 = CONCAT44(local_34, iVar5);
			pIVar4 = (object)local_38;
			__this_02.Add(2, pIVar4);
			ModeratorManager.RaiseModEvent(0xb5, __this_02);
			return;
		}
	label_05e33d4c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B06")]
	[Address(RVA = "0x5D33D70", Offset = "0x5D32D70", VA = "0x5D33D70")]
	private static RoomBanEntry[] ParseRoomBanEntries(Dictionary<byte, object>[] entries)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$ParseRoomBanEntries): 21 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		Dictionary<byte, object> __this;
		MethodInfo pMVar5;
		bool bVar6;
		List<RoomBanEntry> __this_00;
		ulong uVar7;
		String pSVar8;
		int piVar9;
		RoomBanEntry __this_01;
		RoomBanEntry[] pAVar10;
		Il2CppClass pIVar11;
		String value;
		ulong uVar12;
		int local_64;
		String local_60;
		int local_54;
		String local_50;
		String local_48;

		pMVar5 = MethodInfo_System_Array_Empty_RoomBanEntry;
		if (entries == null) {
			if ((MethodInfo_System_Array_Empty_RoomBanEntry.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_RoomBanEntry);
				pIVar11 = *(Il2CppClass*)((long)(pMVar5.field7_0x38).methodMetadataHandle + 0x10);
				bVar2 = (pIVar11._2).bitflags1;
			}
			else {
				pIVar11 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_RoomBanEntry.field7_0x38).methodMetadataHandle + 0x10) ;
				bVar2 = (pIVar11._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
				uVar4 = (pIVar11._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar4 = (pIVar11._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
				pIVar11 = (pMVar5.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar11._2).bitflags1;
			}
			else {
				pIVar11 = (pMVar5.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar11._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
			}
			return *(RoomBanEntry[]*)pIVar11.static_fields;
		}
		__this_00 = new List<RoomBanEntry>();
		if (0 < (int)entries.Length) {
			uVar7 = entries.Length & 0xffffffff;
			uVar12 = 0;
			do {
				if (uVar7 <= uVar12) {
					throw new IndexOutOfRangeException();
				}
				__this = entries[uVar12];
				if (__this != null) {
					bVar6 = __this.ContainsKey(0);
					if (bVar6) {
						pSVar8 = (String)__this.get_Item(0);
						if (pSVar8 == null) {
							local_50 = null;
						}
						else {
							if ((Il2CppClass)pSVar8.klass != g_data_07556758) goto label_05e34327;
							local_50 = pSVar8;
						}
					}
					else {
						local_50 = *(String*)g_data_07556758.static_fields;
					}
					bVar6 = __this.ContainsKey(1);
					if (bVar6) {
						pSVar8 = (String)__this.get_Item(1);
						if (pSVar8 == null) {
							local_60 = null;
						}
						else {
							if ((Il2CppClass)pSVar8.klass != g_data_07556758) goto label_05e34327;
							local_60 = pSVar8;
						}
					}
					else {
						local_60 = *(String*)g_data_07556758.static_fields;
					}
					bVar6 = __this.ContainsKey(2);
					if (bVar6) {
						pSVar8 = (String)__this.get_Item(2);
						if (pSVar8 == null) {
							local_48 = null;
						}
						else {
							if ((Il2CppClass)pSVar8.klass != g_data_07556758) goto label_05e34327;
							local_48 = pSVar8;
						}
					}
					else {
						local_48 = *(String*)g_data_07556758.static_fields;
					}
					bVar6 = __this.ContainsKey(3);
					local_64 = 0;
					local_54 = 0;
					if (bVar6) {
						pSVar8 = (String)__this.get_Item(3);
						if (pSVar8 == null) goto label_05e3431a;
						if ((((Il2CppClass)pSVar8.klass)._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05e34327;
						piVar9 = il2cpp_vm_Object_Unbox((object)pSVar8);
						local_54 = *piVar9;
					}
					bVar6 = __this.ContainsKey(4);
					if (bVar6) {
						pSVar8 = (String)__this.get_Item(4);
						if (pSVar8 == null) goto label_05e3431a;
						if ((((Il2CppClass)pSVar8.klass)._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
	label_05e34327: ;
							throw new InvalidCastException();
						}
						piVar9 = il2cpp_vm_Object_Unbox((object)pSVar8);
						local_64 = *piVar9;
					}
					bVar6 = __this.ContainsKey(6);
					if (bVar6) {
						pSVar8 = (String)__this.get_Item(6);
						if (pSVar8 == null) {
							pSVar8 = null;
						}
						else if ((Il2CppClass)pSVar8.klass != g_data_07556758) {
							throw new InvalidCastException();
						}
					}
					else {
						pSVar8 = *(String*)g_data_07556758.static_fields;
					}
					value = local_60;
					if (local_64 != 1) {
						value = local_50;
					}
					bVar6 = String.IsNullOrEmpty(value);
					__this_01 = new RoomBanEntry();
					if (__this_01 == null) goto label_05e3431a;
					__this_01.SessionId = local_50;
					__this_01.IPAddress = local_60;
					__this_01.Username = local_48;
					__this_01.ActorNumber = local_54;
					__this_01.IsIPBan = local_64 == 1;
					__this_01.Reason = pSVar8;
					__this_01.CanUnban = 0 < local_54 || !bVar6;
					pMVar5 = MethodInfo_System_Collections_Generic_List_RoomBanEntry_Add;
					if (__this_00 == null) goto label_05e3431a;
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pAVar10 = __this_00._items;
					if (pAVar10 == null) goto label_05e3431a;
					uVar3 = __this_00._size;
					if (uVar3 < (uint)pAVar10.Length) {
						__this_00._size = uVar3 + 1;
						pAVar10[(int)uVar3] = __this_01;
					}
					else {
						__this_00.AddWithResize((object)__this_01);
					}
				}
				uVar12 = uVar12 + 1;
				uVar3 = (uint)entries.Length;
				uVar7 = (ulong)uVar3;
			} while ((long)uVar12 < (long)(int)uVar3);
		}
		if (__this_00 != null) {
			pAVar10 = (RoomBanEntry[])__this_00.ToArray();
			return pAVar10;
		}
	label_05e3431a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B07")]
	[Address(RVA = "0x5D34350", Offset = "0x5D33350", VA = "0x5D34350")]
	public static void RegionBan(int actorNumber, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$RegionBan): 2 lines keep C-only constructs
		Action<string> pSVar1;
		Action<string> pSVar2;
		ModeratorManager.c__DisplayClass96_0 __this;
		Action<Dictionary<byte, object>> __this_00;
		Action __this_01;
		String pSVar3;
		Dictionary<byte, object> __this_02;
		object pIVar4;
		int[] local_3c = new int[3];

		__this = new ModeratorManager.c__DisplayClass96_0();
		if (__this == null) goto label_05e346ad;
		__this.localStatus = localStatus;
		pSVar1 = __this.localStatus;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548558 == false) goto label_05e34658;
	label_05e34461: ;
			pSVar3 = "Sending request...";
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e34471;
	label_05e34682: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		else {
			if (Il2CppMethodInitialized_07548558 != false) goto label_05e34461;
	label_05e34658: ;
			pSVar3 = "Sending request...";
			Il2CppMethodInitialized_07548558 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e34682;
	label_05e34471: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar3,pSVar2.method);
		}
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar3,pSVar1.method);
		}
		__this_00 = new Action<Dictionary<byte, object>>((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass96_0_RegionBan_b__0);
		__this_01 = new Action((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass96_0_RegionBan_b__1);
		pSVar3 = ModeratorManager.TrackRequest(10.0, __this_00, __this_01);
		__this_02 = new Dictionary<byte, object>();
		if (__this_02 != null) {
			__this_02.Add(0, (object)pSVar3);
			local_3c[2] = ipBan | 2;
			pIVar4 = (object)(local_3c + 2);
			__this_02.Add(1, pIVar4);
			local_3c[1] = 0;
			pIVar4 = (object)(local_3c + 1);
			__this_02.Add(2, pIVar4);
			local_3c[0] = actorNumber;
			pIVar4 = (object)local_3c;
			__this_02.Add(3, pIVar4);
			if (reason == null) {
				reason = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			__this_02.Add(4, (object)reason);
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			}
			ModeratorManager.RaiseModEvent(0xb7, __this_02);
			return;
		}
	label_05e346ad: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B08")]
	[Address(RVA = "0x5D346D0", Offset = "0x5D336D0", VA = "0x5D346D0")]
	public static void RegionBanPlayerEntry(PlayerEntry player, bool ipBan, [Optional] Action<string> localStatus, [Optional] string reason)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$RegionBanPlayerEntry): 3 lines keep C-only constructs
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;
		bool bVar5;
		ModeratorManager.c__DisplayClass97_0 __this;
		Action<Dictionary<byte, object>> __this_00;
		Action __this_01;
		String pSVar6;
		Dictionary<byte, object> __this_02;
		object pIVar7;
		ModeratorManager.c__DisplayClass97_0 targetAddress;
		int local_3c;
		int local_38;
		uint local_34;

		__this = new ModeratorManager.c__DisplayClass97_0();
		if (__this == null) goto label_05e34c2d;
		targetAddress = &__this.fields;
		__this.localStatus = localStatus;
		if (player == null) {
			pSVar2 = targetAddress.localStatus;
			pSVar4 = "Invalid player entry.";
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
				pSVar4 = "Invalid player entry.";
			}
	joined_r0x05e348fe: ;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
				pSVar3 = ModeratorManager.StatusMessage;
			}
			else {
				pSVar3 = ModeratorManager.StatusMessage;
			}
			if (pSVar3 != null) {
				(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
			}
			if (pSVar2 == null) {
				return;
			}
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
			return;
		}
		if (ipBan) {
			bVar5 = String.IsNullOrEmpty(player.IPAddress);
			if (bVar5) {
				pSVar2 = targetAddress.localStatus;
				pSVar4 = "Player has no IP address to ban.";
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
					pSVar4 = "Player has no IP address to ban.";
				}
				goto joined_r0x05e348fe;
			}
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07547eed == false) goto label_05e34bfb;
	label_05e3494f: ;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07547eed != false) goto label_05e3494f;
	label_05e34bfb: ;
				Il2CppMethodInitialized_07547eed = true;
				uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			local_3c = (uint)(ModeratorManager._IsAuthenticated_k__BackingField == false) * 2 + 2;
			pSVar4 = player.IPAddress;
			pSVar2 = targetAddress.localStatus;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar5 = String.IsNullOrEmpty(player.SessionId);
			if (bVar5) {
				pSVar2 = targetAddress.localStatus;
				pSVar4 = "Player has no session ID to ban.";
				if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
					pSVar4 = "Player has no session ID to ban.";
				}
				goto joined_r0x05e348fe;
			}
			local_3c = 1;
			pSVar4 = player.SessionId;
			pSVar2 = targetAddress.localStatus;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar6 = "Sending request...";
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e34bc1;
	label_05e349e9: ;
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e349e9;
	label_05e34bc1: ;
			pSVar3 = ModeratorManager.StatusMessage;
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar6,pSVar3.method);
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar6,pSVar2.method);
		}
		__this_00 = new Action<Dictionary<byte, object>>((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass97_0_RegionBanPlayerEntry_b__0);
		__this_01 = new Action((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass97_0_RegionBanPlayerEntry_b__1);
		pSVar6 = ModeratorManager.TrackRequest(10.0, __this_00, __this_01);
		__this_02 = new Dictionary<byte, object>();
		if (__this_02 != null) {
			__this_02.Add(0, (object)pSVar6);
			local_34 = ipBan | 2;
			pIVar7 = (object)local_34;
			__this_02.Add(1, pIVar7);
			local_38 = local_3c;
			pIVar7 = (object)local_38;
			__this_02.Add(2, pIVar7);
			__this_02.Add(3, (object)pSVar4);
			if (reason == null) {
				reason = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			__this_02.Add(4, (object)reason);
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			}
			ModeratorManager.RaiseModEvent(0xb7, __this_02);
			return;
		}
	label_05e34c2d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B09")]
	[Address(RVA = "0x5D34C50", Offset = "0x5D33C50", VA = "0x5D34C50")]
	public static void RegionUnban(RegionBanEntry banEntry, [Optional] Action<string> localStatus, [Optional] string reason)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$RegionUnban): 7 lines keep C-only constructs
		Action<string> pSVar1;
		Action<string> pSVar2;
		uint in_EAX;
		ModeratorManager.c__DisplayClass98_0 __this;
		Action<Dictionary<byte, object>> __this_00;
		Action __this_01;
		String pSVar3;
		Dictionary<byte, object> __this_02;
		object pIVar4;
		ulong local_38;

		local_38._0_4_ = in_EAX;
		__this = new ModeratorManager.c__DisplayClass98_0();
		if (__this == null) goto label_05e34f88;
		__this.localStatus = localStatus;
		pSVar1 = __this.localStatus;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548558 == false) goto label_05e34f42;
	label_05e34d57: ;
			pSVar3 = "Sending request...";
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e34d68;
	label_05e34f66: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		else {
			if (Il2CppMethodInitialized_07548558 != false) goto label_05e34d57;
	label_05e34f42: ;
			pSVar3 = "Sending request...";
			Il2CppMethodInitialized_07548558 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e34f66;
	label_05e34d68: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar3,pSVar2.method);
		}
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar3,pSVar1.method);
		}
		__this_00 = new Action<Dictionary<byte, object>>((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass98_0_RegionUnban_b__0);
		__this_01 = new Action((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass98_0_RegionUnban_b__1);
		pSVar3 = ModeratorManager.TrackRequest(10.0, __this_00, __this_01);
		__this_02 = new Dictionary<byte, object>();
		if ((__this_02 != null) &&(__this_02.Add(0, (object)pSVar3), banEntry != null)) {
			local_38 = (ulong)CONCAT14(banEntry.IsIPBan == false, (undefined4)local_38) ^ 0x500000000;
			pIVar4 = (object)(((long)&local_38 + 4));
			__this_02.Add(1, pIVar4);
			local_38 = CONCAT44(local_38._4_4_, 3);
			pIVar4 = (object)local_38;
			__this_02.Add(2, pIVar4);
			__this_02.Add(3, (object)banEntry.TargetId);
			if (reason == null) {
				reason = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			__this_02.Add(4, (object)reason);
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			}
			ModeratorManager.RaiseModEvent(0xb7, __this_02);
			return;
		}
	label_05e34f88: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B0A")]
	[Address(RVA = "0x5D34FA0", Offset = "0x5D33FA0", VA = "0x5D34FA0")]
	public static void RequestRegionBanList([Optional] Action<string> localStatus)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$RequestRegionBanList): clean


		ModeratorManager.RequestRegionBanList(0, 0x32, localStatus);
		return;
	}

	[Token(Token = "0x6005B0B")]
	[Address(RVA = "0x5D34FF0", Offset = "0x5D33FF0", VA = "0x5D34FF0")]
	public static void RequestRegionBanList(int startIndex, [Optional][DefaultParameterValue(50)] int amount, [Optional] Action<string> localStatus)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$RequestRegionBanList): 3 lines keep C-only constructs
		Action<string> pSVar1;
		Action<string> pSVar2;
		ModeratorManager.c__DisplayClass100_0 __this;
		Action<Dictionary<byte, object>> __this_00;
		Action __this_01;
		String pSVar3;
		Dictionary<byte, object> __this_02;
		object pIVar4;
		int iVar5;
		int local_38;
		int local_34;

		__this = new ModeratorManager.c__DisplayClass100_0();
		if (__this == null) goto label_05e352cc;
		__this.localStatus = localStatus;
		pSVar1 = __this.localStatus;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548558 == false) goto label_05e35286;
	label_05e350f7: ;
			pSVar3 = "Sending request...";
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e35108;
	label_05e352aa: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		else {
			if (Il2CppMethodInitialized_07548558 != false) goto label_05e350f7;
	label_05e35286: ;
			pSVar3 = "Sending request...";
			Il2CppMethodInitialized_07548558 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e352aa;
	label_05e35108: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar3,pSVar2.method);
		}
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar3,pSVar1.method);
		}
		__this_00 = new Action<Dictionary<byte, object>>((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass100_0_RequestRegionBanList_b__0);
		__this_01 = new Action((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass100_0_RequestRegionBanList_b__1);
		pSVar3 = ModeratorManager.TrackRequest(15.0, __this_00, __this_01);
		__this_02 = new Dictionary<byte, object>();
		if (__this_02 != null) {
			__this_02.Add(0, (object)pSVar3);
			local_34 = 0;
			if (0 < startIndex) {
				local_34 = startIndex;
			}
			pIVar4 = (object)local_34;
			__this_02.Add(1, pIVar4);
			iVar5 = 1;
			if (1 < amount) {
				iVar5 = amount;
			}
			_local_38 = CONCAT44(local_34, iVar5);
			pIVar4 = (object)local_38;
			__this_02.Add(2, pIVar4);
			ModeratorManager.RaiseModEvent(0xb8, __this_02);
			return;
		}
	label_05e352cc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B0C")]
	[Address(RVA = "0x5D352F0", Offset = "0x5D342F0", VA = "0x5D352F0")]
	private static RegionBanEntry[] ParseRegionBanEntries(Dictionary<byte, object>[] entries)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$ParseRegionBanEntries): 19 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		Dictionary<byte, object> __this;
		MethodInfo pMVar5;
		bool bVar6;
		List<RegionBanEntry> __this_00;
		ulong uVar7;
		String pSVar8;
		object obj;
		int piVar9;
		String pSVar10;
		String pSVar11;
		String pSVar12;
		RegionBanEntry __this_01;
		RegionBanEntry[] pAVar13;
		Il2CppClass pIVar14;
		int iVar15;
		ulong uVar16;

		if (Il2CppMethodInitialized_0754856c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RegionBanEntry_Add) ;
			Il2CppMethodInitialized_0754856c = true;
		}
		pMVar5 = MethodInfo_System_Array_Empty_RegionBanEntry;
		if (entries == null) {
			if ((MethodInfo_System_Array_Empty_RegionBanEntry.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_RegionBanEntry);
				pIVar14 = *(Il2CppClass*)((long)(pMVar5.field7_0x38).methodMetadataHandle + 0x10);
				bVar2 = (pIVar14._2).bitflags1;
			}
			else {
				pIVar14 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_RegionBanEntry.field7_0x38).methodMetadataHandle + 0x10);
				bVar2 = (pIVar14._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
				uVar4 = (pIVar14._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar4 = (pIVar14._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
				pIVar14 = (pMVar5.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar14._2).bitflags1;
			}
			else {
				pIVar14 = (pMVar5.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar14._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
			}
			return *(RegionBanEntry[]*)pIVar14.static_fields;
		}
		__this_00 = new List<RegionBanEntry>();
		if (0 < (int)entries.Length) {
			uVar7 = entries.Length & 0xffffffff;
			uVar16 = 0;
			do {
				if (uVar7 <= uVar16) {
					throw new IndexOutOfRangeException();
				}
				__this = entries[uVar16];
				if (__this != null) {
					bVar6 = __this.ContainsKey(0);
					if (bVar6) {
						pSVar8 = (String)__this.get_Item(0);
						if (pSVar8 == null) {
							pSVar8 = null;
						}
						else if ((Il2CppClass)pSVar8.klass != g_data_07556758) {
							throw new InvalidCastException();
						}
					}
					else {
						pSVar8 = *(String*)g_data_07556758.static_fields;
					}
					bVar6 = __this.ContainsKey(1);
					iVar15 = 0;
					if (bVar6) {
						obj = __this.get_Item(1);
						if (obj == null) goto label_05e357e1;
						if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
							throw new InvalidCastException();
						}
						piVar9 = il2cpp_vm_Object_Unbox(obj);
						iVar15 = *piVar9;
					}
					bVar6 = __this.ContainsKey(2);
					if (bVar6) {
						pSVar10 = (String)__this.get_Item(2) ;
						if (pSVar10 == null) {
							pSVar10 = null;
						}
						else if ((Il2CppClass)pSVar10.klass != g_data_07556758) {
							throw new InvalidCastException();
						}
					}
					else {
						pSVar10 = *(String*)g_data_07556758.static_fields;
					}
					bVar6 = __this.ContainsKey(5);
					if (bVar6) {
						pSVar11 = (String)__this.get_Item(5) ;
						if (pSVar11 == null) {
							pSVar11 = null;
						}
						else if ((Il2CppClass)pSVar11.klass != g_data_07556758) {
							throw new InvalidCastException();
						}
					}
					else {
						pSVar11 = *(String*)g_data_07556758.static_fields;
					}
					bVar6 = __this.ContainsKey(6);
					if (bVar6) {
						pSVar12 = (String)__this.get_Item(6) ;
						if (pSVar12 == null) {
							pSVar12 = null;
						}
						else if ((Il2CppClass)pSVar12.klass != g_data_07556758) {
							throw new InvalidCastException();
						}
					}
					else {
						pSVar12 = *(String*)g_data_07556758.static_fields;
					}
					__this_01 = new RegionBanEntry();
					if (__this_01 == null) goto label_05e357e1;
					__this_01.TargetId = pSVar8;
					__this_01.Username = pSVar10;
					__this_01.IsIPBan = iVar15 == 3;
					__this_01.Reason = pSVar11;
					__this_01.BannedBy = pSVar12;
					pMVar5 = MethodInfo_System_Collections_Generic_List_RegionBanEntry_Add;
					if (__this_00 == null) goto label_05e357e1;
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pAVar13 = __this_00._items;
					if (pAVar13 == null) goto label_05e357e1;
					uVar3 = __this_00._size;
					if (uVar3 < (uint)pAVar13.Length) {
						__this_00._size = uVar3 + 1;
						pAVar13[(int)uVar3] = __this_01;
					}
					else {
						__this_00.AddWithResize((object)__this_01);
					}
				}
				uVar16 = uVar16 + 1;
				uVar3 = (uint)entries.Length;
				uVar7 = (ulong)uVar3;
			} while ((long)uVar16 < (long)(int)uVar3);
		}
		if (__this_00 != null) {
			pAVar13 = (RegionBanEntry[])__this_00.ToArray();
			return pAVar13;
		}
	label_05e357e1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B0D")]
	[Address(RVA = "0x5D35830", Offset = "0x5D34830", VA = "0x5D35830")]
	public static void BatchSessionBan(string targets)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$BatchSessionBan): clean
		bool bVar1;
		String value;

		if (targets == null) {
			value = null;
		}
		else {
			value = targets.Trim();
		}
		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return;
		}
		ModeratorManager.SendBatchRoomRemove(2, 1, value, null);
		return;
	}

	[Token(Token = "0x6005B0E")]
	[Address(RVA = "0x5D35BA0", Offset = "0x5D34BA0", VA = "0x5D35BA0")]
	public static void BatchIPBan(string targets)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$BatchIPBan): clean
		uint uVar1;
		bool bVar2;
		String value;
		int targetBy;

		if (targets == null) {
			value = null;
		}
		else {
			value = targets.Trim();
		}
		bVar2 = String.IsNullOrEmpty(value);
		if (bVar2) {
			return;
		}
		if (Il2CppMethodInitialized_07547eed == false) {
			Il2CppMethodInitialized_07547eed = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			targetBy = (uint)(ModeratorManager._IsAuthenticated_k__BackingField == false) * 2 + 2;
		}
		else {
			targetBy = (uint)(*(sbyte)((long)(typeof(ModeratorManager)).static_fields + 8) == false) * 2 + 2;
		}
		ModeratorManager.SendBatchRoomRemove(3, targetBy, value, null);
		return;
	}

	[Token(Token = "0x6005B0F")]
	[Address(RVA = "0x5D35CB0", Offset = "0x5D34CB0", VA = "0x5D35CB0")]
	public static void BatchSessionUnban(string targets)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$BatchSessionUnban): clean
		bool bVar1;
		String value;

		if (targets == null) {
			value = null;
		}
		else {
			value = targets.Trim();
		}
		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return;
		}
		ModeratorManager.SendBatchRoomRemove(4, 1, value, null);
		return;
	}

	[Token(Token = "0x6005B10")]
	[Address(RVA = "0x5D35D30", Offset = "0x5D34D30", VA = "0x5D35D30")]
	public static void BatchIPUnban(string targets)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$BatchIPUnban): clean
		uint uVar1;
		bool bVar2;
		String value;
		int targetBy;

		if (targets == null) {
			value = null;
		}
		else {
			value = targets.Trim();
		}
		bVar2 = String.IsNullOrEmpty(value);
		if (bVar2) {
			return;
		}
		if (Il2CppMethodInitialized_07547eed == false) {
			Il2CppMethodInitialized_07547eed = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			targetBy = (uint)(ModeratorManager._IsAuthenticated_k__BackingField == false) * 2 + 2;
		}
		else {
			targetBy = (uint)(*(sbyte)((long)(typeof(ModeratorManager)).static_fields + 8) == false) * 2 + 2;
		}
		ModeratorManager.SendBatchRoomRemove(5, targetBy, value, null);
		return;
	}

	[Token(Token = "0x6005B11")]
	[Address(RVA = "0x5D358B0", Offset = "0x5D348B0", VA = "0x5D358B0")]
	private static void SendBatchRoomRemove(int removeType, int targetBy, string targets, Action<string> localStatus)
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$SendBatchRoomRemove): 2 lines keep C-only constructs
		Action<string> pSVar1;
		Action<string> pSVar2;
		ModeratorManager.c__DisplayClass106_0 __this;
		Action<Dictionary<byte, object>> __this_00;
		Action __this_01;
		String pSVar3;
		Dictionary<byte, object> __this_02;
		object pIVar4;
		int local_38;
		int local_34;

		__this = new ModeratorManager.c__DisplayClass106_0();
		if (__this == null) goto label_05e35b97;
		__this.localStatus = localStatus;
		pSVar1 = __this.localStatus;
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07548558 == false) goto label_05e35b53;
	label_05e359c1: ;
			pSVar3 = "Sending request...";
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05e359d1;
	label_05e35b76: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		else {
			if (Il2CppMethodInitialized_07548558 != false) goto label_05e359c1;
	label_05e35b53: ;
			pSVar3 = "Sending request...";
			Il2CppMethodInitialized_07548558 = true;
			if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05e35b76;
	label_05e359d1: ;
			pSVar2 = ModeratorManager.StatusMessage;
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar3,pSVar2.method);
		}
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar3,pSVar1.method);
		}
		__this_00 = new Action<Dictionary<byte, object>>((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass106_0_SendBatchRoomRemove_b__0);
		__this_01 = new Action((object)__this, (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass106_0_SendBatchRoomRemove_b__1);
		pSVar3 = ModeratorManager.TrackRequest(15.0, __this_00, __this_01);
		__this_02 = new Dictionary<byte, object>();
		if (__this_02 != null) {
			__this_02.Add(0, (object)pSVar3);
			local_34 = removeType;
			pIVar4 = (object)local_34;
			__this_02.Add(1, pIVar4);
			local_38 = targetBy;
			pIVar4 = (object)local_38;
			__this_02.Add(2, pIVar4);
			__this_02.Add(3, (object)targets);
			ModeratorManager.RaiseModEvent(0xb4, __this_02);
			return;
		}
	label_05e35b97: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005B12")]
	[Address(RVA = "0x5D35E50", Offset = "0x5D34E50", VA = "0x5D35E50")]
	public ModeratorManager()
	{
		// Lifted from source/cpp/Anticheat/ModeratorManager.c (Anticheat.ModeratorManager$$.ctor): 1 lines keep C-only constructs
		Dictionary<string, Action<Dictionary<byte, object>>> __this_00;
		Dictionary<string, float> pSVar1;
		Dictionary<string, Action> __this_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Action<Dictionary<byte, object>>>));
		__this_00 = new Dictionary<object, object>();
		this._pendingCallbacks = __this_00;
		pSVar1 = new Dictionary<string, float>();
		this._pendingTimestamps = pSVar1;
		pSVar1 = new Dictionary<string, float>();
		this._pendingTimeouts = pSVar1;
		__this_01 = new Dictionary<string, Action>();
		this._pendingTimeoutCallbacks = __this_01;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Anticheat/ModeratorManager.c.

	// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$.ctor: clean
	private void c__DisplayClass85_0__ctor()
	{
		base();
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$.ctor: clean
	private void c__DisplayClass89_0__ctor()
	{
		base();
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$.ctor: clean
	private void c__DisplayClass90_0__ctor()
	{
		base();
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$.ctor: clean
	private void c__DisplayClass91_0__ctor()
	{
		base();
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$.ctor: clean
	private void c__DisplayClass92_0__ctor()
	{
		base();
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$.ctor: clean
	private void c__DisplayClass94_0__ctor()
	{
		base();
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$.ctor: clean
	private void c__DisplayClass96_0__ctor()
	{
		base();
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$.ctor: clean
	private void c__DisplayClass97_0__ctor()
	{
		base();
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$.ctor: clean
	private void c__DisplayClass98_0__ctor()
	{
		base();
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$.ctor: clean
	private void c__DisplayClass100_0__ctor()
	{
		base();
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$.ctor: clean
	private void c__DisplayClass106_0__ctor()
	{
		base();
		return;
	}

	// Anticheat.ModeratorManager$$.cctor: clean
	static ModeratorManager()
	{
		Anticheat_ModeratorManager_StaticFields pAVar1;
		Dictionary<int, PlayerEntry> __this;
		List<PlayerEntry> __this_00;

		ModeratorManager._AuthLevel_k__BackingField = -1;
		__this = new Dictionary<int, PlayerEntry>();
		pAVar1 = typeof(ModeratorManager).static_fields;
		pAVar1._ActivePlayers_k__BackingField = __this;
		__this_00 = new List<PlayerEntry>();
		pAVar1 = typeof(ModeratorManager).static_fields;
		pAVar1._PastPlayers_k__BackingField = __this_00;
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$<RequestRegionBanList>b__0: clean
	private void c__DisplayClass100_0__RequestRegionBanList_b__0(Dictionary<byte, object> data)
	{
		uint uVar1;
		ulong uVar2;
		Action<string> pSVar3;
		Action<string> pSVar4;
		Action<RegionBanPage> pSVar5;
		int iVar6;
		int iVar7;
		Dictionary<byte, object>[] entries;
		RegionBanEntry[] pAVar8;
		RegionBanPage __this_00;

		uVar2 = **(ulong*)(g_data_07556758 + 0xb8);
		pSVar3 = this.localStatus;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar4 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar4 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar4 != null) {
			(*(code)pSVar4.invoke_impl)(pSVar4.method_code,uVar2,pSVar4.method);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,uVar2,pSVar3.method);
		}
		iVar6 = ModeratorManager.ReadInt(data, 1, 0);
		iVar7 = ModeratorManager.ReadInt(data, 2, -1);
		entries = ModeratorManager.GetResponseEntries(data, 3);
		pAVar8 = ModeratorManager.ParseRegionBanEntries(entries);
		pSVar5 = ModeratorManager.RegionBanListReceived;
		if (pSVar5 == null) {
			return;
		}
		__this_00 = new RegionBanPage();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Count = iVar6;
		__this_00.EndIndex = iVar7;
		__this_00.Entries = pAVar8;
		(*(code)pSVar5.invoke_impl)(pSVar5.method_code,__this_00,pSVar5.method);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$<RequestRegionBanList>b__1: clean
	private void c__DisplayClass100_0__RequestRegionBanList_b__1()
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;

		pSVar2 = this.localStatus;
		pSVar4 = "Request timed out";
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = "Request timed out";
		}
		"Request timed out" = pSVar4;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
		}
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$<SendBatchRoomRemove>b__0: 12 lines keep C-only constructs
	private void c__DisplayClass106_0__SendBatchRoomRemove_b__0(Dictionary<byte, object> data)
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		bool bVar4;
		object obj;
		object pIVar5;
		int piVar6;
		String pSVar7;
		String[] values;
		int iVar8;
		int iVar9;
		int iVar10;
		int iStack_3c;
		int iStack_38;
		int iStack_34;

		iStack_38 = 0;
		iStack_3c = 0;
		if (data != null) {
			bVar4 = data.ContainsKey(1);
			if (bVar4) {
				obj = data.get_Item(1);
				if (obj == null) goto label_05e368c2;
				if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) goto label_05e368c7;
				il2cpp_vm_Object_Unbox(obj);
			}
			bVar4 = data.ContainsKey(2);
			if (bVar4) {
				pIVar5 = data.get_Item(2);
				if (pIVar5 == null) {
					pIVar5 = null;
				}
				else if (pIVar5.klass != g_data_07556758) {
					throw new InvalidCastException();
				}
			}
			else {
				pIVar5 = *(object*)g_data_07556758.static_fields;
			}
			bVar4 = data.ContainsKey(3);
			iVar10 = 0;
			iVar9 = 0;
			if (bVar4) {
				obj = data.get_Item(3);
				if (obj == null) goto label_05e368c2;
				if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05e368c7;
				piVar6 = il2cpp_vm_Object_Unbox(obj);
				iVar9 = *piVar6;
			}
			iStack_34 = iVar9;
			bVar4 = data.ContainsKey(4);
			if (bVar4) {
				obj = data.get_Item(4);
				if (obj == null) goto label_05e368c2;
				if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05e368c7;
				piVar6 = il2cpp_vm_Object_Unbox(obj);
				iVar10 = *piVar6;
			}
			iStack_38 = iVar10;
			bVar4 = data.ContainsKey(5);
			iVar8 = 0;
			if (bVar4) {
				obj = data.get_Item(5);
				if (obj == null) goto label_05e368c2;
				if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
	label_05e368c7: ;
					throw new InvalidCastException();
				}
				piVar6 = il2cpp_vm_Object_Unbox(obj);
				iVar8 = *piVar6;
			}
			iStack_3c = iVar8;
			if (0 < iVar9) {
				pSVar7 = iStack_34.ToString();
				pSVar7 = String.Concat("Rate limited. Retry in ", pSVar7, "s.");
	label_05e367b4: ;
				pSVar2 = this.localStatus;
				if (Il2CppMethodInitialized_07548558 == false) {
					Il2CppMethodInitialized_07548558 = true;
					uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = *(uint)((long)typeof(ModeratorManager) + 0xe4);
				}
				if (uVar1 == 0) {
					pSVar3 = ModeratorManager.StatusMessage;
				}
				else {
					pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
				}
				if (pSVar3 != null) {
					(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar7,pSVar3.method);
				}
				if (pSVar2 != null) {
					(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar7,pSVar2.method);
				}
				return;
			}
			if ((iVar10 < 1) && (iVar8 < 1)) {
				pSVar2 = this.localStatus;
				if (Il2CppMethodInitialized_07548558 == false) {
					Il2CppMethodInitialized_07548558 = true;
					uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = *(uint)((long)typeof(ModeratorManager) + 0xe4);
				}
				if (uVar1 == 0) {
					pSVar3 = ModeratorManager.StatusMessage;
				}
				else {
					pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
				}
				if (pSVar3 != null) {
					(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pIVar5,pSVar3.method);
				}
				if (pSVar2 == null) {
					return;
				}
				(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pIVar5,pSVar2.method);
				return;
			}
			values = (String[])new string[5];
			if (values != null) {
				if ((int)values.Length != 0) {
					values[0] = "Done: ";
					pSVar7 = iStack_38.ToString();
					if ((values.Length & 0xfffffffe) != 0) {
						values[1] = pSVar7;
						if (2 < (uint)values.Length) {
							values[2] = " processed, ";
							pSVar7 = iStack_3c.ToString();
							if ((values.Length & 0xfffffffc) != 0) {
								values[3] = pSVar7;
								if (4 < (uint)values.Length) {
									values[4] = " failed.";
									pSVar7 = String.Concat(values);
									goto label_05e367b4;
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05e368c2: ;
		throw new NullReferenceException();
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$<SendBatchRoomRemove>b__1: clean
	private void c__DisplayClass106_0__SendBatchRoomRemove_b__1()
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;

		pSVar2 = this.localStatus;
		pSVar4 = "Request timed out";
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = "Request timed out";
		}
		"Request timed out" = pSVar4;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
		}
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$<RequestPlayerList>b__0: clean
	private void c__DisplayClass85_0__RequestPlayerList_b__0(Dictionary<byte, object> data)
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		MethodInfo pMVar4;

		pMVar4 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = this.localStatus;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pMVar4,pSVar3.method);
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pMVar4,pSVar2.method);
		}
		ModeratorManager.PopulatePlayerList(data);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$<RequestPlayerList>b__1: clean
	private void c__DisplayClass85_0__RequestPlayerList_b__1()
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;

		pSVar2 = this.localStatus;
		pSVar4 = "Request timed out";
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = "Request timed out";
		}
		"Request timed out" = pSVar4;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
		}
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$<KickPlayer>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass89_0__KickPlayer_b__0(Dictionary<byte, object> data)
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		bool bVar4;
		object obj;
		sbyte pcVar5;
		Il2CppClass pIVar6;
		sbyte cVar7;

		if (data == null) {
	label_05e36de8: ;
			throw new NullReferenceException();
		}
		bVar4 = data.ContainsKey(1);
		cVar7 = false;
		if (bVar4) {
			obj = data.get_Item(1);
			if (obj == null) goto label_05e36de8;
			if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
				throw new InvalidCastException();
			}
			pcVar5 = il2cpp_vm_Object_Unbox(obj);
			cVar7 = *pcVar5;
		}
		bVar4 = data.ContainsKey(2);
		if (bVar4) {
			pIVar6 = (Il2CppClass)data.get_Item(2);
			if (pIVar6 == null) {
				pIVar6 = null;
			}
			else {
				if ((pIVar6._1).image != g_data_07556758) {
					throw new InvalidCastException();
				}
			}
		}
		else {
			pIVar6 = *(Il2CppClass*)g_data_07556758.static_fields;
		}
		pSVar2 = this.localStatus;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pIVar6,pSVar3.method);
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pIVar6,pSVar2.method);
		}
		if (cVar7 == false) {
			return;
		}
		pSVar2 = this.localStatus;
		ModeratorManager.RequestPlayerList(pSVar2);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$<KickPlayer>b__1: clean
	private void c__DisplayClass89_0__KickPlayer_b__1()
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;

		pSVar2 = this.localStatus;
		pSVar4 = "Request timed out";
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = "Request timed out";
		}
		"Request timed out" = pSVar4;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
		}
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$<RoomBan>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass90_0__RoomBan_b__0(Dictionary<byte, object> data)
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		bool bVar4;
		object obj;
		sbyte pcVar5;
		Il2CppClass pIVar6;
		sbyte cVar7;

		if (data == null) {
	label_05e37108: ;
			throw new NullReferenceException();
		}
		bVar4 = data.ContainsKey(1);
		cVar7 = false;
		if (bVar4) {
			obj = data.get_Item(1);
			if (obj == null) goto label_05e37108;
			if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
				throw new InvalidCastException();
			}
			pcVar5 = il2cpp_vm_Object_Unbox(obj);
			cVar7 = *pcVar5;
		}
		bVar4 = data.ContainsKey(2);
		if (bVar4) {
			pIVar6 = (Il2CppClass)data.get_Item(2);
			if (pIVar6 == null) {
				pIVar6 = null;
			}
			else {
				if ((pIVar6._1).image != g_data_07556758) {
					throw new InvalidCastException();
				}
			}
		}
		else {
			pIVar6 = *(Il2CppClass*)g_data_07556758.static_fields;
		}
		pSVar2 = this.localStatus;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pIVar6,pSVar3.method);
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pIVar6,pSVar2.method);
		}
		if (cVar7 == false) {
			return;
		}
		pSVar2 = this.localStatus;
		ModeratorManager.RequestPlayerList(pSVar2);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$<RoomBan>b__1: clean
	private void c__DisplayClass90_0__RoomBan_b__1()
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;

		pSVar2 = this.localStatus;
		pSVar4 = "Request timed out";
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = "Request timed out";
		}
		"Request timed out" = pSVar4;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
		}
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$<RoomBanPlayerEntry>b__0: 3 lines keep C-only constructs
	private void c__DisplayClass91_0__RoomBanPlayerEntry_b__0(Dictionary<byte, object> data)
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		bool bVar4;
		object obj;
		sbyte pcVar5;
		Il2CppClass pIVar6;
		sbyte cVar7;

		if (data == null) {
	label_05e37428: ;
			throw new NullReferenceException();
		}
		bVar4 = data.ContainsKey(1);
		cVar7 = false;
		if (bVar4) {
			obj = data.get_Item(1);
			if (obj == null) goto label_05e37428;
			if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
				throw new InvalidCastException();
			}
			pcVar5 = il2cpp_vm_Object_Unbox(obj);
			cVar7 = *pcVar5;
		}
		bVar4 = data.ContainsKey(2);
		if (bVar4) {
			pIVar6 = (Il2CppClass)data.get_Item(2);
			if (pIVar6 == null) {
				pIVar6 = null;
			}
			else {
				if ((pIVar6._1).image != g_data_07556758) {
					throw new InvalidCastException();
				}
			}
		}
		else {
			pIVar6 = *(Il2CppClass*)g_data_07556758.static_fields;
		}
		pSVar2 = this.localStatus;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pIVar6,pSVar3.method);
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pIVar6,pSVar2.method);
		}
		if (cVar7 == false) {
			return;
		}
		pSVar2 = this.localStatus;
		ModeratorManager.RequestPlayerList(pSVar2);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$<RoomBanPlayerEntry>b__1: clean
	private void c__DisplayClass91_0__RoomBanPlayerEntry_b__1()
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;

		pSVar2 = this.localStatus;
		pSVar4 = "Request timed out";
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = "Request timed out";
		}
		"Request timed out" = pSVar4;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
		}
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$<RoomUnban>b__0: 6 lines keep C-only constructs
	private void c__DisplayClass92_0__RoomUnban_b__0(Dictionary<byte, object> data)
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		bool bVar4;
		object pIVar5;
		sbyte pcVar6;
		Il2CppClass in_RCX;
		sbyte cVar7;

		if (data == null) {
	label_05e377bc: ;
			throw new NullReferenceException();
		}
		bVar4 = data.ContainsKey(1);
		cVar7 = false;
		if (bVar4) {
			pIVar5 = data.get_Item(1);
			if (pIVar5 == null) goto label_05e377bc;
			in_RCX = (pIVar5.klass._1).element_class;
			if (in_RCX != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
				throw new InvalidCastException();
			}
			pcVar6 = il2cpp_vm_Object_Unbox(pIVar5);
			cVar7 = *pcVar6;
		}
		bVar4 = data.ContainsKey(2);
		if (bVar4) {
			pIVar5 = data.get_Item(2);
			if (pIVar5 == null) {
				pIVar5 = null;
			}
			else if (pIVar5.klass != g_data_07556758) {
				throw new InvalidCastException();
			}
		}
		else {
			pIVar5 = *(object*)g_data_07556758.static_fields;
		}
		pSVar2 = this.localStatus;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pIVar5,pSVar3.method);
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pIVar5,pSVar2.method);
		}
		if (cVar7 == false) {
			return;
		}
		pSVar2 = this.localStatus;
		if (Il2CppMethodInitialized_07548564 == false) {
			Il2CppMethodInitialized_07548564 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		ModeratorManager.RequestRoomBanList(0, 0x32, pSVar2);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$<RoomUnban>b__1: clean
	private void c__DisplayClass92_0__RoomUnban_b__1()
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;

		pSVar2 = this.localStatus;
		pSVar4 = "Request timed out";
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = "Request timed out";
		}
		"Request timed out" = pSVar4;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
		}
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$<RequestRoomBanList>b__0: clean
	private void c__DisplayClass94_0__RequestRoomBanList_b__0(Dictionary<byte, object> data)
	{
		uint uVar1;
		ulong uVar2;
		Action<string> pSVar3;
		Action<string> pSVar4;
		Action<RoomBanPage> pSVar5;
		int iVar6;
		int iVar7;
		Dictionary<byte, object>[] entries;
		RoomBanEntry[] pAVar8;
		RoomBanPage __this_00;

		uVar2 = **(ulong*)(g_data_07556758 + 0xb8);
		pSVar3 = this.localStatus;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar4 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar4 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar4 != null) {
			(*(code)pSVar4.invoke_impl)(pSVar4.method_code,uVar2,pSVar4.method);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,uVar2,pSVar3.method);
		}
		iVar6 = ModeratorManager.ReadInt(data, 1, 0);
		iVar7 = ModeratorManager.ReadInt(data, 2, -1);
		entries = ModeratorManager.GetResponseEntries(data, 3);
		pAVar8 = ModeratorManager.ParseRoomBanEntries(entries);
		pSVar5 = ModeratorManager.RoomBanListReceived;
		if (pSVar5 == null) {
			return;
		}
		__this_00 = new RoomBanPage();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Count = iVar6;
		__this_00.EndIndex = iVar7;
		__this_00.Entries = pAVar8;
		(*(code)pSVar5.invoke_impl)(pSVar5.method_code,__this_00,pSVar5.method);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$<RequestRoomBanList>b__1: clean
	private void c__DisplayClass94_0__RequestRoomBanList_b__1()
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;

		pSVar2 = this.localStatus;
		pSVar4 = "Request timed out";
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = "Request timed out";
		}
		"Request timed out" = pSVar4;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
		}
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$<RegionBan>b__0: 6 lines keep C-only constructs
	private void c__DisplayClass96_0__RegionBan_b__0(Dictionary<byte, object> data)
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		bool bVar4;
		object pIVar5;
		sbyte pcVar6;
		Il2CppClass in_RCX;
		sbyte cVar7;

		if (data == null) {
	label_05e37e3c: ;
			throw new NullReferenceException();
		}
		bVar4 = data.ContainsKey(1);
		cVar7 = false;
		if (bVar4) {
			pIVar5 = data.get_Item(1);
			if (pIVar5 == null) goto label_05e37e3c;
			in_RCX = (pIVar5.klass._1).element_class;
			if (in_RCX != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
				throw new InvalidCastException();
			}
			pcVar6 = il2cpp_vm_Object_Unbox(pIVar5);
			cVar7 = *pcVar6;
		}
		bVar4 = data.ContainsKey(2);
		if (bVar4) {
			pIVar5 = data.get_Item(2);
			if (pIVar5 == null) {
				pIVar5 = null;
			}
			else if (pIVar5.klass != g_data_07556758) {
				throw new InvalidCastException();
			}
		}
		else {
			pIVar5 = *(object*)g_data_07556758.static_fields;
		}
		pSVar2 = this.localStatus;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pIVar5,pSVar3.method);
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pIVar5,pSVar2.method);
		}
		if (cVar7 == false) {
			return;
		}
		pSVar2 = this.localStatus;
		if (Il2CppMethodInitialized_0754856a == false) {
			Il2CppMethodInitialized_0754856a = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		ModeratorManager.RequestRegionBanList(0, 0x32, pSVar2);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$<RegionBan>b__1: clean
	private void c__DisplayClass96_0__RegionBan_b__1()
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;

		pSVar2 = this.localStatus;
		pSVar4 = "Request timed out";
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = "Request timed out";
		}
		"Request timed out" = pSVar4;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
		}
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$<RegionBanPlayerEntry>b__0: 6 lines keep C-only constructs
	private void c__DisplayClass97_0__RegionBanPlayerEntry_b__0(Dictionary<byte, object> data)
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		bool bVar4;
		object pIVar5;
		sbyte pcVar6;
		Il2CppClass in_RCX;
		sbyte cVar7;

		if (data == null) {
	label_05e381cc: ;
			throw new NullReferenceException();
		}
		bVar4 = data.ContainsKey(1);
		cVar7 = false;
		if (bVar4) {
			pIVar5 = data.get_Item(1);
			if (pIVar5 == null) goto label_05e381cc;
			in_RCX = (pIVar5.klass._1).element_class;
			if (in_RCX != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
				throw new InvalidCastException();
			}
			pcVar6 = il2cpp_vm_Object_Unbox(pIVar5);
			cVar7 = *pcVar6;
		}
		bVar4 = data.ContainsKey(2);
		if (bVar4) {
			pIVar5 = data.get_Item(2);
			if (pIVar5 == null) {
				pIVar5 = null;
			}
			else if (pIVar5.klass != g_data_07556758) {
				throw new InvalidCastException();
			}
		}
		else {
			pIVar5 = *(object*)g_data_07556758.static_fields;
		}
		pSVar2 = this.localStatus;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pIVar5,pSVar3.method);
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pIVar5,pSVar2.method);
		}
		if (cVar7 == false) {
			return;
		}
		pSVar2 = this.localStatus;
		if (Il2CppMethodInitialized_0754856a == false) {
			Il2CppMethodInitialized_0754856a = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		ModeratorManager.RequestRegionBanList(0, 0x32, pSVar2);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$<RegionBanPlayerEntry>b__1: clean
	private void c__DisplayClass97_0__RegionBanPlayerEntry_b__1()
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;

		pSVar2 = this.localStatus;
		pSVar4 = "Request timed out";
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = "Request timed out";
		}
		"Request timed out" = pSVar4;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
		}
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$<RegionUnban>b__0: 6 lines keep C-only constructs
	private void c__DisplayClass98_0__RegionUnban_b__0(Dictionary<byte, object> data)
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		bool bVar4;
		object pIVar5;
		sbyte pcVar6;
		Il2CppClass in_RCX;
		sbyte cVar7;

		if (data == null) {
	label_05e3855c: ;
			throw new NullReferenceException();
		}
		bVar4 = data.ContainsKey(1);
		cVar7 = false;
		if (bVar4) {
			pIVar5 = data.get_Item(1);
			if (pIVar5 == null) goto label_05e3855c;
			in_RCX = (pIVar5.klass._1).element_class;
			if (in_RCX != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
				throw new InvalidCastException();
			}
			pcVar6 = il2cpp_vm_Object_Unbox(pIVar5);
			cVar7 = *pcVar6;
		}
		bVar4 = data.ContainsKey(2);
		if (bVar4) {
			pIVar5 = data.get_Item(2);
			if (pIVar5 == null) {
				pIVar5 = null;
			}
			else if (pIVar5.klass != g_data_07556758) {
				throw new InvalidCastException();
			}
		}
		else {
			pIVar5 = *(object*)g_data_07556758.static_fields;
		}
		pSVar2 = this.localStatus;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pIVar5,pSVar3.method);
		}
		if (pSVar2 != null) {
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pIVar5,pSVar2.method);
		}
		if (cVar7 == false) {
			return;
		}
		pSVar2 = this.localStatus;
		if (Il2CppMethodInitialized_0754856a == false) {
			Il2CppMethodInitialized_0754856a = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		ModeratorManager.RequestRegionBanList(0, 0x32, pSVar2);
		return;
	}

	// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$<RegionUnban>b__1: clean
	private void c__DisplayClass98_0__RegionUnban_b__1()
	{
		uint uVar1;
		Action<string> pSVar2;
		Action<string> pSVar3;
		String pSVar4;

		pSVar2 = this.localStatus;
		pSVar4 = "Request timed out";
		if ((typeof(ModeratorManager)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = "Request timed out";
		}
		"Request timed out" = pSVar4;
		if (Il2CppMethodInitialized_07548558 == false) {
			Il2CppMethodInitialized_07548558 = true;
			uVar1 = (typeof(ModeratorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ModeratorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = ModeratorManager.StatusMessage;
		}
		else {
			pSVar3 = *(Action<string>*)((long)(typeof(ModeratorManager)).static_fields + 0x30);
		}
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar4,pSVar3.method);
		}
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar4,pSVar2.method);
		return;
	}
}
