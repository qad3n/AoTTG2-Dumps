// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.WhenEachResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200010B")]
public readonly struct WhenEachResult<T>
{
	[Token(Token = "0x17000048")]
	public T Result
	{
		[Token(Token = "0x6000698")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x17000049")]
	public Exception Exception
	{
		[Token(Token = "0x6000699")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004A")]
	public bool IsCompletedSuccessfully
	{
		[Token(Token = "0x600069A")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004B")]
	public bool IsFaulted
	{
		[Token(Token = "0x600069B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600069C")]
	public WhenEachResult(T result)
	{
	}

	[Token(Token = "0x600069D")]
	public WhenEachResult(Exception exception)
	{
	}

	[Token(Token = "0x600069E")]
	public void TryThrow()
	{
	}

	[Token(Token = "0x600069F")]
	public T GetResult()
	{
		return (T)null;
	}

	[Token(Token = "0x60006A0")]
	public override string ToString()
	{
		return null;
	}
}
