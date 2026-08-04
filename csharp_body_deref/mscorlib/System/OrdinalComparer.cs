// ==================== AoTTG2 cross-reference ====================
// Type: System.OrdinalComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200010F")]
public class OrdinalComparer : StringComparer
{
	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _ignoreCase;

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x3CD1A40", Offset = "0x3CD1A40", VA = "0x3CD1A40")]
	internal OrdinalComparer(bool ignoreCase)
	{
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x3CD1AA0", Offset = "0x3CD1AA0", VA = "0x3CD1AA0", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x3CD1AF0", Offset = "0x3CD1AF0", VA = "0x3CD1AF0", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x3CD1B40", Offset = "0x3CD1B40", VA = "0x3CD1B40", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x3CD1BC0", Offset = "0x3CD1BC0", VA = "0x3CD1BC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x3CD1C50", Offset = "0x3CD1C50", VA = "0x3CD1C50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
