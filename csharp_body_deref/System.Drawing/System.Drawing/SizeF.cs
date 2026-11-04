// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.SizeF
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Drawing;

[Serializable]
[Token(Token = "0x200000B")]
public struct SizeF : IEquatable<SizeF>
{
	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x0")]
	private float width;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x4")]
	private float height;

	[Token(Token = "0x17000016")]
	public float Width
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000017")]
	public float Height
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x562BB0", Offset = "0x5611B0", VA = "0x180562BB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x25B4660", Offset = "0x25B2C60", VA = "0x1825B4660")]
	public static bool operator ==(SizeF sz1, SizeF sz2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x25B5000", Offset = "0x25B3600", VA = "0x1825B5000", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x25B43E0", Offset = "0x25B29E0", VA = "0x1825B43E0", Slot = "4")]
	public bool Equals(SizeF other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x25B50A0", Offset = "0x25B36A0", VA = "0x1825B50A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x25B5130", Offset = "0x25B3730", VA = "0x1825B5130", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
