using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x200076F")]
public sealed class AottgQueryFetchResult<TValue>
{
	[Token(Token = "0x17000DBD")]
	public bool Success
	{
		[Token(Token = "0x60047BE")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60047BF")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DBE")]
	public TValue Value
	{
		[Token(Token = "0x60047C0")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x60047C1")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000DBF")]
	public string Error
	{
		[Token(Token = "0x60047C2")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60047C3")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60047C4")]
	public static AottgQueryFetchResult<TValue> Ok(TValue value)
	{
		return null;
	}

	[Token(Token = "0x60047C5")]
	public static AottgQueryFetchResult<TValue> Fail(string error)
	{
		return null;
	}

	[Token(Token = "0x60047C6")]
	public AottgQueryFetchResult()
	{
	}
}
