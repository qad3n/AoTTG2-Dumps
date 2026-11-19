// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.BitVector32
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Token(Token = "0x2000203")]
public struct BitVector32
{
	[Token(Token = "0x400074F")]
	[FieldOffset(Offset = "0x0")]
	private uint _data;

	[Token(Token = "0x170002E3")]
	public bool this[int bit]
	{
		[Token(Token = "0x6000DD2")]
		[Address(RVA = "0x627EFC0", Offset = "0x627DFC0", VA = "0x627EFC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000DD3")]
		[Address(RVA = "0x627EFD0", Offset = "0x627DFD0", VA = "0x627EFD0")]
		set
		{
		}
	}

	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x627EFF0", Offset = "0x627DFF0", VA = "0x627EFF0")]
	public static int CreateMask()
	{
		return default(int);
	}

	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x627F000", Offset = "0x627E000", VA = "0x627F000")]
	public static int CreateMask(int previous)
	{
		return default(int);
	}

	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x627F060", Offset = "0x627E060", VA = "0x627F060", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x627F0C0", Offset = "0x627E0C0", VA = "0x627F0C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x627F110", Offset = "0x627E110", VA = "0x627F110")]
	public static string ToString(BitVector32 value)
	{
		return null;
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x627F4C0", Offset = "0x627E4C0", VA = "0x627F4C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
