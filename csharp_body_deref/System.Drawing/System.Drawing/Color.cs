// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.Color
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Drawing;

[Serializable]
[Token(Token = "0x2000005")]
[DebuggerDisplay("{NameAndARGBValue}")]
public readonly struct Color : IEquatable<Color>
{
	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x0")]
	private readonly string name;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x8")]
	private readonly long value;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x10")]
	private readonly short knownColor;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x12")]
	private readonly short state;

	[Token(Token = "0x17000001")]
	public byte R
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x5F5D250", Offset = "0x5F5C250", VA = "0x5F5D250")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000002")]
	public byte G
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x5F5D320", Offset = "0x5F5C320", VA = "0x5F5D320")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000003")]
	public byte B
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x5F5D330", Offset = "0x5F5C330", VA = "0x5F5D330")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000004")]
	public byte A
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x5F5D340", Offset = "0x5F5C340", VA = "0x5F5D340")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000005")]
	public bool IsKnownColor
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x5F5D350", Offset = "0x5F5C350", VA = "0x5F5D350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000006")]
	public string Name
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x5F5D360", Offset = "0x5F5C360", VA = "0x5F5D360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	private long Value
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x5F5D260", Offset = "0x5F5C260", VA = "0x5F5D260")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x5F5D460", Offset = "0x5F5C460", VA = "0x5F5D460", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x5F5D6E0", Offset = "0x5F5C6E0", VA = "0x5F5D6E0")]
	public static bool operator ==(Color left, Color right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x5F5D720", Offset = "0x5F5C720", VA = "0x5F5D720", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x5F5D7A0", Offset = "0x5F5C7A0", VA = "0x5F5D7A0", Slot = "4")]
	public bool Equals(Color other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x5F5D7E0", Offset = "0x5F5C7E0", VA = "0x5F5D7E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
