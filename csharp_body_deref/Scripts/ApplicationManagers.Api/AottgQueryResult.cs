// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgQueryResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgQueryResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20007D4")]
public sealed class AottgQueryResult<TValue>
{
	[Token(Token = "0x17000E5F")]
	public AottgQueryResultState State
	{
		[Token(Token = "0x6004AC2")]
		[CompilerGenerated]
		get
		{
			return default(AottgQueryResultState);
		}
		[Token(Token = "0x6004AC3")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E60")]
	public TValue Value
	{
		[Token(Token = "0x6004AC4")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6004AC5")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E61")]
	public string Error
	{
		[Token(Token = "0x6004AC6")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004AC7")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E62")]
	public bool IsFromCache
	{
		[Token(Token = "0x6004AC8")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004AC9")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004ACA")]
	public static AottgQueryResult<TValue> LoadingNoCache()
	{
		return null;
	}

	[Token(Token = "0x6004ACB")]
	public static AottgQueryResult<TValue> ReadyFresh(TValue value, bool isFromCache)
	{
		return null;
	}

	[Token(Token = "0x6004ACC")]
	public static AottgQueryResult<TValue> ReadyStaleRefreshing(TValue value)
	{
		return null;
	}

	[Token(Token = "0x6004ACD")]
	public static AottgQueryResult<TValue> FailedNoCache(string error, bool isFromCache = false)
	{
		return null;
	}

	[Token(Token = "0x6004ACE")]
	public static AottgQueryResult<TValue> FailedRefreshStale(TValue value, string error)
	{
		return null;
	}

	[Token(Token = "0x6004ACF")]
	public AottgQueryResult()
	{
	}
}
