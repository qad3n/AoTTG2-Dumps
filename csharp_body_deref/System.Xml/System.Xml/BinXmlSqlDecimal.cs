// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.BinXmlSqlDecimal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200000E")]
internal struct BinXmlSqlDecimal
{
	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x0")]
	internal byte m_bLen;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x1")]
	internal byte m_bPrec;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x2")]
	internal byte m_bScale;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x3")]
	internal byte m_bSign;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x4")]
	internal uint m_data1;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x8")]
	internal uint m_data2;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0xC")]
	internal uint m_data3;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x10")]
	internal uint m_data4;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte NUMERIC_MAX_PRECISION;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x1")]
	private static readonly byte MaxPrecision;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x2")]
	private static readonly byte MaxScale;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int x_cNumeMax;

	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x8")]
	private static readonly long x_lInt32Base;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ulong x_ulInt32Base;

	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ulong x_ulInt32BaseForMod;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly ulong x_llMax;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x28")]
	private static readonly double DUINT_BASE;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x30")]
	private static readonly double DUINT_BASE2;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x38")]
	private static readonly double DUINT_BASE3;

	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x40")]
	private static readonly uint[] x_rgulShiftBase;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x48")]
	private static readonly byte[] rgCLenFromPrec;

	[Token(Token = "0x17000002")]
	public bool IsPositive
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x5F8B860", Offset = "0x5F8A860", VA = "0x5F8B860")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x5F8B870", Offset = "0x5F8A870", VA = "0x5F8B870")]
	public BinXmlSqlDecimal(byte[] data, int offset, bool trim)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x5F8BC60", Offset = "0x5F8AC60", VA = "0x5F8BC60")]
	private static uint UIntFromByteArray(byte[] data, int offset)
	{
		return default(uint);
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x5F8BE90", Offset = "0x5F8AE90", VA = "0x5F8BE90")]
	private static void MpDiv1(uint[] rgulU, ref int ciulU, uint iulD, out uint iulR)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x5F8BFB0", Offset = "0x5F8AFB0", VA = "0x5F8BFB0")]
	private static void MpNormalize(uint[] rgulU, ref int ciulU)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x5F8BFF0", Offset = "0x5F8AFF0", VA = "0x5F8BFF0")]
	private static char ChFromDigit(uint uiDigit)
	{
		return default(char);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x5F8C000", Offset = "0x5F8B000", VA = "0x5F8C000")]
	public decimal ToDecimal()
	{
		return 0m;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x5F8BCC0", Offset = "0x5F8ACC0", VA = "0x5F8BCC0")]
	private void TrimTrailingZeros()
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x5F8C0F0", Offset = "0x5F8B0F0", VA = "0x5F8C0F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
