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

[Token(Token = "0x20009C8")]
public sealed class AottgQueryResult<TValue>
{
	[Token(Token = "0x17000FA1")]
	public AottgQueryResultState State
	{
		[Token(Token = "0x6005A94")]
		[CompilerGenerated]
		get
		{
			return default(AottgQueryResultState);
		}
		[Token(Token = "0x6005A95")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FA2")]
	public TValue Value
	{
		[Token(Token = "0x6005A96")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6005A97")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FA3")]
	public string Error
	{
		[Token(Token = "0x6005A98")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005A99")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FA4")]
	public bool IsFromCache
	{
		[Token(Token = "0x6005A9A")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005A9B")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005A9C")]
	public static AottgQueryResult<TValue> LoadingNoCache()
	{
		return null;
	}

	[Token(Token = "0x6005A9D")]
	public static AottgQueryResult<TValue> ReadyFresh(TValue value, bool isFromCache)
	{
		return null;
	}

	[Token(Token = "0x6005A9E")]
	public static AottgQueryResult<TValue> ReadyStaleRefreshing(TValue value)
	{
		return null;
	}

	[Token(Token = "0x6005A9F")]
	public static AottgQueryResult<TValue> FailedNoCache(string error, bool isFromCache = false)
	{
		return null;
	}

	[Token(Token = "0x6005AA0")]
	public static AottgQueryResult<TValue> FailedRefreshStale(TValue value, string error)
	{
		return null;
	}

	[Token(Token = "0x6005AA1")]
	public AottgQueryResult()
	{
	}
}
