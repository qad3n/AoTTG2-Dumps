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

[Token(Token = "0x2000112")]
public readonly struct WhenEachResult<T>
{
	[Token(Token = "0x1700004A")]
	public T Result
	{
		[Token(Token = "0x60006B8")]
		[CompilerGenerated]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x1700004B")]
	public Exception Exception
	{
		[Token(Token = "0x60006B9")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	public bool IsCompletedSuccessfully
	{
		[Token(Token = "0x60006BA")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004D")]
	public bool IsFaulted
	{
		[Token(Token = "0x60006BB")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60006BC")]
	public WhenEachResult(T result)
	{
	}

	[Token(Token = "0x60006BD")]
	public WhenEachResult(Exception exception)
	{
	}

	[Token(Token = "0x60006BE")]
	public void TryThrow()
	{
	}

	[Token(Token = "0x60006BF")]
	public T GetResult()
	{
		return (T)null;
	}

	[Token(Token = "0x60006C0")]
	public override string ToString()
	{
		return null;
	}
}
