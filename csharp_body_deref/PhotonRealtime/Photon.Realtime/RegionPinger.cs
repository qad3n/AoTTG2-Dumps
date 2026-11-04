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

[Token(Token = "0x2000041")]
public class RegionPinger
{
	[Token(Token = "0x2000042")]
	[CompilerGenerated]
	private sealed class _003CRegionPingCoroutine_003Ed__22 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000204")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000205")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000206")]
		[FieldOffset(Offset = "0x20")]
		public RegionPinger _003C_003E4__this;

		[Token(Token = "0x4000207")]
		[FieldOffset(Offset = "0x28")]
		private int _003CrttSum_003E5__2;

		[Token(Token = "0x4000208")]
		[FieldOffset(Offset = "0x2C")]
		private int _003CreplyCount_003E5__3;

		[Token(Token = "0x4000209")]
		[FieldOffset(Offset = "0x30")]
		private Stopwatch _003Csw_003E5__4;

		[Token(Token = "0x400020A")]
		[FieldOffset(Offset = "0x38")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x17000050")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60001A9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000051")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60001AB")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRegionPingCoroutine_003Ed__22(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x1D2DFE0", Offset = "0x1D2C5E0", VA = "0x181D2DFE0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x1D2E690", Offset = "0x1D2CC90", VA = "0x181D2E690", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x0")]
	public static int Attempts;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x4")]
	public static int MaxMillisecondsPerPing;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x8")]
	public static int PingWhenFailed;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x10")]
	public int CurrentAttempt;

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x18")]
	private Action<Region> onDoneCall;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x20")]
	private PhotonPing ping;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x28")]
	private List<int> rttResults;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x30")]
	private Region region;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x38")]
	private string regionAddress;

	[Token(Token = "0x1700004E")]
	public bool Done
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x1A78710", Offset = "0x1A76D10", VA = "0x181A78710")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public bool Aborted
	{
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x1A78700", Offset = "0x1A76D00", VA = "0x181A78700")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x1A78720", Offset = "0x1A76D20", VA = "0x181A78720")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x1D297B0", Offset = "0x1D27DB0", VA = "0x181D297B0")]
	public RegionPinger(Region region, Action<Region> onDoneCallback)
	{
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x1D28BA0", Offset = "0x1D271A0", VA = "0x181D28BA0")]
	private PhotonPing GetPingImplementation()
	{
		return null;
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x1D29370", Offset = "0x1D27970", VA = "0x181D29370")]
	public bool Start()
	{
		return default(bool);
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x1D28B70", Offset = "0x1D27170", VA = "0x181D28B70")]
	protected internal void Abort()
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x1D28E70", Offset = "0x1D27470", VA = "0x181D28E70")]
	protected internal bool RegionPingThreaded()
	{
		return default(bool);
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x1D28E00", Offset = "0x1D27400", VA = "0x181D28E00")]
	[IteratorStateMachine(typeof(_003CRegionPingCoroutine_003Ed__22))]
	protected internal IEnumerator RegionPingCoroutine()
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x1D28D30", Offset = "0x1D27330", VA = "0x181D28D30")]
	public string GetResults()
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x1D29190", Offset = "0x1D27790", VA = "0x181D29190")]
	public static string ResolveHost(string hostName)
	{
		return null;
	}
}
