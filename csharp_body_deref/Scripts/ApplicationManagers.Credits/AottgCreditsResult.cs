using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x200075B")]
public sealed class AottgCreditsResult
{
	[Token(Token = "0x17000DAC")]
	public AottgCreditsResultState State
	{
		[Token(Token = "0x6004759")]
		[Address(RVA = "0x40AD390", Offset = "0x40AD390", VA = "0x40AD390")]
		[CompilerGenerated]
		get
		{
			return default(AottgCreditsResultState);
		}
		[Token(Token = "0x600475A")]
		[Address(RVA = "0x40AD3A0", Offset = "0x40AD3A0", VA = "0x40AD3A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DAD")]
	public AottgCreditsResponse Credits
	{
		[Token(Token = "0x600475B")]
		[Address(RVA = "0x40AD3B0", Offset = "0x40AD3B0", VA = "0x40AD3B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600475C")]
		[Address(RVA = "0x40AD3C0", Offset = "0x40AD3C0", VA = "0x40AD3C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DAE")]
	public string Error
	{
		[Token(Token = "0x600475D")]
		[Address(RVA = "0x40AD3D0", Offset = "0x40AD3D0", VA = "0x40AD3D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600475E")]
		[Address(RVA = "0x40AD3E0", Offset = "0x40AD3E0", VA = "0x40AD3E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DAF")]
	public bool IsFromCache
	{
		[Token(Token = "0x600475F")]
		[Address(RVA = "0x40AD3F0", Offset = "0x40AD3F0", VA = "0x40AD3F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004760")]
		[Address(RVA = "0x40AD400", Offset = "0x40AD400", VA = "0x40AD400")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DB0")]
	public bool IsStale
	{
		[Token(Token = "0x6004761")]
		[Address(RVA = "0x40AD410", Offset = "0x40AD410", VA = "0x40AD410")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004762")]
		[Address(RVA = "0x40AD420", Offset = "0x40AD420", VA = "0x40AD420")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DB1")]
	public bool IsRefreshing
	{
		[Token(Token = "0x6004763")]
		[Address(RVA = "0x40AD430", Offset = "0x40AD430", VA = "0x40AD430")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004764")]
		[Address(RVA = "0x40AD440", Offset = "0x40AD440", VA = "0x40AD440")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DB2")]
	public bool HasCredits
	{
		[Token(Token = "0x6004765")]
		[Address(RVA = "0x40AD450", Offset = "0x40AD450", VA = "0x40AD450")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004758")]
	[Address(RVA = "0x40AD320", Offset = "0x40AD320", VA = "0x40AD320")]
	private AottgCreditsResult(AottgCreditsResultState state, AottgCreditsResponse credits, string error, bool isFromCache, bool isStale, bool isRefreshing)
	{
	}

	[Token(Token = "0x6004766")]
	[Address(RVA = "0x40AC9B0", Offset = "0x40AC9B0", VA = "0x40AC9B0")]
	public static AottgCreditsResult LoadingNoCache()
	{
		return null;
	}

	[Token(Token = "0x6004767")]
	[Address(RVA = "0x40AC8B0", Offset = "0x40AC8B0", VA = "0x40AC8B0")]
	public static AottgCreditsResult ReadyFresh(AottgCreditsResponse credits, bool isFromCache)
	{
		return null;
	}

	[Token(Token = "0x6004768")]
	[Address(RVA = "0x40AC930", Offset = "0x40AC930", VA = "0x40AC930")]
	public static AottgCreditsResult ReadyStaleRefreshing(AottgCreditsResponse credits)
	{
		return null;
	}

	[Token(Token = "0x6004769")]
	[Address(RVA = "0x40ACD70", Offset = "0x40ACD70", VA = "0x40ACD70")]
	public static AottgCreditsResult FailedNoCache(string error)
	{
		return null;
	}

	[Token(Token = "0x600476A")]
	[Address(RVA = "0x40ACCF0", Offset = "0x40ACCF0", VA = "0x40ACCF0")]
	public static AottgCreditsResult FailedRefreshStale(AottgCreditsResponse credits, string error)
	{
		return null;
	}
}
