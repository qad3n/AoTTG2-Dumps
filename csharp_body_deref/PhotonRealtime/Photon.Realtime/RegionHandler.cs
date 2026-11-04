// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.RegionHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/RegionHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200003E")]
public class RegionHandler
{
	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x0")]
	public static Type PingImplementation;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x18")]
	private string availableRegionCodes;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x20")]
	private Region bestRegionCache;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<RegionPinger> pingerList;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x30")]
	private Action<RegionHandler> onCompleteCall;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0x38")]
	private int previousPing;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x40")]
	private string previousSummaryProvided;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x8")]
	protected internal static ushort PortToPingOverride;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x4C")]
	public int BestRegionSummaryPingLimit;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x50")]
	private MonoBehaviourEmpty emptyMonoBehavior;

	[Token(Token = "0x17000049")]
	public List<Region> EnabledRegions
	{
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public Region BestRegion
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x1D28840", Offset = "0x1D26E40", VA = "0x181D28840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public string SummaryToCache
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x1D289C0", Offset = "0x1D26FC0", VA = "0x181D289C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	public bool IsPinging
	{
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x58A530", Offset = "0x588B30", VA = "0x18058A530")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x58A8C0", Offset = "0x588EC0", VA = "0x18058A8C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public bool Aborted
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x58A880", Offset = "0x588E80", VA = "0x18058A880")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x58AA20", Offset = "0x589020", VA = "0x18058AA20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x1D276F0", Offset = "0x1D25CF0", VA = "0x181D276F0")]
	public string GetResults()
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x1D28500", Offset = "0x1D26B00", VA = "0x181D28500")]
	public void SetRegions(OperationResponse opGetRegions)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x1D28790", Offset = "0x1D26D90", VA = "0x181D28790")]
	public RegionHandler(ushort masterServerPortOverride = 0)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x1D27F80", Offset = "0x1D26580", VA = "0x181D27F80")]
	public bool PingMinimumOfRegions(Action<RegionHandler> onCompleteCallback, string previousSummary)
	{
		return default(bool);
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x1D27470", Offset = "0x1D25A70", VA = "0x181D27470")]
	public void Abort()
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x1D279A0", Offset = "0x1D25FA0", VA = "0x181D279A0")]
	private void OnPreferredRegionPinged(Region preferredRegion)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x1D27C50", Offset = "0x1D26250", VA = "0x181D27C50")]
	private bool PingEnabledRegions()
	{
		return default(bool);
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x1D27A00", Offset = "0x1D26000", VA = "0x181D27A00")]
	private void OnRegionDone(Region region)
	{
	}
}
