// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.Size
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Drawing;

[Serializable]
[Token(Token = "0x200000A")]
public struct Size : IEquatable<Size>
{
	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x0")]
	private int width;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x4")]
	private int height;

	[Token(Token = "0x17000014")]
	public int Width
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000015")]
	public int Height
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x25B48F0", Offset = "0x25B2EF0", VA = "0x1825B48F0")]
	public static bool operator ==(Size sz1, Size sz2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x25B5250", Offset = "0x25B3850", VA = "0x1825B5250", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x25B46A0", Offset = "0x25B2CA0", VA = "0x1825B46A0", Slot = "4")]
	public bool Equals(Size other)
	{
		return default(bool);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x25B52E0", Offset = "0x25B38E0", VA = "0x1825B52E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x25B5340", Offset = "0x25B3940", VA = "0x1825B5340", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
