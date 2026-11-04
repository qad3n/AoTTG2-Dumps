// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.Rectangle
// Update status: NEW in this game update
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
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000D")]
	public int Y
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000E")]
	public int Width
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000F")]
	public int Height
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x57AEF0", Offset = "0x5794F0", VA = "0x18057AEF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x25B4CE0", Offset = "0x25B32E0", VA = "0x1825B4CE0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x1B27550", Offset = "0x1B25B50", VA = "0x181B27550", Slot = "4")]
	public bool Equals(Rectangle other)
	{
		return default(bool);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x1B27550", Offset = "0x1B25B50", VA = "0x181B27550")]
	public static bool operator ==(Rectangle left, Rectangle right)
	{
		return default(bool);
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x25B4D80", Offset = "0x25B3380", VA = "0x1825B4D80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x25B4E10", Offset = "0x25B3410", VA = "0x1825B4E10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
