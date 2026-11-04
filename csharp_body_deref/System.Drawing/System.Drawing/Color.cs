// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.Color
// Update status: NEW in this game update
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
		[Address(RVA = "0x25B10F0", Offset = "0x25AF6F0", VA = "0x1825B10F0")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000002")]
	public byte G
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x25B0FC0", Offset = "0x25AF5C0", VA = "0x1825B0FC0")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000003")]
	public byte B
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x25B0FB0", Offset = "0x25AF5B0", VA = "0x1825B0FB0")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000004")]
	public byte A
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x25B0F90", Offset = "0x25AF590", VA = "0x1825B0F90")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000005")]
	public bool IsKnownColor
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x25B0FE0", Offset = "0x25AF5E0", VA = "0x1825B0FE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000006")]
	public string Name
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x25B0FF0", Offset = "0x25AF5F0", VA = "0x1825B0FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000007")]
	private long Value
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x25B1110", Offset = "0x25AF710", VA = "0x1825B1110")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x25B0D10", Offset = "0x25AF310", VA = "0x1825B0D10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x25B0C00", Offset = "0x25AF200", VA = "0x1825B0C00")]
	public static bool operator ==(Color left, Color right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x25B0B30", Offset = "0x25AF130", VA = "0x1825B0B30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x25B0C00", Offset = "0x25AF200", VA = "0x1825B0C00", Slot = "4")]
	public bool Equals(Color other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x25B0C30", Offset = "0x25AF230", VA = "0x1825B0C30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
