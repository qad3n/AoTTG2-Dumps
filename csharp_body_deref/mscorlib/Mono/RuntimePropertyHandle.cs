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
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x52D9400", Offset = "0x52D8400", VA = "0x52D9400")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x52D93F0", Offset = "0x52D83F0", VA = "0x52D93F0")]
	internal RuntimePropertyHandle(IntPtr v)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x52D9410", Offset = "0x52D8410", VA = "0x52D9410", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x52D94F0", Offset = "0x52D84F0", VA = "0x52D94F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
