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
	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _ignoreCase;

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x54D5990", Offset = "0x54D4990", VA = "0x54D5990")]
	internal OrdinalComparer(bool ignoreCase)
	{
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x54D59F0", Offset = "0x54D49F0", VA = "0x54D59F0", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x54D5A40", Offset = "0x54D4A40", VA = "0x54D5A40", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x54D5A90", Offset = "0x54D4A90", VA = "0x54D5A90", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x54D5B30", Offset = "0x54D4B30", VA = "0x54D5B30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x54D5BB0", Offset = "0x54D4BB0", VA = "0x54D5BB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
