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

[Token(Token = "0x2000035")]
internal struct RuntimePropertyHandle
{
	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x1700000A")]
	public IntPtr Value
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	internal RuntimePropertyHandle(IntPtr v)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x194CB90", Offset = "0x194B190", VA = "0x18194CB90", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x194C610", Offset = "0x194AC10", VA = "0x18194C610", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
