// ==================== AoTTG2 cross-reference ====================
// Type: System.ByteMatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001CD")]
internal class ByteMatcher
{
	[Token(Token = "0x400075A")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable map;

	[Token(Token = "0x400075B")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable starts;

	[Token(Token = "0x60010AA")]
	[Address(RVA = "0x1B7BF00", Offset = "0x1B7A500", VA = "0x181B7BF00")]
	public void AddMapping(System.TermInfoStrings key, byte[] val)
	{
	}

	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	public void Sort()
	{
	}

	[Token(Token = "0x60010AC")]
	[Address(RVA = "0x1B7C300", Offset = "0x1B7A900", VA = "0x181B7C300")]
	public bool StartsWith(int c)
	{
		return default(bool);
	}

	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x1B7C010", Offset = "0x1B7A610", VA = "0x181B7C010")]
	public System.TermInfoStrings Match(char[] buffer, int offset, int length, out int used)
	{
		return default(System.TermInfoStrings);
	}

	[Token(Token = "0x60010AE")]
	[Address(RVA = "0x1B7C350", Offset = "0x1B7A950", VA = "0x181B7C350")]
	public ByteMatcher()
	{
	}
}
