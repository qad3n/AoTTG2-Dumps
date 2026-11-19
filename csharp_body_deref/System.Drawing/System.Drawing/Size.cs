// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.Size
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x5F5E510", Offset = "0x5F5D510", VA = "0x5F5E510")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000015")]
	public int Height
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x5F5E520", Offset = "0x5F5D520", VA = "0x5F5E520")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x5F5E500", Offset = "0x5F5D500", VA = "0x5F5E500")]
	public static bool operator ==(Size sz1, Size sz2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x5F5E530", Offset = "0x5F5D530", VA = "0x5F5E530", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x5F5E590", Offset = "0x5F5D590", VA = "0x5F5E590", Slot = "4")]
	public bool Equals(Size other)
	{
		return default(bool);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x5F5E5A0", Offset = "0x5F5D5A0", VA = "0x5F5E5A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x5F5E5F0", Offset = "0x5F5D5F0", VA = "0x5F5E5F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
