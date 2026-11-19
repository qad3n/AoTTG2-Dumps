// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlDecimal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000B0")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlDecimal : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x0")]
	internal byte _bStatus;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x1")]
	internal byte _bLen;

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x2")]
	internal byte _bPrec;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x3")]
	internal byte _bScale;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x4")]
	internal uint _data1;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x8")]
	internal uint _data2;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0xC")]
	internal uint _data3;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x10")]
	internal uint _data4;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte s_NUMERIC_MAX_PRECISION;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x1")]
	public static readonly byte MaxPrecision;

	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x2")]
	public static readonly byte MaxScale;

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x3")]
	private static readonly byte s_bNullMask;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x4")]
	private static readonly byte s_bIsNull;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x5")]
	private static readonly byte s_bNotNull;

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x6")]
	private static readonly byte s_bReverseNullMask;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x7")]
	private static readonly byte s_bSignMask;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x8")]
	private static readonly byte s_bPositive;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x9")]
	private static readonly byte s_bNegative;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0xA")]
	private static readonly byte s_bReverseSignMask;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0xC")]
	private static readonly uint s_uiZero;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int s_cNumeMax;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0x18")]
	private static readonly long s_lInt32Base;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ulong s_ulInt32Base;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0x28")]
	private static readonly ulong s_ulInt32BaseForMod;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly ulong s_llMax;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0x38")]
	private static readonly uint s_ulBase10;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0x40")]
	private static readonly double s_DUINT_BASE;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0x48")]
	private static readonly double s_DUINT_BASE2;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0x50")]
	private static readonly double s_DUINT_BASE3;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0x58")]
	private static readonly double s_DMAX_NUME;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x60")]
	private static readonly uint s_DBL_DIG;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x64")]
	private static readonly byte s_cNumeDivScaleMin;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x68")]
	private static readonly uint[] s_rgulShiftBase;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x70")]
	private static readonly uint[] s_decimalHelpersLo;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x78")]
	private static readonly uint[] s_decimalHelpersMid;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x80")]
	private static readonly uint[] s_decimalHelpersHi;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x88")]
	private static readonly uint[] s_decimalHelpersHiHi;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x90")]
	private static readonly byte[] s_rgCLenFromPrec;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x98")]
	private static readonly uint s_ulT1;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x9C")]
	private static readonly uint s_ulT2;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0xA0")]
	private static readonly uint s_ulT3;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0xA4")]
	private static readonly uint s_ulT4;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly uint s_ulT5;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0xAC")]
	private static readonly uint s_ulT6;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0xB0")]
	private static readonly uint s_ulT7;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0xB4")]
	private static readonly uint s_ulT8;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0xB8")]
	private static readonly uint s_ulT9;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0xC0")]
	private static readonly ulong s_dwlT10;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0xC8")]
	private static readonly ulong s_dwlT11;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0xD0")]
	private static readonly ulong s_dwlT12;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0xD8")]
	private static readonly ulong s_dwlT13;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0xE0")]
	private static readonly ulong s_dwlT14;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0xE8")]
	private static readonly ulong s_dwlT15;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0xF0")]
	private static readonly ulong s_dwlT16;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0xF8")]
	private static readonly ulong s_dwlT17;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x100")]
	private static readonly ulong s_dwlT18;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x108")]
	private static readonly ulong s_dwlT19;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x110")]
	public static readonly SqlDecimal Null;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x124")]
	public static readonly SqlDecimal MinValue;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0x138")]
	public static readonly SqlDecimal MaxValue;

	[Token(Token = "0x1700018B")]
	public bool IsNull
	{
		[Token(Token = "0x60009AF")]
		[Address(RVA = "0x5F0CE30", Offset = "0x5F0BE30", VA = "0x5F0CE30", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018C")]
	public decimal Value
	{
		[Token(Token = "0x60009B0")]
		[Address(RVA = "0x5F0CE90", Offset = "0x5F0BE90", VA = "0x5F0CE90")]
		get
		{
			return 0m;
		}
	}

	[Token(Token = "0x1700018D")]
	public bool IsPositive
	{
		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x5F0D0D0", Offset = "0x5F0C0D0", VA = "0x5F0D0D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018E")]
	public byte Scale
	{
		[Token(Token = "0x60009B4")]
		[Address(RVA = "0x5F0D290", Offset = "0x5F0C290", VA = "0x5F0D290")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x1700018F")]
	public int[] Data
	{
		[Token(Token = "0x60009B5")]
		[Address(RVA = "0x5F0D390", Offset = "0x5F0C390", VA = "0x5F0D390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x5F0BE00", Offset = "0x5F0AE00", VA = "0x5F0BE00")]
	private byte CalculatePrecision()
	{
		return default(byte);
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x5F0C030", Offset = "0x5F0B030", VA = "0x5F0C030")]
	private bool VerifyPrecision(byte precision)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x5F0C240", Offset = "0x5F0B240", VA = "0x5F0C240")]
	private SqlDecimal(bool fNull)
	{
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x5F0C2B0", Offset = "0x5F0B2B0", VA = "0x5F0C2B0")]
	public SqlDecimal(decimal value)
	{
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x5F0C400", Offset = "0x5F0B400", VA = "0x5F0C400")]
	public SqlDecimal(int value)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x5F0C6A0", Offset = "0x5F0B6A0", VA = "0x5F0C6A0")]
	public SqlDecimal(long value)
	{
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x5F0CB30", Offset = "0x5F0BB30", VA = "0x5F0CB30")]
	private SqlDecimal(uint[] rglData, byte bLen, byte bPrec, byte bScale, bool fPositive)
	{
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x5F0CDD0", Offset = "0x5F0BDD0", VA = "0x5F0CDD0")]
	private void SetPositive()
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x5F0D210", Offset = "0x5F0C210", VA = "0x5F0D210")]
	private void SetSignBit(bool fPositive)
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x5F0D520", Offset = "0x5F0C520", VA = "0x5F0D520", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x5F0DB30", Offset = "0x5F0CB30", VA = "0x5F0DB30")]
	public static SqlDecimal Parse(string s)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x5F0E710", Offset = "0x5F0D710", VA = "0x5F0E710")]
	public double ToDouble()
	{
		return default(double);
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x5F0CEF0", Offset = "0x5F0BEF0", VA = "0x5F0CEF0")]
	private decimal ToDecimal()
	{
		return 0m;
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x5F0E930", Offset = "0x5F0D930", VA = "0x5F0E930")]
	public static implicit operator SqlDecimal(decimal x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x5F0E950", Offset = "0x5F0D950", VA = "0x5F0E950")]
	public static implicit operator SqlDecimal(long x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x5F0E990", Offset = "0x5F0D990", VA = "0x5F0E990")]
	public static SqlDecimal operator -(SqlDecimal x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x5F0EC10", Offset = "0x5F0DC10", VA = "0x5F0EC10")]
	public static SqlDecimal operator +(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x5F0F9C0", Offset = "0x5F0E9C0", VA = "0x5F0F9C0")]
	public static SqlDecimal operator -(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x5F0FA80", Offset = "0x5F0EA80", VA = "0x5F0FA80")]
	public static SqlDecimal operator *(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x5F10710", Offset = "0x5F0F710", VA = "0x5F10710")]
	public static SqlDecimal operator /(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x5F11990", Offset = "0x5F10990", VA = "0x5F11990")]
	public static implicit operator SqlDecimal(SqlByte x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x5F11A70", Offset = "0x5F10A70", VA = "0x5F11A70")]
	public static implicit operator SqlDecimal(SqlInt16 x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x5F11BB0", Offset = "0x5F10BB0", VA = "0x5F11BB0")]
	public static implicit operator SqlDecimal(SqlInt32 x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x5F11D40", Offset = "0x5F10D40", VA = "0x5F11D40")]
	public static implicit operator SqlDecimal(SqlInt64 x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x5F11E20", Offset = "0x5F10E20", VA = "0x5F11E20")]
	public static implicit operator SqlDecimal(SqlMoney x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x5F11920", Offset = "0x5F10920", VA = "0x5F11920")]
	private static void ZeroToMaxLen(uint[] rgulData, int cUI4sCur)
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x5F0CDB0", Offset = "0x5F0BDB0", VA = "0x5F0CDB0")]
	private bool FZero()
	{
		return default(bool);
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x5F0F980", Offset = "0x5F0E980", VA = "0x5F0F980")]
	private bool FGt10_38()
	{
		return default(bool);
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x5F12030", Offset = "0x5F11030", VA = "0x5F12030")]
	private bool FGt10_38(uint[] rglData)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x5F0C4D0", Offset = "0x5F0B4D0", VA = "0x5F0C4D0")]
	private static byte BGetPrecUI4(uint value)
	{
		return default(byte);
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x5F0C770", Offset = "0x5F0B770", VA = "0x5F0C770")]
	private static byte BGetPrecUI8(ulong dwlVal)
	{
		return default(byte);
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x5F0E4E0", Offset = "0x5F0D4E0", VA = "0x5F0E4E0")]
	private void AddULong(uint ulAdd)
	{
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x5F0E250", Offset = "0x5F0D250", VA = "0x5F0E250")]
	private void MultByULong(uint uiMultiplier)
	{
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x5F120C0", Offset = "0x5F110C0", VA = "0x5F120C0")]
	private uint DivByULong(uint iDivisor)
	{
		return default(uint);
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x5F0F420", Offset = "0x5F0E420", VA = "0x5F0F420")]
	internal void AdjustScale(int digits, bool fRound)
	{
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x5F0F840", Offset = "0x5F0E840", VA = "0x5F0F840")]
	private int LAbsCmp(SqlDecimal snumOp)
	{
		return default(int);
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x5F122F0", Offset = "0x5F112F0", VA = "0x5F122F0")]
	private static void MpMove(uint[] rgulS, int ciulS, uint[] rgulD, out int ciulD)
	{
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x5F12340", Offset = "0x5F11340", VA = "0x5F12340")]
	private static void MpSet(uint[] rgulD, out int ciulD, uint iulN)
	{
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x5F12370", Offset = "0x5F11370", VA = "0x5F12370")]
	private static void MpNormalize(uint[] rgulU, ref int ciulU)
	{
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x5F123B0", Offset = "0x5F113B0", VA = "0x5F123B0")]
	private static void MpMul1(uint[] piulD, ref int ciulD, uint iulX)
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x5F0DA00", Offset = "0x5F0CA00", VA = "0x5F0DA00")]
	private static void MpDiv1(uint[] rgulU, ref int ciulU, uint iulD, out uint iulR)
	{
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x5F124C0", Offset = "0x5F114C0", VA = "0x5F124C0")]
	internal static ulong DWL(uint lo, uint hi)
	{
		return default(ulong);
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x5F124A0", Offset = "0x5F114A0", VA = "0x5F124A0")]
	private static uint HI(ulong x)
	{
		return default(uint);
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x5F124B0", Offset = "0x5F114B0", VA = "0x5F124B0")]
	private static uint LO(ulong x)
	{
		return default(uint);
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x5F10D40", Offset = "0x5F0FD40", VA = "0x5F10D40")]
	private static void MpDiv(uint[] rgulU, int ciulU, uint[] rgulD, int ciulD, uint[] rgulQ, out int ciulQ, uint[] rgulR, out int ciulR)
	{
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x5F124D0", Offset = "0x5F114D0", VA = "0x5F124D0")]
	private EComparison CompareNm(SqlDecimal snumOp)
	{
		return default(EComparison);
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x5F0CCF0", Offset = "0x5F0BCF0", VA = "0x5F0CCF0")]
	private static void CheckValidPrecScale(byte bPrec, byte bScale)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x5F12930", Offset = "0x5F11930", VA = "0x5F12930")]
	public static SqlBoolean operator ==(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x5F12B20", Offset = "0x5F11B20", VA = "0x5F12B20")]
	public static SqlBoolean operator <(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x5F12D10", Offset = "0x5F11D10", VA = "0x5F12D10")]
	public static SqlBoolean operator >(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x5F12F00", Offset = "0x5F11F00", VA = "0x5F12F00")]
	public static SqlBoolean LessThan(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x5F12F60", Offset = "0x5F11F60", VA = "0x5F12F60")]
	public static SqlBoolean GreaterThan(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x5F12FC0", Offset = "0x5F11FC0", VA = "0x5F12FC0")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x5F131D0", Offset = "0x5F121D0", VA = "0x5F131D0")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x5F134A0", Offset = "0x5F124A0", VA = "0x5F134A0")]
	public SqlMoney ToSqlMoney()
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x5F0DB20", Offset = "0x5F0CB20", VA = "0x5F0DB20")]
	private static char ChFromDigit(uint uiDigit)
	{
		return default(char);
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x5F12080", Offset = "0x5F11080", VA = "0x5F12080")]
	private void StoreFromWorkingArray(uint[] rguiData)
	{
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x5F0E1E0", Offset = "0x5F0D1E0", VA = "0x5F0E1E0")]
	private void SetToZero()
	{
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x5F136B0", Offset = "0x5F126B0", VA = "0x5F136B0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x5F137C0", Offset = "0x5F127C0", VA = "0x5F137C0")]
	public int CompareTo(SqlDecimal value)
	{
		return default(int);
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x5F13AB0", Offset = "0x5F12AB0", VA = "0x5F13AB0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x5F13DF0", Offset = "0x5F12DF0", VA = "0x5F13DF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x5F13F80", Offset = "0x5F12F80", VA = "0x5F13F80", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x5F13F90", Offset = "0x5F12F90", VA = "0x5F13F90", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x5F140E0", Offset = "0x5F130E0", VA = "0x5F140E0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x5F14290", Offset = "0x5F13290", VA = "0x5F14290")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
