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

[Token(Token = "0x2000787")]
internal class HeadlessManager : MonoBehaviour
{
	[Token(Token = "0x2000788")]
	[CompilerGenerated]
	private sealed class _003CHostRoom_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002455")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002456")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000E03")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60048F6")]
			[Address(RVA = "0x43B9D10", Offset = "0x43B9D10", VA = "0x43B9D10", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E04")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60048F8")]
			[Address(RVA = "0x43B9D60", Offset = "0x43B9D60", VA = "0x43B9D60", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60048F3")]
		[Address(RVA = "0x43B8E00", Offset = "0x43B8E00", VA = "0x43B8E00")]
		[DebuggerHidden]
		public _003CHostRoom_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60048F4")]
		[Address(RVA = "0x43B9870", Offset = "0x43B9870", VA = "0x43B9870", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60048F5")]
		[Address(RVA = "0x43B9880", Offset = "0x43B9880", VA = "0x43B9880", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60048F7")]
		[Address(RVA = "0x43B9D20", Offset = "0x43B9D20", VA = "0x43B9D20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000789")]
	[CompilerGenerated]
	private sealed class _003CTryJoinRoom_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002457")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002458")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002459")]
		[FieldOffset(Offset = "0x20")]
		public HeadlessManager _003C_003E4__this;

		[Token(Token = "0x17000E05")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60048FC")]
			[Address(RVA = "0x43BA160", Offset = "0x43BA160", VA = "0x43BA160", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E06")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60048FE")]
			[Address(RVA = "0x43BA1B0", Offset = "0x43BA1B0", VA = "0x43BA1B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60048F9")]
		[Address(RVA = "0x43B8E20", Offset = "0x43B8E20", VA = "0x43B8E20")]
		[DebuggerHidden]
		public _003CTryJoinRoom_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60048FA")]
		[Address(RVA = "0x43B9D70", Offset = "0x43B9D70", VA = "0x43B9D70", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60048FB")]
		[Address(RVA = "0x43B9D80", Offset = "0x43B9D80", VA = "0x43B9D80", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60048FD")]
		[Address(RVA = "0x43BA170", Offset = "0x43BA170", VA = "0x43BA170", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002452")]
	[FieldOffset(Offset = "0x28")]
	private static HeadlessManager _instance;

	[Token(Token = "0x4002453")]
	[FieldOffset(Offset = "0x20")]
	private bool _lobbyReady;

	[Token(Token = "0x4002454")]
	[FieldOffset(Offset = "0x21")]
	private bool _joining;

	[Token(Token = "0x17000DFD")]
	public static bool IsHeadless
	{
		[Token(Token = "0x60048DC")]
		[Address(RVA = "0x43B7EC0", Offset = "0x43B7EC0", VA = "0x43B7EC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60048DD")]
		[Address(RVA = "0x43B7F00", Offset = "0x43B7F00", VA = "0x43B7F00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DFE")]
	public static HeadlessMode Mode
	{
		[Token(Token = "0x60048DE")]
		[Address(RVA = "0x43B7F40", Offset = "0x43B7F40", VA = "0x43B7F40")]
		[CompilerGenerated]
		get
		{
			return default(HeadlessMode);
		}
		[Token(Token = "0x60048DF")]
		[Address(RVA = "0x43B7F80", Offset = "0x43B7F80", VA = "0x43B7F80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DFF")]
	public static MultiplayerRegion Region
	{
		[Token(Token = "0x60048E0")]
		[Address(RVA = "0x43B7FC0", Offset = "0x43B7FC0", VA = "0x43B7FC0")]
		[CompilerGenerated]
		get
		{
			return default(MultiplayerRegion);
		}
		[Token(Token = "0x60048E1")]
		[Address(RVA = "0x43B8000", Offset = "0x43B8000", VA = "0x43B8000")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E00")]
	public static string RoomName
	{
		[Token(Token = "0x60048E2")]
		[Address(RVA = "0x43B8040", Offset = "0x43B8040", VA = "0x43B8040")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60048E3")]
		[Address(RVA = "0x43B8080", Offset = "0x43B8080", VA = "0x43B8080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E01")]
	public static int MaxPlayers
	{
		[Token(Token = "0x60048E4")]
		[Address(RVA = "0x43B80D0", Offset = "0x43B80D0", VA = "0x43B80D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60048E5")]
		[Address(RVA = "0x43B8110", Offset = "0x43B8110", VA = "0x43B8110")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E02")]
	public static string PresetName
	{
		[Token(Token = "0x60048E6")]
		[Address(RVA = "0x43B8150", Offset = "0x43B8150", VA = "0x43B8150")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60048E7")]
		[Address(RVA = "0x43B8190", Offset = "0x43B8190", VA = "0x43B8190")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60048E8")]
	[Address(RVA = "0x43B81E0", Offset = "0x43B81E0", VA = "0x43B81E0")]
	public static void Init()
	{
	}

	[Token(Token = "0x60048E9")]
	[Address(RVA = "0x43B8A90", Offset = "0x43B8A90", VA = "0x43B8A90")]
	public static void OnJoinedLobby()
	{
	}

	[Token(Token = "0x60048EA")]
	[Address(RVA = "0x43B8C10", Offset = "0x43B8C10", VA = "0x43B8C10")]
	public static void OnRoomListUpdate()
	{
	}

	[Token(Token = "0x60048EB")]
	[Address(RVA = "0x43B8BC0", Offset = "0x43B8BC0", VA = "0x43B8BC0")]
	[IteratorStateMachine(typeof(_003CHostRoom_003Ed__30))]
	private IEnumerator HostRoom()
	{
		return null;
	}

	[Token(Token = "0x60048EC")]
	[Address(RVA = "0x43B8D90", Offset = "0x43B8D90", VA = "0x43B8D90")]
	[IteratorStateMachine(typeof(_003CTryJoinRoom_003Ed__31))]
	private IEnumerator TryJoinRoom()
	{
		return null;
	}

	[Token(Token = "0x60048ED")]
	[Address(RVA = "0x43B8E40", Offset = "0x43B8E40", VA = "0x43B8E40")]
	private static RoomInfo FindRoom(string displayName)
	{
		return null;
	}

	[Token(Token = "0x60048EE")]
	[Address(RVA = "0x43B9080", Offset = "0x43B9080", VA = "0x43B9080")]
	private static void PrepareJoinCharacterSettings()
	{
	}

	[Token(Token = "0x60048EF")]
	[Address(RVA = "0x43B94F0", Offset = "0x43B94F0", VA = "0x43B94F0")]
	private static bool TryApplyPreset(string presetName)
	{
		return default(bool);
	}

	[Token(Token = "0x60048F0")]
	[Address(RVA = "0x43B8740", Offset = "0x43B8740", VA = "0x43B8740")]
	private static bool TryParseArgs(out HeadlessMode mode, out MultiplayerRegion region, out string roomName, out int maxPlayers, out string preset)
	{
		return default(bool);
	}

	[Token(Token = "0x60048F1")]
	[Address(RVA = "0x43B97F0", Offset = "0x43B97F0", VA = "0x43B97F0")]
	private static bool TryParseRegion(string value, out MultiplayerRegion region)
	{
		return default(bool);
	}

	[Token(Token = "0x60048F2")]
	[Address(RVA = "0x43B9860", Offset = "0x43B9860", VA = "0x43B9860")]
	public HeadlessManager()
	{
	}
}
