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

[Token(Token = "0x2000912")]
internal class HeadlessManager : MonoBehaviour
{
	[Token(Token = "0x2000913")]
	[CompilerGenerated]
	private sealed class _003CHostRoom_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002D24")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002D25")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000F66")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600556C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F67")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600556E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005569")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CHostRoom_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600556A")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600556B")]
		[Address(RVA = "0x2359EA0", Offset = "0x23584A0", VA = "0x182359EA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600556D")]
		[Address(RVA = "0x235A330", Offset = "0x2358930", VA = "0x18235A330", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000914")]
	[CompilerGenerated]
	private sealed class _003CTryJoinRoom_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002D26")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002D27")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002D28")]
		[FieldOffset(Offset = "0x20")]
		public HeadlessManager _003C_003E4__this;

		[Token(Token = "0x17000F68")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005572")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F69")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005574")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600556F")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CTryJoinRoom_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005570")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005571")]
		[Address(RVA = "0x235DD40", Offset = "0x235C340", VA = "0x18235DD40", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005573")]
		[Address(RVA = "0x235E130", Offset = "0x235C730", VA = "0x18235E130", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002D21")]
	[FieldOffset(Offset = "0x28")]
	private static HeadlessManager _instance;

	[Token(Token = "0x4002D22")]
	[FieldOffset(Offset = "0x20")]
	private bool _lobbyReady;

	[Token(Token = "0x4002D23")]
	[FieldOffset(Offset = "0x21")]
	private bool _joining;

	[Token(Token = "0x17000F60")]
	public static bool IsHeadless
	{
		[Token(Token = "0x6005552")]
		[Address(RVA = "0x2350E30", Offset = "0x234F430", VA = "0x182350E30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005553")]
		[Address(RVA = "0x2350FB0", Offset = "0x234F5B0", VA = "0x182350FB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F61")]
	public static HeadlessMode Mode
	{
		[Token(Token = "0x6005554")]
		[Address(RVA = "0x2350EB0", Offset = "0x234F4B0", VA = "0x182350EB0")]
		[CompilerGenerated]
		get
		{
			return default(HeadlessMode);
		}
		[Token(Token = "0x6005555")]
		[Address(RVA = "0x2351030", Offset = "0x234F630", VA = "0x182351030")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F62")]
	public static MultiplayerRegion Region
	{
		[Token(Token = "0x6005556")]
		[Address(RVA = "0x2350F30", Offset = "0x234F530", VA = "0x182350F30")]
		[CompilerGenerated]
		get
		{
			return default(MultiplayerRegion);
		}
		[Token(Token = "0x6005557")]
		[Address(RVA = "0x23510D0", Offset = "0x234F6D0", VA = "0x1823510D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F63")]
	public static string RoomName
	{
		[Token(Token = "0x6005558")]
		[Address(RVA = "0x2350F70", Offset = "0x234F570", VA = "0x182350F70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005559")]
		[Address(RVA = "0x2351110", Offset = "0x234F710", VA = "0x182351110")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F64")]
	public static int MaxPlayers
	{
		[Token(Token = "0x600555A")]
		[Address(RVA = "0x2350E70", Offset = "0x234F470", VA = "0x182350E70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600555B")]
		[Address(RVA = "0x2350FF0", Offset = "0x234F5F0", VA = "0x182350FF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F65")]
	public static string PresetName
	{
		[Token(Token = "0x600555C")]
		[Address(RVA = "0x2350EF0", Offset = "0x234F4F0", VA = "0x182350EF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600555D")]
		[Address(RVA = "0x2351070", Offset = "0x234F670", VA = "0x182351070")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600555E")]
	[Address(RVA = "0x234FB60", Offset = "0x234E160", VA = "0x18234FB60")]
	public static void Init()
	{
	}

	[Token(Token = "0x600555F")]
	[Address(RVA = "0x2350120", Offset = "0x234E720", VA = "0x182350120")]
	public static void OnJoinedLobby()
	{
	}

	[Token(Token = "0x6005560")]
	[Address(RVA = "0x2350260", Offset = "0x234E860", VA = "0x182350260")]
	public static void OnRoomListUpdate()
	{
	}

	[Token(Token = "0x6005561")]
	[Address(RVA = "0x234FB10", Offset = "0x234E110", VA = "0x18234FB10")]
	[IteratorStateMachine(typeof(_003CHostRoom_003Ed__30))]
	private IEnumerator HostRoom()
	{
		return null;
	}

	[Token(Token = "0x6005562")]
	[Address(RVA = "0x2350AA0", Offset = "0x234F0A0", VA = "0x182350AA0")]
	[IteratorStateMachine(typeof(_003CTryJoinRoom_003Ed__31))]
	private IEnumerator TryJoinRoom()
	{
		return null;
	}

	[Token(Token = "0x6005563")]
	[Address(RVA = "0x234F920", Offset = "0x234DF20", VA = "0x18234F920")]
	private static RoomInfo FindRoom(string displayName)
	{
		return null;
	}

	[Token(Token = "0x6005564")]
	[Address(RVA = "0x23503C0", Offset = "0x234E9C0", VA = "0x1823503C0")]
	private static void PrepareJoinCharacterSettings()
	{
	}

	[Token(Token = "0x6005565")]
	[Address(RVA = "0x2350810", Offset = "0x234EE10", VA = "0x182350810")]
	private static bool TryApplyPreset(string presetName)
	{
		return default(bool);
	}

	[Token(Token = "0x6005566")]
	[Address(RVA = "0x2350B10", Offset = "0x234F110", VA = "0x182350B10")]
	private static bool TryParseArgs(out HeadlessMode mode, out MultiplayerRegion region, out string roomName, out int maxPlayers, out string preset)
	{
		return default(bool);
	}

	[Token(Token = "0x6005567")]
	[Address(RVA = "0x2350DD0", Offset = "0x234F3D0", VA = "0x182350DD0")]
	private static bool TryParseRegion(string value, out MultiplayerRegion region)
	{
		return default(bool);
	}

	[Token(Token = "0x6005568")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public HeadlessManager()
	{
	}
}
