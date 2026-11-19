// ==================== AoTTG2 cross-reference ====================
// Type: Mono.RuntimeEventHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000016")]
internal struct RuntimeEventHandle
{
	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x17000009")]
	public IntPtr Value
	{
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x52D92F0", Offset = "0x52D82F0", VA = "0x52D92F0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x52D92E0", Offset = "0x52D82E0", VA = "0x52D92E0")]
	internal RuntimeEventHandle(IntPtr v)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x52D9300", Offset = "0x52D8300", VA = "0x52D9300", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x52D93E0", Offset = "0x52D83E0", VA = "0x52D93E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
