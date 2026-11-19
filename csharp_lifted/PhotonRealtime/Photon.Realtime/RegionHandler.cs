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
		[Address(RVA = "0x56BD550", Offset = "0x56BC550", VA = "0x56BD550")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x56BD560", Offset = "0x56BC560", VA = "0x56BD560")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public Region BestRegion
	{
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x56BD570", Offset = "0x56BC570", VA = "0x56BD570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004B")]
	public string SummaryToCache
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x56BD6E0", Offset = "0x56BC6E0", VA = "0x56BD6E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	public bool IsPinging
	{
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x56BDE60", Offset = "0x56BCE60", VA = "0x56BDE60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x56BDE70", Offset = "0x56BCE70", VA = "0x56BDE70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public bool Aborted
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x56BDE80", Offset = "0x56BCE80", VA = "0x56BDE80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x56BDE90", Offset = "0x56BCE90", VA = "0x56BDE90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x56BD890", Offset = "0x56BC890", VA = "0x56BD890")]
	public string GetResults()
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x56BDB60", Offset = "0x56BCB60", VA = "0x56BDB60")]
	public void SetRegions(OperationResponse opGetRegions)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x56BDEA0", Offset = "0x56BCEA0", VA = "0x56BDEA0")]
	public RegionHandler(ushort masterServerPortOverride = 0)
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x56BDF40", Offset = "0x56BCF40", VA = "0x56BDF40")]
	public bool PingMinimumOfRegions(Action<RegionHandler> onCompleteCallback, string previousSummary)
	{
		return default(bool);
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x56BEC40", Offset = "0x56BDC40", VA = "0x56BEC40")]
	public void Abort()
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x56BEF50", Offset = "0x56BDF50", VA = "0x56BEF50")]
	private void OnPreferredRegionPinged(Region preferredRegion)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x56BE560", Offset = "0x56BD560", VA = "0x56BE560")]
	private bool PingEnabledRegions()
	{
		return default(bool);
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x56BEFB0", Offset = "0x56BDFB0", VA = "0x56BEFB0")]
	private void OnRegionDone(Region region)
	{
	}
}
