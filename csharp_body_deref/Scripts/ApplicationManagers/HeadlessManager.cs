// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.HeadlessManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/HeadlessManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x200097C")]
internal class HeadlessManager : MonoBehaviour
{
	[Token(Token = "0x200097D")]
	[CompilerGenerated]
	private sealed class _003CHostRoom_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002FE2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002FE3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000F4A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60058CF")]
			[Address(RVA = "0x5D17F50", Offset = "0x5D16F50", VA = "0x5D17F50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F4B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60058D1")]
			[Address(RVA = "0x5D17FA0", Offset = "0x5D16FA0", VA = "0x5D17FA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60058CC")]
		[Address(RVA = "0x5D170C0", Offset = "0x5D160C0", VA = "0x5D170C0")]
		[DebuggerHidden]
		public _003CHostRoom_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60058CD")]
		[Address(RVA = "0x5D17AC0", Offset = "0x5D16AC0", VA = "0x5D17AC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60058CE")]
		[Address(RVA = "0x5D17AD0", Offset = "0x5D16AD0", VA = "0x5D17AD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60058D0")]
		[Address(RVA = "0x5D17F60", Offset = "0x5D16F60", VA = "0x5D17F60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200097E")]
	[CompilerGenerated]
	private sealed class _003CTryJoinRoom_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002FE4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002FE5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002FE6")]
		[FieldOffset(Offset = "0x20")]
		public HeadlessManager _003C_003E4__this;

		[Token(Token = "0x17000F4C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60058D5")]
			[Address(RVA = "0x5D183B0", Offset = "0x5D173B0", VA = "0x5D183B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F4D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60058D7")]
			[Address(RVA = "0x5D18400", Offset = "0x5D17400", VA = "0x5D18400", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60058D2")]
		[Address(RVA = "0x5D170E0", Offset = "0x5D160E0", VA = "0x5D170E0")]
		[DebuggerHidden]
		public _003CTryJoinRoom_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60058D3")]
		[Address(RVA = "0x5D17FB0", Offset = "0x5D16FB0", VA = "0x5D17FB0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60058D4")]
		[Address(RVA = "0x5D17FC0", Offset = "0x5D16FC0", VA = "0x5D17FC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60058D6")]
		[Address(RVA = "0x5D183C0", Offset = "0x5D173C0", VA = "0x5D183C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002FDF")]
	[FieldOffset(Offset = "0x28")]
	private static HeadlessManager _instance;

	[Token(Token = "0x4002FE0")]
	[FieldOffset(Offset = "0x20")]
	private bool _lobbyReady;

	[Token(Token = "0x4002FE1")]
	[FieldOffset(Offset = "0x21")]
	private bool _joining;

	[Token(Token = "0x17000F44")]
	public static bool IsHeadless
	{
		[Token(Token = "0x60058B5")]
		[Address(RVA = "0x5D16730", Offset = "0x5D15730", VA = "0x5D16730")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60058B6")]
		[Address(RVA = "0x5D16770", Offset = "0x5D15770", VA = "0x5D16770")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F45")]
	public static HeadlessMode Mode
	{
		[Token(Token = "0x60058B7")]
		[Address(RVA = "0x5D167B0", Offset = "0x5D157B0", VA = "0x5D167B0")]
		[CompilerGenerated]
		get
		{
			return default(HeadlessMode);
		}
		[Token(Token = "0x60058B8")]
		[Address(RVA = "0x5D167F0", Offset = "0x5D157F0", VA = "0x5D167F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F46")]
	public static MultiplayerRegion Region
	{
		[Token(Token = "0x60058B9")]
		[Address(RVA = "0x5D16830", Offset = "0x5D15830", VA = "0x5D16830")]
		[CompilerGenerated]
		get
		{
			return default(MultiplayerRegion);
		}
		[Token(Token = "0x60058BA")]
		[Address(RVA = "0x5D16870", Offset = "0x5D15870", VA = "0x5D16870")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F47")]
	public static string RoomName
	{
		[Token(Token = "0x60058BB")]
		[Address(RVA = "0x5D168B0", Offset = "0x5D158B0", VA = "0x5D168B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60058BC")]
		[Address(RVA = "0x5D168F0", Offset = "0x5D158F0", VA = "0x5D168F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F48")]
	public static int MaxPlayers
	{
		[Token(Token = "0x60058BD")]
		[Address(RVA = "0x5D16940", Offset = "0x5D15940", VA = "0x5D16940")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60058BE")]
		[Address(RVA = "0x5D16980", Offset = "0x5D15980", VA = "0x5D16980")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F49")]
	public static string PresetName
	{
		[Token(Token = "0x60058BF")]
		[Address(RVA = "0x5D169C0", Offset = "0x5D159C0", VA = "0x5D169C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60058C0")]
		[Address(RVA = "0x5D16A00", Offset = "0x5D15A00", VA = "0x5D16A00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60058C1")]
	[Address(RVA = "0x5D096B0", Offset = "0x5D086B0", VA = "0x5D096B0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60058C2")]
	[Address(RVA = "0x5D16D80", Offset = "0x5D15D80", VA = "0x5D16D80")]
	public static void OnJoinedLobby()
	{
	}

	[Token(Token = "0x60058C3")]
	[Address(RVA = "0x5D16F00", Offset = "0x5D15F00", VA = "0x5D16F00")]
	public static void OnRoomListUpdate()
	{
	}

	[Token(Token = "0x60058C4")]
	[Address(RVA = "0x5D16EB0", Offset = "0x5D15EB0", VA = "0x5D16EB0")]
	[IteratorStateMachine(typeof(_003CHostRoom_003Ed__30))]
	private IEnumerator HostRoom()
	{
		return null;
	}

	[Token(Token = "0x60058C5")]
	[Address(RVA = "0x5D17050", Offset = "0x5D16050", VA = "0x5D17050")]
	[IteratorStateMachine(typeof(_003CTryJoinRoom_003Ed__31))]
	private IEnumerator TryJoinRoom()
	{
		return null;
	}

	[Token(Token = "0x60058C6")]
	[Address(RVA = "0x5D17100", Offset = "0x5D16100", VA = "0x5D17100")]
	private static RoomInfo FindRoom(string displayName)
	{
		return null;
	}

	[Token(Token = "0x60058C7")]
	[Address(RVA = "0x5D17300", Offset = "0x5D16300", VA = "0x5D17300")]
	private static void PrepareJoinCharacterSettings()
	{
	}

	[Token(Token = "0x60058C8")]
	[Address(RVA = "0x5D17770", Offset = "0x5D16770", VA = "0x5D17770")]
	private static bool TryApplyPreset(string presetName)
	{
		return default(bool);
	}

	[Token(Token = "0x60058C9")]
	[Address(RVA = "0x5D16A50", Offset = "0x5D15A50", VA = "0x5D16A50")]
	private static bool TryParseArgs(out HeadlessMode mode, out MultiplayerRegion region, out string roomName, out int maxPlayers, out string preset)
	{
		return default(bool);
	}

	[Token(Token = "0x60058CA")]
	[Address(RVA = "0x5D17A40", Offset = "0x5D16A40", VA = "0x5D17A40")]
	private static bool TryParseRegion(string value, out MultiplayerRegion region)
	{
		return default(bool);
	}

	[Token(Token = "0x60058CB")]
	[Address(RVA = "0x5D17AB0", Offset = "0x5D16AB0", VA = "0x5D17AB0")]
	public HeadlessManager()
	{
	}
}
