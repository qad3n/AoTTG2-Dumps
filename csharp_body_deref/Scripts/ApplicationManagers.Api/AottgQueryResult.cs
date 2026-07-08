using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000772")]
public sealed class AottgQueryResult<TValue>
{
	[Token(Token = "0x17000DC3")]
	public AottgQueryResultState State
	{
		[Token(Token = "0x60047CF")]
		[CompilerGenerated]
		get
		{
			return default(AottgQueryResultState);
		}
		[Token(Token = "0x60047D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DC4")]
	public TValue Value
	{
		[Token(Token = "0x60047D1")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x60047D2")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DC5")]
	public string Error
	{
		[Token(Token = "0x60047D3")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60047D4")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DC6")]
	public bool IsFromCache
	{
		[Token(Token = "0x60047D5")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60047D6")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60047D7")]
	public static AottgQueryResult<TValue> LoadingNoCache()
	{
		return null;
	}

	[Token(Token = "0x60047D8")]
	public static AottgQueryResult<TValue> ReadyFresh(TValue value, bool isFromCache)
	{
		return null;
	}

	[Token(Token = "0x60047D9")]
	public static AottgQueryResult<TValue> ReadyStaleRefreshing(TValue value)
	{
		return null;
	}

	[Token(Token = "0x60047DA")]
	public static AottgQueryResult<TValue> FailedNoCache(string error, bool isFromCache = false)
	{
		return null;
	}

	[Token(Token = "0x60047DB")]
	public static AottgQueryResult<TValue> FailedRefreshStale(TValue value, string error)
	{
		return null;
	}

	[Token(Token = "0x60047DC")]
	public AottgQueryResult()
	{
	}
}
