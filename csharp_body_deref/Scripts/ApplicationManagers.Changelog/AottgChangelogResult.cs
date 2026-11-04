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

[Token(Token = "0x2000941")]
public sealed class AottgChangelogResult<TValue>
{
	[Token(Token = "0x17000FAC")]
	public AottgChangelogResultState State
	{
		[Token(Token = "0x60056A5")]
		[CompilerGenerated]
		get
		{
			return default(AottgChangelogResultState);
		}
		[Token(Token = "0x60056A6")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FAD")]
	public TValue Value
	{
		[Token(Token = "0x60056A7")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x60056A8")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FAE")]
	public string Error
	{
		[Token(Token = "0x60056A9")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60056AA")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FAF")]
	public bool IsFromCache
	{
		[Token(Token = "0x60056AB")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60056AC")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FB0")]
	public bool IsStale
	{
		[Token(Token = "0x60056AD")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60056AE")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FB1")]
	public bool IsRefreshing
	{
		[Token(Token = "0x60056AF")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60056B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60056A4")]
	private AottgChangelogResult(AottgChangelogResultState state, TValue value, string error, bool isFromCache, bool isStale, bool isRefreshing)
	{
	}

	[Token(Token = "0x60056B1")]
	public static AottgChangelogResult<TValue> LoadingNoCache()
	{
		return null;
	}

	[Token(Token = "0x60056B2")]
	public static AottgChangelogResult<TValue> ReadyFresh(TValue value, bool isFromCache)
	{
		return null;
	}

	[Token(Token = "0x60056B3")]
	public static AottgChangelogResult<TValue> ReadyStaleRefreshing(TValue value)
	{
		return null;
	}

	[Token(Token = "0x60056B4")]
	public static AottgChangelogResult<TValue> FailedNoCache(string error)
	{
		return null;
	}

	[Token(Token = "0x60056B5")]
	public static AottgChangelogResult<TValue> FailedRefreshStale(TValue value, string error)
	{
		return null;
	}
}
