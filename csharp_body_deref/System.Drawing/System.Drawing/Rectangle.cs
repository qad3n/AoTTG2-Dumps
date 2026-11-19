// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.Rectangle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Drawing;

[Serializable]
[Token(Token = "0x2000008")]
public struct Rectangle : IEquatable<Rectangle>
{
	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x0")]
	private int x;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x4")]
	private int y;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x8")]
	private int width;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0xC")]
	private int height;

	[Token(Token = "0x1700000C")]
	public int X
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x5F5DD70", Offset = "0x5F5CD70", VA = "0x5F5DD70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000D")]
	public int Y
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x5F5DD80", Offset = "0x5F5CD80", VA = "0x5F5DD80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000E")]
	public int Width
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x5F5DD90", Offset = "0x5F5CD90", VA = "0x5F5DD90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000F")]
	public int Height
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x5F5DDA0", Offset = "0x5F5CDA0", VA = "0x5F5DDA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x5F5DDB0", Offset = "0x5F5CDB0", VA = "0x5F5DDB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x5F5DE30", Offset = "0x5F5CE30", VA = "0x5F5DE30", Slot = "4")]
	public bool Equals(Rectangle other)
	{
		return default(bool);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x5F5DE50", Offset = "0x5F5CE50", VA = "0x5F5DE50")]
	public static bool operator ==(Rectangle left, Rectangle right)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x5F5DE70", Offset = "0x5F5CE70", VA = "0x5F5DE70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x5F5DEE0", Offset = "0x5F5CEE0", VA = "0x5F5DEE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
