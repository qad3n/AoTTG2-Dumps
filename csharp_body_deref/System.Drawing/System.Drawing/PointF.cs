// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.PointF
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Drawing;

[Serializable]
[Token(Token = "0x2000007")]
public struct PointF : IEquatable<PointF>
{
	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x0")]
	private float x;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x4")]
	private float y;

	[Token(Token = "0x1700000A")]
	public float X
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000B")]
	public float Y
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x562BB0", Offset = "0x5611B0", VA = "0x180562BB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x25B4660", Offset = "0x25B2C60", VA = "0x1825B4660")]
	public static bool operator ==(PointF left, PointF right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x25B4410", Offset = "0x25B2A10", VA = "0x1825B4410", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x25B43E0", Offset = "0x25B29E0", VA = "0x1825B43E0", Slot = "4")]
	public bool Equals(PointF other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x25B44B0", Offset = "0x25B2AB0", VA = "0x1825B44B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x25B4540", Offset = "0x25B2B40", VA = "0x1825B4540", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
