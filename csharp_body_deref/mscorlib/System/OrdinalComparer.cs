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
[Token(Token = "0x2000137")]
public class OrdinalComparer : StringComparer
{
	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _ignoreCase;

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x1B45900", Offset = "0x1B43F00", VA = "0x181B45900")]
	internal OrdinalComparer(bool ignoreCase)
	{
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x1B456D0", Offset = "0x1B43CD0", VA = "0x181B456D0", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x1B45720", Offset = "0x1B43D20", VA = "0x181B45720", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x1B45810", Offset = "0x1B43E10", VA = "0x181B45810", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x1B45790", Offset = "0x1B43D90", VA = "0x181B45790", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x1B458A0", Offset = "0x1B43EA0", VA = "0x181B458A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
