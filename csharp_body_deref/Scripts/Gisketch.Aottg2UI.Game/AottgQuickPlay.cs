// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgQuickPlay
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgQuickPlay.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002C2")]
internal sealed class AottgQuickPlay : MonoBehaviour
{
	[Token(Token = "0x20002C3")]
	private sealed class RegionPing
	{
		[Token(Token = "0x4000E12")]
		[FieldOffset(Offset = "0x10")]
		public readonly AottgServerRegion Region;

		[Token(Token = "0x4000E13")]
		[FieldOffset(Offset = "0x48")]
		private readonly Region _photonRegion;

		[Token(Token = "0x4000E14")]
		[FieldOffset(Offset = "0x50")]
		private readonly RegionPinger _pinger;

		[Token(Token = "0x170001DD")]
		public int Ms
		{
			[Token(Token = "0x60010CD")]
			[Address(RVA = "0x57C9CE0", Offset = "0x57C8CE0", VA = "0x57C9CE0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170001DE")]
		public bool Done
		{
			[Token(Token = "0x60010CE")]
			[Address(RVA = "0x57C9D00", Offset = "0x57C8D00", VA = "0x57C9D00")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60010CC")]
		[Address(RVA = "0x57C8FC0", Offset = "0x57C7FC0", VA = "0x57C8FC0")]
		public RegionPing(AottgServerRegion region, Region photonRegion, RegionPinger pinger)
		{
		}
	}

	[Token(Token = "0x20002C5")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass26_0
	{
		[Token(Token = "0x4000E1C")]
		[FieldOffset(Offset = "0x10")]
		public bool inLobby;

		[Token(Token = "0x60010D7")]
		[Address(RVA = "0x57C9F40", Offset = "0x57C8F40", VA = "0x57C9F40")]
		public _003C_003Ec__DisplayClass26_0()
		{
		}

		[Token(Token = "0x60010D8")]
		[Address(RVA = "0x57C9F50", Offset = "0x57C8F50", VA = "0x57C9F50")]
		internal void _003CQuickPlay_003Eb__0(bool result)
		{
		}
	}

	[Token(Token = "0x20002C6")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass26_1
	{
		[Token(Token = "0x4000E1D")]
		[FieldOffset(Offset = "0x10")]
		public bool joined;

		[Token(Token = "0x60010D9")]
		[Address(RVA = "0x57C9F60", Offset = "0x57C8F60", VA = "0x57C9F60")]
		public _003C_003Ec__DisplayClass26_1()
		{
		}

		[Token(Token = "0x60010DA")]
		[Address(RVA = "0x57C9F70", Offset = "0x57C8F70", VA = "0x57C9F70")]
		internal void _003CQuickPlay_003Eb__1(bool result)
		{
		}
	}

	[Token(Token = "0x20002C7")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass28_0
	{
		[Token(Token = "0x4000E1E")]
		[FieldOffset(Offset = "0x10")]
		public List<RegionPing> reachable;

		[Token(Token = "0x60010DB")]
		[Address(RVA = "0x57C9F80", Offset = "0x57C8F80", VA = "0x57C9F80")]
		public _003C_003Ec__DisplayClass28_0()
		{
		}

		[Token(Token = "0x60010DC")]
		[Address(RVA = "0x57C9F90", Offset = "0x57C8F90", VA = "0x57C9F90")]
		internal bool _003CFindNearbyRegions_003Eb__0(RegionPing ping)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20002CA")]
	[CompilerGenerated]
	private sealed class _003C_003Ec__DisplayClass38_0
	{
		[Token(Token = "0x4000E22")]
		[FieldOffset(Offset = "0x10")]
		public bool inLobby;

		[Token(Token = "0x60010E1")]
		[Address(RVA = "0x57CA3E0", Offset = "0x57C93E0", VA = "0x57CA3E0")]
		public _003C_003Ec__DisplayClass38_0()
		{
		}

		[Token(Token = "0x60010E2")]
		[Address(RVA = "0x57CA3F0", Offset = "0x57C93F0", VA = "0x57CA3F0")]
		internal void _003CHost_003Eb__0(bool result)
		{
		}
	}

	[Token(Token = "0x20002CB")]
	[CompilerGenerated]
	private sealed class _003CConnectToLobby_003Ed__34 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E23")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E24")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E25")]
		[FieldOffset(Offset = "0x20")]
		public MultiplayerRegion region;

		[Token(Token = "0x4000E26")]
		[FieldOffset(Offset = "0x28")]
		public Action<bool> done;

		[Token(Token = "0x4000E27")]
		[FieldOffset(Offset = "0x30")]
		private float _003Cdeadline_003E5__2;

		[Token(Token = "0x170001DF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60010E6")]
			[Address(RVA = "0x57CA600", Offset = "0x57C9600", VA = "0x57CA600", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001E0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60010E8")]
			[Address(RVA = "0x57CA650", Offset = "0x57C9650", VA = "0x57CA650", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010E3")]
		[Address(RVA = "0x57C93B0", Offset = "0x57C83B0", VA = "0x57C93B0")]
		[DebuggerHidden]
		public _003CConnectToLobby_003Ed__34(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60010E4")]
		[Address(RVA = "0x57CA400", Offset = "0x57C9400", VA = "0x57CA400", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60010E5")]
		[Address(RVA = "0x57CA410", Offset = "0x57C9410", VA = "0x57CA410", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60010E7")]
		[Address(RVA = "0x57CA610", Offset = "0x57C9610", VA = "0x57CA610", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20002CC")]
	[CompilerGenerated]
	private sealed class _003CFindNearbyRegions_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E28")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E29")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E2A")]
		[FieldOffset(Offset = "0x20")]
		private _003C_003Ec__DisplayClass28_0 _003C_003E8__1;

		[Token(Token = "0x4000E2B")]
		[FieldOffset(Offset = "0x28")]
		public List<AottgServerRegion> regions;

		[Token(Token = "0x4000E2C")]
		[FieldOffset(Offset = "0x30")]
		private bool _003Ccached_003E5__2;

		[Token(Token = "0x170001E1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60010EC")]
			[Address(RVA = "0x57CAB90", Offset = "0x57C9B90", VA = "0x57CAB90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001E2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60010EE")]
			[Address(RVA = "0x57CABE0", Offset = "0x57C9BE0", VA = "0x57CABE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010E9")]
		[Address(RVA = "0x57C8F90", Offset = "0x57C7F90", VA = "0x57C8F90")]
		[DebuggerHidden]
		public _003CFindNearbyRegions_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60010EA")]
		[Address(RVA = "0x57CA660", Offset = "0x57C9660", VA = "0x57CA660", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60010EB")]
		[Address(RVA = "0x57CA670", Offset = "0x57C9670", VA = "0x57CA670", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60010ED")]
		[Address(RVA = "0x57CABA0", Offset = "0x57C9BA0", VA = "0x57CABA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20002CD")]
	[CompilerGenerated]
	private sealed class _003CHost_003Ed__38 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E2D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E2E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E2F")]
		[FieldOffset(Offset = "0x20")]
		public bool inRegionLobby;

		[Token(Token = "0x4000E30")]
		[FieldOffset(Offset = "0x24")]
		public MultiplayerRegion region;

		[Token(Token = "0x4000E31")]
		[FieldOffset(Offset = "0x28")]
		private _003C_003Ec__DisplayClass38_0 _003C_003E8__1;

		[Token(Token = "0x170001E3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60010F2")]
			[Address(RVA = "0x57CB060", Offset = "0x57CA060", VA = "0x57CB060", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001E4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60010F4")]
			[Address(RVA = "0x57CB0B0", Offset = "0x57CA0B0", VA = "0x57CB0B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010EF")]
		[Address(RVA = "0x57C96D0", Offset = "0x57C86D0", VA = "0x57C96D0")]
		[DebuggerHidden]
		public _003CHost_003Ed__38(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60010F0")]
		[Address(RVA = "0x57CABF0", Offset = "0x57C9BF0", VA = "0x57CABF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60010F1")]
		[Address(RVA = "0x57CAC00", Offset = "0x57C9C00", VA = "0x57CAC00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60010F3")]
		[Address(RVA = "0x57CB070", Offset = "0x57CA070", VA = "0x57CB070", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20002CE")]
	[CompilerGenerated]
	private sealed class _003CQuickPlay_003Ed__26 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E32")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E33")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E34")]
		[FieldOffset(Offset = "0x20")]
		private _003C_003Ec__DisplayClass26_0 _003C_003E8__1;

		[Token(Token = "0x4000E35")]
		[FieldOffset(Offset = "0x28")]
		private _003C_003Ec__DisplayClass26_1 _003C_003E8__2;

		[Token(Token = "0x4000E36")]
		[FieldOffset(Offset = "0x30")]
		public AottgQuickPlay _003C_003E4__this;

		[Token(Token = "0x4000E37")]
		[FieldOffset(Offset = "0x38")]
		private List<AottgServerRegion> _003Cregions_003E5__2;

		[Token(Token = "0x4000E38")]
		[FieldOffset(Offset = "0x40")]
		private MultiplayerRegion? _003ClobbyRegion_003E5__3;

		[Token(Token = "0x4000E39")]
		[FieldOffset(Offset = "0x48")]
		private List<AottgServerRegion>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4000E3A")]
		[FieldOffset(Offset = "0x90")]
		private AottgServerRegion _003Cregion_003E5__5;

		[Token(Token = "0x4000E3B")]
		[FieldOffset(Offset = "0xC8")]
		private HashSet<string> _003Ctried_003E5__6;

		[Token(Token = "0x4000E3C")]
		[FieldOffset(Offset = "0xD0")]
		private int _003Cattempt_003E5__7;

		[Token(Token = "0x170001E5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60010F9")]
			[Address(RVA = "0x57CC0A0", Offset = "0x57CB0A0", VA = "0x57CC0A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001E6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60010FB")]
			[Address(RVA = "0x57CC0F0", Offset = "0x57CB0F0", VA = "0x57CC0F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010F5")]
		[Address(RVA = "0x57C8F00", Offset = "0x57C7F00", VA = "0x57C8F00")]
		[DebuggerHidden]
		public _003CQuickPlay_003Ed__26(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60010F6")]
		[Address(RVA = "0x57CB0C0", Offset = "0x57CA0C0", VA = "0x57CB0C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60010F7")]
		[Address(RVA = "0x57CB120", Offset = "0x57CA120", VA = "0x57CB120", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60010F8")]
		[Address(RVA = "0x57CC060", Offset = "0x57CB060", VA = "0x57CC060")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60010FA")]
		[Address(RVA = "0x57CC0B0", Offset = "0x57CB0B0", VA = "0x57CC0B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20002CF")]
	[CompilerGenerated]
	private sealed class _003CRunQuickPlay_003Ed__25 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E3D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E3E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E3F")]
		[FieldOffset(Offset = "0x20")]
		public AottgQuickPlay _003C_003E4__this;

		[Token(Token = "0x170001E7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60010FF")]
			[Address(RVA = "0x57CC1E0", Offset = "0x57CB1E0", VA = "0x57CC1E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001E8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001101")]
			[Address(RVA = "0x57CC230", Offset = "0x57CB230", VA = "0x57CC230", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010FC")]
		[Address(RVA = "0x57C8E70", Offset = "0x57C7E70", VA = "0x57C8E70")]
		[DebuggerHidden]
		public _003CRunQuickPlay_003Ed__25(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60010FD")]
		[Address(RVA = "0x57CC100", Offset = "0x57CB100", VA = "0x57CC100", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60010FE")]
		[Address(RVA = "0x57CC110", Offset = "0x57CB110", VA = "0x57CC110", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001100")]
		[Address(RVA = "0x57CC1F0", Offset = "0x57CB1F0", VA = "0x57CC1F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20002D0")]
	[CompilerGenerated]
	private sealed class _003CWaitForJoin_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E40")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E41")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E42")]
		[FieldOffset(Offset = "0x20")]
		public Action<bool> done;

		[Token(Token = "0x4000E43")]
		[FieldOffset(Offset = "0x28")]
		private float _003Cstart_003E5__2;

		[Token(Token = "0x170001E9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001105")]
			[Address(RVA = "0x57CC410", Offset = "0x57CB410", VA = "0x57CC410", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001EA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001107")]
			[Address(RVA = "0x57CC460", Offset = "0x57CB460", VA = "0x57CC460", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001102")]
		[Address(RVA = "0x57C9440", Offset = "0x57C8440", VA = "0x57C9440")]
		[DebuggerHidden]
		public _003CWaitForJoin_003Ed__35(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001103")]
		[Address(RVA = "0x57CC240", Offset = "0x57CB240", VA = "0x57CC240", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001104")]
		[Address(RVA = "0x57CC250", Offset = "0x57CB250", VA = "0x57CC250", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001106")]
		[Address(RVA = "0x57CC420", Offset = "0x57CB420", VA = "0x57CC420", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20002D1")]
	[CompilerGenerated]
	private sealed class _003CWaitForPings_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E44")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E45")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E46")]
		[FieldOffset(Offset = "0x20")]
		private float _003CfirstDoneAt_003E5__2;

		[Token(Token = "0x170001EB")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600110B")]
			[Address(RVA = "0x57CC6E0", Offset = "0x57CB6E0", VA = "0x57CC6E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001EC")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600110D")]
			[Address(RVA = "0x57CC730", Offset = "0x57CB730", VA = "0x57CC730", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001108")]
		[Address(RVA = "0x57C9080", Offset = "0x57C8080", VA = "0x57C9080")]
		[DebuggerHidden]
		public _003CWaitForPings_003Ed__31(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001109")]
		[Address(RVA = "0x57CC470", Offset = "0x57CB470", VA = "0x57CC470", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600110A")]
		[Address(RVA = "0x57CC480", Offset = "0x57CB480", VA = "0x57CC480", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600110C")]
		[Address(RVA = "0x57CC6F0", Offset = "0x57CB6F0", VA = "0x57CC6F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20002D2")]
	[CompilerGenerated]
	private sealed class _003CWaitForRoomList_003Ed__33 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000E47")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000E48")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000E49")]
		[FieldOffset(Offset = "0x20")]
		private float _003Cdeadline_003E5__2;

		[Token(Token = "0x170001ED")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001111")]
			[Address(RVA = "0x57CC860", Offset = "0x57CB860", VA = "0x57CC860", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001EE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001113")]
			[Address(RVA = "0x57CC8B0", Offset = "0x57CB8B0", VA = "0x57CC8B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600110E")]
		[Address(RVA = "0x57C9320", Offset = "0x57C8320", VA = "0x57C9320")]
		[DebuggerHidden]
		public _003CWaitForRoomList_003Ed__33(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600110F")]
		[Address(RVA = "0x57CC740", Offset = "0x57CB740", VA = "0x57CC740", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001110")]
		[Address(RVA = "0x57CC750", Offset = "0x57CB750", VA = "0x57CC750", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001112")]
		[Address(RVA = "0x57CC870", Offset = "0x57CB870", VA = "0x57CC870", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000DFF")]
	public const string TitleKey = "MainMenu.QuickPlay.Title";

	[Token(Token = "0x4000E00")]
	private const string Prefix = "MainMenu.QuickPlay.";

	[Token(Token = "0x4000E01")]
	private const string ToastKey = "multiplayer.quick-play";

	[Token(Token = "0x4000E02")]
	private const string HostRoomName = "FoodForTitan";

	[Token(Token = "0x4000E03")]
	private const string HostCategory = "Casual";

	[Token(Token = "0x4000E04")]
	private const string HostSubCategory = "VS Titans";

	[Token(Token = "0x4000E05")]
	private const string HostExperience = "Waves";

	[Token(Token = "0x4000E06")]
	private const int MaxJoinAttempts = 3;

	[Token(Token = "0x4000E07")]
	private const int NearbyRegionPingMs = 150;

	[Token(Token = "0x4000E08")]
	private const float PingTimeout = 4f;

	[Token(Token = "0x4000E09")]
	private const float PingGrace = 0.75f;

	[Token(Token = "0x4000E0A")]
	private const float PingCacheSeconds = 60f;

	[Token(Token = "0x4000E0B")]
	private const float LobbyTimeout = 12f;

	[Token(Token = "0x4000E0C")]
	private const float RoomListWait = 1.5f;

	[Token(Token = "0x4000E0D")]
	private const float JoinTimeout = 8f;

	[Token(Token = "0x4000E0E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<RegionPing> Pings;

	[Token(Token = "0x4000E0F")]
	[FieldOffset(Offset = "0x8")]
	private static float _pingStartedAt;

	[Token(Token = "0x4000E10")]
	[FieldOffset(Offset = "0x10")]
	private static AottgQuickPlay _instance;

	[Token(Token = "0x4000E11")]
	[FieldOffset(Offset = "0x20")]
	private Coroutine _routine;

	[Token(Token = "0x170001DC")]
	public static bool IsRunning
	{
		[Token(Token = "0x60010B3")]
		[Address(RVA = "0x57C82E0", Offset = "0x57C72E0", VA = "0x57C82E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x57C83A0", Offset = "0x57C73A0", VA = "0x57C83A0")]
	public static void Prewarm()
	{
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x57C8BF0", Offset = "0x57C7BF0", VA = "0x57C8BF0")]
	public static void Begin()
	{
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x57C7670", Offset = "0x57C6670", VA = "0x57C7670")]
	public static void Cancel()
	{
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x57C8D10", Offset = "0x57C7D10", VA = "0x57C8D10")]
	private void Run()
	{
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x57C8E00", Offset = "0x57C7E00", VA = "0x57C8E00")]
	[IteratorStateMachine(typeof(_003CRunQuickPlay_003Ed__25))]
	private IEnumerator RunQuickPlay()
	{
		return null;
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x57C8E90", Offset = "0x57C7E90", VA = "0x57C8E90")]
	[IteratorStateMachine(typeof(_003CQuickPlay_003Ed__26))]
	private IEnumerator QuickPlay()
	{
		return null;
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x57C84C0", Offset = "0x57C74C0", VA = "0x57C84C0")]
	private static AottgServerRegion? ChosenRegion()
	{
		return null;
	}

	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x57C8F20", Offset = "0x57C7F20", VA = "0x57C8F20")]
	[IteratorStateMachine(typeof(_003CFindNearbyRegions_003Ed__28))]
	private static IEnumerator FindNearbyRegions(List<AottgServerRegion> regions)
	{
		return null;
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x57C8650", Offset = "0x57C7650", VA = "0x57C8650")]
	private static bool PingsFresh()
	{
		return default(bool);
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x57C86C0", Offset = "0x57C76C0", VA = "0x57C86C0")]
	private static void StartPings()
	{
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x57C9030", Offset = "0x57C8030", VA = "0x57C9030")]
	[IteratorStateMachine(typeof(_003CWaitForPings_003Ed__31))]
	private static IEnumerator WaitForPings()
	{
		return null;
	}

	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x57C90A0", Offset = "0x57C80A0", VA = "0x57C90A0")]
	private static List<RegionPing> Reachable()
	{
		return null;
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x57C92D0", Offset = "0x57C82D0", VA = "0x57C92D0")]
	[IteratorStateMachine(typeof(_003CWaitForRoomList_003Ed__33))]
	private static IEnumerator WaitForRoomList()
	{
		return null;
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x57C9340", Offset = "0x57C8340", VA = "0x57C9340")]
	[IteratorStateMachine(typeof(_003CConnectToLobby_003Ed__34))]
	private static IEnumerator ConnectToLobby(MultiplayerRegion region, Action<bool> done)
	{
		return null;
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x57C93D0", Offset = "0x57C83D0", VA = "0x57C93D0")]
	[IteratorStateMachine(typeof(_003CWaitForJoin_003Ed__35))]
	private static IEnumerator WaitForJoin(Action<bool> done)
	{
		return null;
	}

	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x57C9460", Offset = "0x57C8460", VA = "0x57C9460")]
	private static bool IsJoining()
	{
		return default(bool);
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x57C94B0", Offset = "0x57C84B0", VA = "0x57C94B0")]
	private static RoomInfo PickRoom(HashSet<string> tried)
	{
		return null;
	}

	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x57C9670", Offset = "0x57C8670", VA = "0x57C9670")]
	[IteratorStateMachine(typeof(_003CHost_003Ed__38))]
	private IEnumerator Host(MultiplayerRegion region, bool inRegionLobby)
	{
		return null;
	}

	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x57C96F0", Offset = "0x57C86F0", VA = "0x57C96F0")]
	private static InGameSet HostGame()
	{
		return null;
	}

	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x57C99F0", Offset = "0x57C89F0", VA = "0x57C99F0")]
	private static void Fail(string message)
	{
	}

	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x57C9AC0", Offset = "0x57C8AC0", VA = "0x57C9AC0")]
	private static void Toast(AottgToastVariant variant, string icon, string message)
	{
	}

	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x57C9BB0", Offset = "0x57C8BB0", VA = "0x57C9BB0")]
	private static string Text(string item)
	{
		return null;
	}

	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x57C9C30", Offset = "0x57C8C30", VA = "0x57C9C30")]
	public AottgQuickPlay()
	{
	}
}
