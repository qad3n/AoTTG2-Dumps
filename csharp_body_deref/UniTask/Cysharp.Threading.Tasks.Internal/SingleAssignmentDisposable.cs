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

[Token(Token = "0x200024F")]
internal sealed class SingleAssignmentDisposable : IDisposable
{
	[Token(Token = "0x400069E")]
	[FieldOffset(Offset = "0x10")]
	private readonly object gate;

	[Token(Token = "0x400069F")]
	[FieldOffset(Offset = "0x18")]
	private IDisposable current;

	[Token(Token = "0x40006A0")]
	[FieldOffset(Offset = "0x20")]
	private bool disposed;

	[Token(Token = "0x1700007A")]
	public bool IsDisposed
	{
		[Token(Token = "0x6000D28")]
		[Address(RVA = "0x4A1F170", Offset = "0x4A1F170", VA = "0x4A1F170")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700007B")]
	public IDisposable Disposable
	{
		[Token(Token = "0x6000D29")]
		[Address(RVA = "0x4A1F230", Offset = "0x4A1F230", VA = "0x4A1F230")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D2A")]
		[Address(RVA = "0x4A1F240", Offset = "0x4A1F240", VA = "0x4A1F240")]
		set
		{
		}
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x4A1F440", Offset = "0x4A1F440", VA = "0x4A1F440", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x4A1F5D0", Offset = "0x4A1F5D0", VA = "0x4A1F5D0")]
	public SingleAssignmentDisposable()
	{
	}
}
