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
		[Address(RVA = "0x3BDB690", Offset = "0x3BDB690", VA = "0x3BDB690")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x3BDB6A0", Offset = "0x3BDB6A0", VA = "0x3BDB6A0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public Region BestRegion
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x3BDB6B0", Offset = "0x3BDB6B0", VA = "0x3BDB6B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public string SummaryToCache
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x3BDB820", Offset = "0x3BDB820", VA = "0x3BDB820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	public bool IsPinging
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x3BDBFD0", Offset = "0x3BDBFD0", VA = "0x3BDBFD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x3BDBFE0", Offset = "0x3BDBFE0", VA = "0x3BDBFE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public bool Aborted
	{
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x3BDBFF0", Offset = "0x3BDBFF0", VA = "0x3BDBFF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x3BDC000", Offset = "0x3BDC000", VA = "0x3BDC000")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x3BDB9D0", Offset = "0x3BDB9D0", VA = "0x3BDB9D0")]
	public string GetResults()
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x3BDBCD0", Offset = "0x3BDBCD0", VA = "0x3BDBCD0")]
	public void SetRegions(OperationResponse opGetRegions)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x3BDC010", Offset = "0x3BDC010", VA = "0x3BDC010")]
	public RegionHandler(ushort masterServerPortOverride = 0)
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x3BDC0B0", Offset = "0x3BDC0B0", VA = "0x3BDC0B0")]
	public bool PingMinimumOfRegions(Action<RegionHandler> onCompleteCallback, string previousSummary)
	{
		return default(bool);
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x3BDCF10", Offset = "0x3BDCF10", VA = "0x3BDCF10")]
	public void Abort()
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x3BDD220", Offset = "0x3BDD220", VA = "0x3BDD220")]
	private void OnPreferredRegionPinged(Region preferredRegion)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x3BDC780", Offset = "0x3BDC780", VA = "0x3BDC780")]
	private bool PingEnabledRegions()
	{
		return default(bool);
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x3BDD280", Offset = "0x3BDD280", VA = "0x3BDD280")]
	private void OnRegionDone(Region region)
	{
	}
}
