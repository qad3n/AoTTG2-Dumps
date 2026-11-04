// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditsResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000935")]
public sealed class AottgCreditsResult
{
	[Token(Token = "0x17000F8B")]
	public AottgCreditsResultState State
	{
		[Token(Token = "0x6005640")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(AottgCreditsResultState);
		}
		[Token(Token = "0x6005641")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F8C")]
	public AottgCreditsResponse Credits
	{
		[Token(Token = "0x6005642")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005643")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F8D")]
	public string Error
	{
		[Token(Token = "0x6005644")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005645")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F8E")]
	public bool IsFromCache
	{
		[Token(Token = "0x6005646")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005647")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F8F")]
	public bool IsStale
	{
		[Token(Token = "0x6005648")]
		[Address(RVA = "0x1573470", Offset = "0x1571A70", VA = "0x181573470")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005649")]
		[Address(RVA = "0x15736C0", Offset = "0x1571CC0", VA = "0x1815736C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F90")]
	public bool IsRefreshing
	{
		[Token(Token = "0x600564A")]
		[Address(RVA = "0x1573430", Offset = "0x1571A30", VA = "0x181573430")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600564B")]
		[Address(RVA = "0x15736B0", Offset = "0x1571CB0", VA = "0x1815736B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F91")]
	public bool HasCredits
	{
		[Token(Token = "0x600564C")]
		[Address(RVA = "0x1979E60", Offset = "0x1978460", VA = "0x181979E60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600563F")]
	[Address(RVA = "0x1573360", Offset = "0x1571960", VA = "0x181573360")]
	private AottgCreditsResult(AottgCreditsResultState state, AottgCreditsResponse credits, string error, bool isFromCache, bool isStale, bool isRefreshing)
	{
	}

	[Token(Token = "0x600564D")]
	[Address(RVA = "0x2365920", Offset = "0x2363F20", VA = "0x182365920")]
	public static AottgCreditsResult LoadingNoCache()
	{
		return null;
	}

	[Token(Token = "0x600564E")]
	[Address(RVA = "0x23659A0", Offset = "0x2363FA0", VA = "0x1823659A0")]
	public static AottgCreditsResult ReadyFresh(AottgCreditsResponse credits, bool isFromCache)
	{
		return null;
	}

	[Token(Token = "0x600564F")]
	[Address(RVA = "0x2365A40", Offset = "0x2364040", VA = "0x182365A40")]
	public static AottgCreditsResult ReadyStaleRefreshing(AottgCreditsResponse credits)
	{
		return null;
	}

	[Token(Token = "0x6005650")]
	[Address(RVA = "0x2365800", Offset = "0x2363E00", VA = "0x182365800")]
	public static AottgCreditsResult FailedNoCache(string error)
	{
		return null;
	}

	[Token(Token = "0x6005651")]
	[Address(RVA = "0x2365890", Offset = "0x2363E90", VA = "0x182365890")]
	public static AottgCreditsResult FailedRefreshStale(AottgCreditsResponse credits, string error)
	{
		return null;
	}
}
