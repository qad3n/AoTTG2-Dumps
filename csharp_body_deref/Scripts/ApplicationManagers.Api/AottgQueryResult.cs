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

[Token(Token = "0x2000961")]
public sealed class AottgQueryResult<TValue>
{
	[Token(Token = "0x17000FC2")]
	public AottgQueryResultState State
	{
		[Token(Token = "0x600573B")]
		[CompilerGenerated]
		get
		{
			return default(AottgQueryResultState);
		}
		[Token(Token = "0x600573C")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FC3")]
	public TValue Value
	{
		[Token(Token = "0x600573D")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x600573E")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FC4")]
	public string Error
	{
		[Token(Token = "0x600573F")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005740")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FC5")]
	public bool IsFromCache
	{
		[Token(Token = "0x6005741")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005742")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005743")]
	public static AottgQueryResult<TValue> LoadingNoCache()
	{
		return null;
	}

	[Token(Token = "0x6005744")]
	public static AottgQueryResult<TValue> ReadyFresh(TValue value, bool isFromCache)
	{
		return null;
	}

	[Token(Token = "0x6005745")]
	public static AottgQueryResult<TValue> ReadyStaleRefreshing(TValue value)
	{
		return null;
	}

	[Token(Token = "0x6005746")]
	public static AottgQueryResult<TValue> FailedNoCache(string error, bool isFromCache = false)
	{
		return null;
	}

	[Token(Token = "0x6005747")]
	public static AottgQueryResult<TValue> FailedRefreshStale(TValue value, string error)
	{
		return null;
	}

	[Token(Token = "0x6005748")]
	public AottgQueryResult()
	{
	}
}
