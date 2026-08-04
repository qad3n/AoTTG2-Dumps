// ==================== AoTTG2 cross-reference ====================
// Type: Mono.RuntimePropertyHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000017")]
internal struct RuntimePropertyHandle
{
	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x1700000A")]
	public IntPtr Value
	{
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x3ACDD90", Offset = "0x3ACDD90", VA = "0x3ACDD90")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x3ACDD80", Offset = "0x3ACDD80", VA = "0x3ACDD80")]
	internal RuntimePropertyHandle(IntPtr v)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3ACDDA0", Offset = "0x3ACDDA0", VA = "0x3ACDDA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3ACDE80", Offset = "0x3ACDE80", VA = "0x3ACDE80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
