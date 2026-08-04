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

[Token(Token = "0x20007AA")]
public sealed class AottgCreditsResult
{
	[Token(Token = "0x17000E28")]
	public AottgCreditsResultState State
	{
		[Token(Token = "0x60049C8")]
		[Address(RVA = "0x43C62C0", Offset = "0x43C62C0", VA = "0x43C62C0")]
		[CompilerGenerated]
		get
		{
			return default(AottgCreditsResultState);
		}
		[Token(Token = "0x60049C9")]
		[Address(RVA = "0x43C62D0", Offset = "0x43C62D0", VA = "0x43C62D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E29")]
	public AottgCreditsResponse Credits
	{
		[Token(Token = "0x60049CA")]
		[Address(RVA = "0x43C62E0", Offset = "0x43C62E0", VA = "0x43C62E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60049CB")]
		[Address(RVA = "0x43C62F0", Offset = "0x43C62F0", VA = "0x43C62F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E2A")]
	public string Error
	{
		[Token(Token = "0x60049CC")]
		[Address(RVA = "0x43C6300", Offset = "0x43C6300", VA = "0x43C6300")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60049CD")]
		[Address(RVA = "0x43C6310", Offset = "0x43C6310", VA = "0x43C6310")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E2B")]
	public bool IsFromCache
	{
		[Token(Token = "0x60049CE")]
		[Address(RVA = "0x43C6320", Offset = "0x43C6320", VA = "0x43C6320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60049CF")]
		[Address(RVA = "0x43C6330", Offset = "0x43C6330", VA = "0x43C6330")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E2C")]
	public bool IsStale
	{
		[Token(Token = "0x60049D0")]
		[Address(RVA = "0x43C6340", Offset = "0x43C6340", VA = "0x43C6340")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60049D1")]
		[Address(RVA = "0x43C6350", Offset = "0x43C6350", VA = "0x43C6350")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E2D")]
	public bool IsRefreshing
	{
		[Token(Token = "0x60049D2")]
		[Address(RVA = "0x43C6360", Offset = "0x43C6360", VA = "0x43C6360")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60049D3")]
		[Address(RVA = "0x43C6370", Offset = "0x43C6370", VA = "0x43C6370")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E2E")]
	public bool HasCredits
	{
		[Token(Token = "0x60049D4")]
		[Address(RVA = "0x43C6380", Offset = "0x43C6380", VA = "0x43C6380")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60049C7")]
	[Address(RVA = "0x43C6250", Offset = "0x43C6250", VA = "0x43C6250")]
	private AottgCreditsResult(AottgCreditsResultState state, AottgCreditsResponse credits, string error, bool isFromCache, bool isStale, bool isRefreshing)
	{
	}

	[Token(Token = "0x60049D5")]
	[Address(RVA = "0x43C58E0", Offset = "0x43C58E0", VA = "0x43C58E0")]
	public static AottgCreditsResult LoadingNoCache()
	{
		return null;
	}

	[Token(Token = "0x60049D6")]
	[Address(RVA = "0x43C57E0", Offset = "0x43C57E0", VA = "0x43C57E0")]
	public static AottgCreditsResult ReadyFresh(AottgCreditsResponse credits, bool isFromCache)
	{
		return null;
	}

	[Token(Token = "0x60049D7")]
	[Address(RVA = "0x43C5860", Offset = "0x43C5860", VA = "0x43C5860")]
	public static AottgCreditsResult ReadyStaleRefreshing(AottgCreditsResponse credits)
	{
		return null;
	}

	[Token(Token = "0x60049D8")]
	[Address(RVA = "0x43C5CA0", Offset = "0x43C5CA0", VA = "0x43C5CA0")]
	public static AottgCreditsResult FailedNoCache(string error)
	{
		return null;
	}

	[Token(Token = "0x60049D9")]
	[Address(RVA = "0x43C5C20", Offset = "0x43C5C20", VA = "0x43C5C20")]
	public static AottgCreditsResult FailedRefreshStale(AottgCreditsResponse credits, string error)
	{
		return null;
	}
}
