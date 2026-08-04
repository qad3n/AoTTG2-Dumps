// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.IndexField
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200007E")]
internal readonly struct IndexField
{
	[Token(Token = "0x400029E")]
	[FieldOffset(Offset = "0x0")]
	public readonly DataColumn Column;

	[Token(Token = "0x400029F")]
	[FieldOffset(Offset = "0x8")]
	public readonly bool IsDescending;

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x45BF6A0", Offset = "0x45BF6A0", VA = "0x45BF6A0")]
	internal IndexField(DataColumn column, bool isDescending)
	{
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x45BF6C0", Offset = "0x45BF6C0", VA = "0x45BF6C0")]
	public static bool operator ==(IndexField if1, IndexField if2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x45BF6E0", Offset = "0x45BF6E0", VA = "0x45BF6E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x45BF750", Offset = "0x45BF750", VA = "0x45BF750", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
