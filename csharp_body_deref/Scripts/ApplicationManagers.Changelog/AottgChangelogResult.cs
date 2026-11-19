// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20009A8")]
public sealed class AottgChangelogResult<TValue>
{
	[Token(Token = "0x17000F8B")]
	public AottgChangelogResultState State
	{
		[Token(Token = "0x60059FE")]
		[CompilerGenerated]
		get
		{
			return default(AottgChangelogResultState);
		}
		[Token(Token = "0x60059FF")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F8C")]
	public TValue Value
	{
		[Token(Token = "0x6005A00")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6005A01")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F8D")]
	public string Error
	{
		[Token(Token = "0x6005A02")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005A03")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F8E")]
	public bool IsFromCache
	{
		[Token(Token = "0x6005A04")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005A05")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F8F")]
	public bool IsStale
	{
		[Token(Token = "0x6005A06")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005A07")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F90")]
	public bool IsRefreshing
	{
		[Token(Token = "0x6005A08")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005A09")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60059FD")]
	private AottgChangelogResult(AottgChangelogResultState state, TValue value, string error, bool isFromCache, bool isStale, bool isRefreshing)
	{
	}

	[Token(Token = "0x6005A0A")]
	public static AottgChangelogResult<TValue> LoadingNoCache()
	{
		return null;
	}

	[Token(Token = "0x6005A0B")]
	public static AottgChangelogResult<TValue> ReadyFresh(TValue value, bool isFromCache)
	{
		return null;
	}

	[Token(Token = "0x6005A0C")]
	public static AottgChangelogResult<TValue> ReadyStaleRefreshing(TValue value)
	{
		return null;
	}

	[Token(Token = "0x6005A0D")]
	public static AottgChangelogResult<TValue> FailedNoCache(string error)
	{
		return null;
	}

	[Token(Token = "0x6005A0E")]
	public static AottgChangelogResult<TValue> FailedRefreshStale(TValue value, string error)
	{
		return null;
	}
}
