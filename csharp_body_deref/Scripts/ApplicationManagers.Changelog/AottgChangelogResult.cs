// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogResult
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20007B6")]
public sealed class AottgChangelogResult<TValue>
{
	[Token(Token = "0x17000E49")]
	public AottgChangelogResultState State
	{
		[Token(Token = "0x6004A2D")]
		[CompilerGenerated]
		get
		{
			return default(AottgChangelogResultState);
		}
		[Token(Token = "0x6004A2E")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E4A")]
	public TValue Value
	{
		[Token(Token = "0x6004A2F")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6004A30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E4B")]
	public string Error
	{
		[Token(Token = "0x6004A31")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004A32")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E4C")]
	public bool IsFromCache
	{
		[Token(Token = "0x6004A33")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004A34")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E4D")]
	public bool IsStale
	{
		[Token(Token = "0x6004A35")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004A36")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E4E")]
	public bool IsRefreshing
	{
		[Token(Token = "0x6004A37")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004A38")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004A2C")]
	private AottgChangelogResult(AottgChangelogResultState state, TValue value, string error, bool isFromCache, bool isStale, bool isRefreshing)
	{
	}

	[Token(Token = "0x6004A39")]
	public static AottgChangelogResult<TValue> LoadingNoCache()
	{
		return null;
	}

	[Token(Token = "0x6004A3A")]
	public static AottgChangelogResult<TValue> ReadyFresh(TValue value, bool isFromCache)
	{
		return null;
	}

	[Token(Token = "0x6004A3B")]
	public static AottgChangelogResult<TValue> ReadyStaleRefreshing(TValue value)
	{
		return null;
	}

	[Token(Token = "0x6004A3C")]
	public static AottgChangelogResult<TValue> FailedNoCache(string error)
	{
		return null;
	}

	[Token(Token = "0x6004A3D")]
	public static AottgChangelogResult<TValue> FailedRefreshStale(TValue value, string error)
	{
		return null;
	}
}
