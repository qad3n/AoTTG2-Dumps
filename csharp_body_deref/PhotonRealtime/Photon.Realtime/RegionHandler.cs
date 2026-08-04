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

[Token(Token = "0x2000040")]
public class RegionHandler
{
	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0x0")]
	public static Type PingImplementation;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0x18")]
	private string availableRegionCodes;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0x20")]
	private Region bestRegionCache;

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<RegionPinger> pingerList;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x30")]
	private Action<RegionHandler> onCompleteCall;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x38")]
	private int previousPing;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x40")]
	private string previousSummaryProvided;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x8")]
	protected internal static ushort PortToPingOverride;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x4C")]
	public int BestRegionSummaryPingLimit;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x50")]
	private MonoBehaviourEmpty emptyMonoBehavior;

	[Token(Token = "0x17000049")]
	public List<Region> EnabledRegions
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x3ED0FE0", Offset = "0x3ED0FE0", VA = "0x3ED0FE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x3ED0FF0", Offset = "0x3ED0FF0", VA = "0x3ED0FF0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public Region BestRegion
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x3ED1000", Offset = "0x3ED1000", VA = "0x3ED1000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public string SummaryToCache
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x3ED1170", Offset = "0x3ED1170", VA = "0x3ED1170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	public bool IsPinging
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x3ED1920", Offset = "0x3ED1920", VA = "0x3ED1920")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x3ED1930", Offset = "0x3ED1930", VA = "0x3ED1930")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public bool Aborted
	{
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x3ED1940", Offset = "0x3ED1940", VA = "0x3ED1940")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x3ED1950", Offset = "0x3ED1950", VA = "0x3ED1950")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x3ED1320", Offset = "0x3ED1320", VA = "0x3ED1320")]
	public string GetResults()
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x3ED1620", Offset = "0x3ED1620", VA = "0x3ED1620")]
	public void SetRegions(OperationResponse opGetRegions)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x3ED1960", Offset = "0x3ED1960", VA = "0x3ED1960")]
	public RegionHandler(ushort masterServerPortOverride = 0)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x3ED1A00", Offset = "0x3ED1A00", VA = "0x3ED1A00")]
	public bool PingMinimumOfRegions(Action<RegionHandler> onCompleteCallback, string previousSummary)
	{
		return default(bool);
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x3ED2860", Offset = "0x3ED2860", VA = "0x3ED2860")]
	public void Abort()
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x3ED2B70", Offset = "0x3ED2B70", VA = "0x3ED2B70")]
	private void OnPreferredRegionPinged(Region preferredRegion)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x3ED20D0", Offset = "0x3ED20D0", VA = "0x3ED20D0")]
	private bool PingEnabledRegions()
	{
		return default(bool);
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x3ED2BD0", Offset = "0x3ED2BD0", VA = "0x3ED2BD0")]
	private void OnRegionDone(Region region)
	{
	}
}
