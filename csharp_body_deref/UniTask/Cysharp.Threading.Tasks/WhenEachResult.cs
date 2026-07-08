using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200010D")]
public readonly struct WhenEachResult<T>
{
	[Token(Token = "0x17000048")]
	public T Result
	{
		[Token(Token = "0x600069A")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x17000049")]
	public Exception Exception
	{
		[Token(Token = "0x600069B")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004A")]
	public bool IsCompletedSuccessfully
	{
		[Token(Token = "0x600069C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004B")]
	public bool IsFaulted
	{
		[Token(Token = "0x600069D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600069E")]
	public WhenEachResult(T result)
	{
	}

	[Token(Token = "0x600069F")]
	public WhenEachResult(Exception exception)
	{
	}

	[Token(Token = "0x60006A0")]
	public void TryThrow()
	{
	}

	[Token(Token = "0x60006A1")]
	public T GetResult()
	{
		return (T)null;
	}

	[Token(Token = "0x60006A2")]
	public override string ToString()
	{
		return null;
	}
}
