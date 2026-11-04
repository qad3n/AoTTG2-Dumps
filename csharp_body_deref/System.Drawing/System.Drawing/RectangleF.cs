// ==================== AoTTG2 cross-reference ====================
// Type: System.Drawing.RectangleF
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Drawing;

[Serializable]
[Token(Token = "0x2000009")]
public struct RectangleF : IEquatable<RectangleF>
{
	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x0")]
	private float x;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x4")]
	private float y;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x8")]
	private float width;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0xC")]
	private float height;

	[Token(Token = "0x17000010")]
	public float X
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x562BA0", Offset = "0x5611A0", VA = "0x180562BA0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000011")]
	public float Y
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x562BB0", Offset = "0x5611B0", VA = "0x180562BB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000012")]
	public float Width
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x562B90", Offset = "0x561190", VA = "0x180562B90")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000013")]
	public float Height
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x562B80", Offset = "0x561180", VA = "0x180562B80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x25B4910", Offset = "0x25B2F10", VA = "0x1825B4910", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x25B49C0", Offset = "0x25B2FC0", VA = "0x1825B49C0", Slot = "4")]
	public bool Equals(RectangleF other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x25B49C0", Offset = "0x25B2FC0", VA = "0x1825B49C0")]
	public static bool operator ==(RectangleF left, RectangleF right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x25B4A00", Offset = "0x25B3000", VA = "0x1825B4A00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x25B4AE0", Offset = "0x25B30E0", VA = "0x1825B4AE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
