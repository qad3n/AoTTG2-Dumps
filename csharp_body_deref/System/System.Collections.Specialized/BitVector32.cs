// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Specialized.BitVector32
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections.Specialized;

[Token(Token = "0x2000242")]
public struct BitVector32
{
	[Token(Token = "0x400081E")]
	[FieldOffset(Offset = "0x0")]
	private uint _data;

	[Token(Token = "0x17000312")]
	public bool this[int bit]
	{
		[Token(Token = "0x6000F92")]
		[Address(RVA = "0x28CBD30", Offset = "0x28CA330", VA = "0x1828CBD30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F93")]
		[Address(RVA = "0x28CBD50", Offset = "0x28CA350", VA = "0x1828CBD50")]
		set
		{
		}
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040")]
	public static int CreateMask()
	{
		return default(int);
	}

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x28CBA20", Offset = "0x28CA020", VA = "0x1828CBA20")]
	public static int CreateMask(int previous)
	{
		return default(int);
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x28CBAA0", Offset = "0x28CA0A0", VA = "0x1828CBAA0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x28CBB20", Offset = "0x28CA120", VA = "0x1828CBB20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x28CBC50", Offset = "0x28CA250", VA = "0x1828CBC50")]
	public static string ToString(BitVector32 value)
	{
		return null;
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x28CBB70", Offset = "0x28CA170", VA = "0x1828CBB70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
