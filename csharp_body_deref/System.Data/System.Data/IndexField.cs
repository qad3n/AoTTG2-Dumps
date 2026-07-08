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
	[Address(RVA = "0x4281F40", Offset = "0x4281F40", VA = "0x4281F40")]
	internal IndexField(DataColumn column, bool isDescending)
	{
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x4281F60", Offset = "0x4281F60", VA = "0x4281F60")]
	public static bool operator ==(IndexField if1, IndexField if2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x4281F80", Offset = "0x4281F80", VA = "0x4281F80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x4281FF0", Offset = "0x4281FF0", VA = "0x4281FF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
