// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.SizeF
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x5F5E740", Offset = "0x5F5D740", VA = "0x5F5E740")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000017")]
	public float Height
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x5F5E750", Offset = "0x5F5D750", VA = "0x5F5E750")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x5F5E720", Offset = "0x5F5D720", VA = "0x5F5E720")]
	public static bool operator ==(SizeF sz1, SizeF sz2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x5F5E760", Offset = "0x5F5D760", VA = "0x5F5E760", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x5F5E7E0", Offset = "0x5F5D7E0", VA = "0x5F5E7E0", Slot = "4")]
	public bool Equals(SizeF other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x5F5E800", Offset = "0x5F5D800", VA = "0x5F5E800", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x5F5E890", Offset = "0x5F5D890", VA = "0x5F5E890", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
