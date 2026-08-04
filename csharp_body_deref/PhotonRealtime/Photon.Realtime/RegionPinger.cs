// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.RegionPinger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/RegionHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000043")]
public class RegionPinger
{
	[Token(Token = "0x2000044")]
	[CompilerGenerated]
	private sealed class _003CRegionPingCoroutine_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000209")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400020A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400020B")]
		[FieldOffset(Offset = "0x20")]
		public RegionPinger _003C_003E4__this;

		[Token(Token = "0x400020C")]
		[FieldOffset(Offset = "0x28")]
		private int _003CrttSum_003E5__2;

		[Token(Token = "0x400020D")]
		[FieldOffset(Offset = "0x2C")]
		private int _003CreplyCount_003E5__3;

		[Token(Token = "0x400020E")]
		[FieldOffset(Offset = "0x30")]
		private Stopwatch _003Csw_003E5__4;

		[Token(Token = "0x400020F")]
		[FieldOffset(Offset = "0x38")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x17000050")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60001AB")]
			[Address(RVA = "0x3ED4060", Offset = "0x3ED4060", VA = "0x3ED4060", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000051")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001AD")]
			[Address(RVA = "0x3ED40B0", Offset = "0x3ED40B0", VA = "0x3ED40B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x3ED3870", Offset = "0x3ED3870", VA = "0x3ED3870")]
		[DebuggerHidden]
		public _003CRegionPingCoroutine_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x3ED38F0", Offset = "0x3ED38F0", VA = "0x3ED38F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x3ED3900", Offset = "0x3ED3900", VA = "0x3ED3900", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x3ED4070", Offset = "0x3ED4070", VA = "0x3ED4070", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x0")]
	public static int Attempts;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x4")]
	public static int MaxMillisecondsPerPing;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x8")]
	public static int PingWhenFailed;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x10")]
	public int CurrentAttempt;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x18")]
	private Action<Region> onDoneCall;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x20")]
	private PhotonPing ping;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x28")]
	private List<int> rttResults;

	[Token(Token = "0x4000207")]
	[FieldOffset(Offset = "0x30")]
	private Region region;

	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x38")]
	private string regionAddress;

	[Token(Token = "0x1700004E")]
	public bool Done
	{
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x3ED2F50", Offset = "0x3ED2F50", VA = "0x3ED2F50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x3ED2F60", Offset = "0x3ED2F60", VA = "0x3ED2F60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public bool Aborted
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x3ED2F70", Offset = "0x3ED2F70", VA = "0x3ED2F70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x3ED2F80", Offset = "0x3ED2F80", VA = "0x3ED2F80")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x3ED24F0", Offset = "0x3ED24F0", VA = "0x3ED24F0")]
	public RegionPinger(Region region, Action<Region> onDoneCallback)
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x3ED2F90", Offset = "0x3ED2F90", VA = "0x3ED2F90")]
	private PhotonPing GetPingImplementation()
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x3ED25A0", Offset = "0x3ED25A0", VA = "0x3ED25A0")]
	public bool Start()
	{
		return default(bool);
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x3ED2B40", Offset = "0x3ED2B40", VA = "0x3ED2B40")]
	protected internal void Abort()
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x3ED33F0", Offset = "0x3ED33F0", VA = "0x3ED33F0")]
	protected internal bool RegionPingThreaded()
	{
		return default(bool);
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x3ED3800", Offset = "0x3ED3800", VA = "0x3ED3800")]
	[IteratorStateMachine(typeof(_003CRegionPingCoroutine_003Ed__22))]
	protected internal IEnumerator RegionPingCoroutine()
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x3ED1550", Offset = "0x3ED1550", VA = "0x3ED1550")]
	public string GetResults()
	{
		return null;
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x3ED3120", Offset = "0x3ED3120", VA = "0x3ED3120")]
	public static string ResolveHost(string hostName)
	{
		return null;
	}
}
