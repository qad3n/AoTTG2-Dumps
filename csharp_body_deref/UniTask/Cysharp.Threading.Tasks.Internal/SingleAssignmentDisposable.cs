// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000252")]
internal sealed class SingleAssignmentDisposable : IDisposable
{
	[Token(Token = "0x40006B1")]
	[FieldOffset(Offset = "0x10")]
	private readonly object gate;

	[Token(Token = "0x40006B2")]
	[FieldOffset(Offset = "0x18")]
	private IDisposable current;

	[Token(Token = "0x40006B3")]
	[FieldOffset(Offset = "0x20")]
	private bool disposed;

	[Token(Token = "0x1700007C")]
	public bool IsDisposed
	{
		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0x630C7D0", Offset = "0x630B7D0", VA = "0x630C7D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007D")]
	public IDisposable Disposable
	{
		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x630C890", Offset = "0x630B890", VA = "0x630C890")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D4E")]
		[Address(RVA = "0x630C8A0", Offset = "0x630B8A0", VA = "0x630C8A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x630CAB0", Offset = "0x630BAB0", VA = "0x630CAB0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x630CC20", Offset = "0x630BC20", VA = "0x630CC20")]
	public SingleAssignmentDisposable()
	{
	}
}
