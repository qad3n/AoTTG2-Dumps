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

[Token(Token = "0x2000738")]
internal class HeadlessManager : MonoBehaviour
{
	[Token(Token = "0x2000739")]
	[CompilerGenerated]
	private sealed class _003CHostRoom_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40022F3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40022F4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000D87")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004687")]
			[Address(RVA = "0x40A0B90", Offset = "0x40A0B90", VA = "0x40A0B90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D88")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004689")]
			[Address(RVA = "0x40A0BE0", Offset = "0x40A0BE0", VA = "0x40A0BE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004684")]
		[Address(RVA = "0x409FC80", Offset = "0x409FC80", VA = "0x409FC80")]
		[DebuggerHidden]
		public _003CHostRoom_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004685")]
		[Address(RVA = "0x40A06F0", Offset = "0x40A06F0", VA = "0x40A06F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004686")]
		[Address(RVA = "0x40A0700", Offset = "0x40A0700", VA = "0x40A0700", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004688")]
		[Address(RVA = "0x40A0BA0", Offset = "0x40A0BA0", VA = "0x40A0BA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200073A")]
	[CompilerGenerated]
	private sealed class _003CTryJoinRoom_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40022F5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40022F6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40022F7")]
		[FieldOffset(Offset = "0x20")]
		public HeadlessManager _003C_003E4__this;

		[Token(Token = "0x17000D89")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600468D")]
			[Address(RVA = "0x40A0FE0", Offset = "0x40A0FE0", VA = "0x40A0FE0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D8A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600468F")]
			[Address(RVA = "0x40A1030", Offset = "0x40A1030", VA = "0x40A1030", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600468A")]
		[Address(RVA = "0x409FCA0", Offset = "0x409FCA0", VA = "0x409FCA0")]
		[DebuggerHidden]
		public _003CTryJoinRoom_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600468B")]
		[Address(RVA = "0x40A0BF0", Offset = "0x40A0BF0", VA = "0x40A0BF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600468C")]
		[Address(RVA = "0x40A0C00", Offset = "0x40A0C00", VA = "0x40A0C00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600468E")]
		[Address(RVA = "0x40A0FF0", Offset = "0x40A0FF0", VA = "0x40A0FF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40022F0")]
	[FieldOffset(Offset = "0x28")]
	private static HeadlessManager _instance;

	[Token(Token = "0x40022F1")]
	[FieldOffset(Offset = "0x20")]
	private bool _lobbyReady;

	[Token(Token = "0x40022F2")]
	[FieldOffset(Offset = "0x21")]
	private bool _joining;

	[Token(Token = "0x17000D81")]
	public static bool IsHeadless
	{
		[Token(Token = "0x600466D")]
		[Address(RVA = "0x409ED40", Offset = "0x409ED40", VA = "0x409ED40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600466E")]
		[Address(RVA = "0x409ED80", Offset = "0x409ED80", VA = "0x409ED80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D82")]
	public static HeadlessMode Mode
	{
		[Token(Token = "0x600466F")]
		[Address(RVA = "0x409EDC0", Offset = "0x409EDC0", VA = "0x409EDC0")]
		[CompilerGenerated]
		get
		{
			return default(HeadlessMode);
		}
		[Token(Token = "0x6004670")]
		[Address(RVA = "0x409EE00", Offset = "0x409EE00", VA = "0x409EE00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D83")]
	public static MultiplayerRegion Region
	{
		[Token(Token = "0x6004671")]
		[Address(RVA = "0x409EE40", Offset = "0x409EE40", VA = "0x409EE40")]
		[CompilerGenerated]
		get
		{
			return default(MultiplayerRegion);
		}
		[Token(Token = "0x6004672")]
		[Address(RVA = "0x409EE80", Offset = "0x409EE80", VA = "0x409EE80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D84")]
	public static string RoomName
	{
		[Token(Token = "0x6004673")]
		[Address(RVA = "0x409EEC0", Offset = "0x409EEC0", VA = "0x409EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004674")]
		[Address(RVA = "0x409EF00", Offset = "0x409EF00", VA = "0x409EF00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D85")]
	public static int MaxPlayers
	{
		[Token(Token = "0x6004675")]
		[Address(RVA = "0x409EF50", Offset = "0x409EF50", VA = "0x409EF50")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6004676")]
		[Address(RVA = "0x409EF90", Offset = "0x409EF90", VA = "0x409EF90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D86")]
	public static string PresetName
	{
		[Token(Token = "0x6004677")]
		[Address(RVA = "0x409EFD0", Offset = "0x409EFD0", VA = "0x409EFD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004678")]
		[Address(RVA = "0x409F010", Offset = "0x409F010", VA = "0x409F010")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004679")]
	[Address(RVA = "0x409F060", Offset = "0x409F060", VA = "0x409F060")]
	public static void Init()
	{
	}

	[Token(Token = "0x600467A")]
	[Address(RVA = "0x409F910", Offset = "0x409F910", VA = "0x409F910")]
	public static void OnJoinedLobby()
	{
	}

	[Token(Token = "0x600467B")]
	[Address(RVA = "0x409FA90", Offset = "0x409FA90", VA = "0x409FA90")]
	public static void OnRoomListUpdate()
	{
	}

	[Token(Token = "0x600467C")]
	[Address(RVA = "0x409FA40", Offset = "0x409FA40", VA = "0x409FA40")]
	[IteratorStateMachine(typeof(_003CHostRoom_003Ed__30))]
	private IEnumerator HostRoom()
	{
		return null;
	}

	[Token(Token = "0x600467D")]
	[Address(RVA = "0x409FC10", Offset = "0x409FC10", VA = "0x409FC10")]
	[IteratorStateMachine(typeof(_003CTryJoinRoom_003Ed__31))]
	private IEnumerator TryJoinRoom()
	{
		return null;
	}

	[Token(Token = "0x600467E")]
	[Address(RVA = "0x409FCC0", Offset = "0x409FCC0", VA = "0x409FCC0")]
	private static RoomInfo FindRoom(string displayName)
	{
		return null;
	}

	[Token(Token = "0x600467F")]
	[Address(RVA = "0x409FF00", Offset = "0x409FF00", VA = "0x409FF00")]
	private static void PrepareJoinCharacterSettings()
	{
	}

	[Token(Token = "0x6004680")]
	[Address(RVA = "0x40A0370", Offset = "0x40A0370", VA = "0x40A0370")]
	private static bool TryApplyPreset(string presetName)
	{
		return default(bool);
	}

	[Token(Token = "0x6004681")]
	[Address(RVA = "0x409F5C0", Offset = "0x409F5C0", VA = "0x409F5C0")]
	private static bool TryParseArgs(out HeadlessMode mode, out MultiplayerRegion region, out string roomName, out int maxPlayers, out string preset)
	{
		return default(bool);
	}

	[Token(Token = "0x6004682")]
	[Address(RVA = "0x40A0670", Offset = "0x40A0670", VA = "0x40A0670")]
	private static bool TryParseRegion(string value, out MultiplayerRegion region)
	{
		return default(bool);
	}

	[Token(Token = "0x6004683")]
	[Address(RVA = "0x40A06E0", Offset = "0x40A06E0", VA = "0x40A06E0")]
	public HeadlessManager()
	{
	}
}
