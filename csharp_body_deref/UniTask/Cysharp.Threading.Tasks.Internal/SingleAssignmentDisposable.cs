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
		[Address(RVA = "0x2944B60", Offset = "0x2943160", VA = "0x182944B60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007D")]
	public IDisposable Disposable
	{
		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D4E")]
		[Address(RVA = "0x2944C00", Offset = "0x2943200", VA = "0x182944C00")]
		set
		{
		}
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x2944A00", Offset = "0x2943000", VA = "0x182944A00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x2944AF0", Offset = "0x29430F0", VA = "0x182944AF0")]
	public SingleAssignmentDisposable()
	{
	}
}
