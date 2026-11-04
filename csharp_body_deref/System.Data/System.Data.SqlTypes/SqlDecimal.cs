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
		[Address(RVA = "0x256AB70", Offset = "0x2569170", VA = "0x18256AB70", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018C")]
	public decimal Value
	{
		[Token(Token = "0x60009B0")]
		[Address(RVA = "0x256ADD0", Offset = "0x25693D0", VA = "0x18256ADD0")]
		get
		{
			return 0m;
		}
	}

	[Token(Token = "0x1700018D")]
	public bool IsPositive
	{
		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x256ABD0", Offset = "0x25691D0", VA = "0x18256ABD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018E")]
	public byte Scale
	{
		[Token(Token = "0x60009B4")]
		[Address(RVA = "0x256ACE0", Offset = "0x25692E0", VA = "0x18256ACE0")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x1700018F")]
	public int[] Data
	{
		[Token(Token = "0x60009B5")]
		[Address(RVA = "0x256AA20", Offset = "0x2569020", VA = "0x18256AA20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x2565950", Offset = "0x2563F50", VA = "0x182565950")]
	private byte CalculatePrecision()
	{
		return default(byte);
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x2569810", Offset = "0x2567E10", VA = "0x182569810")]
	private bool VerifyPrecision(byte precision)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x256A4E0", Offset = "0x2568AE0", VA = "0x18256A4E0")]
	private SqlDecimal(bool fNull)
	{
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x256A8A0", Offset = "0x2568EA0", VA = "0x18256A8A0")]
	public SqlDecimal(decimal value)
	{
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x256A260", Offset = "0x2568860", VA = "0x18256A260")]
	public SqlDecimal(int value)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x256A550", Offset = "0x2568B50", VA = "0x18256A550")]
	public SqlDecimal(long value)
	{
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x256A650", Offset = "0x2568C50", VA = "0x18256A650")]
	private SqlDecimal(uint[] rglData, byte bLen, byte bPrec, byte bScale, bool fPositive)
	{
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x25687A0", Offset = "0x2566DA0", VA = "0x1825687A0")]
	private void SetPositive()
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x2568810", Offset = "0x2566E10", VA = "0x182568810")]
	private void SetSignBit(bool fPositive)
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x2569420", Offset = "0x2567A20", VA = "0x182569420", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x2568070", Offset = "0x2566670", VA = "0x182568070")]
	public static SqlDecimal Parse(string s)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x2568E30", Offset = "0x2567430", VA = "0x182568E30")]
	public double ToDouble()
	{
		return default(double);
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x2568C70", Offset = "0x2567270", VA = "0x182568C70")]
	private decimal ToDecimal()
	{
		return 0m;
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x256BF50", Offset = "0x256A550", VA = "0x18256BF50")]
	public static implicit operator SqlDecimal(decimal x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x256BF90", Offset = "0x256A590", VA = "0x18256BF90")]
	public static implicit operator SqlDecimal(long x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x256D570", Offset = "0x256BB70", VA = "0x18256D570")]
	public static SqlDecimal operator -(SqlDecimal x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x256AE40", Offset = "0x2569440", VA = "0x18256AE40")]
	public static SqlDecimal operator +(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x256D2D0", Offset = "0x256B8D0", VA = "0x18256D2D0")]
	public static SqlDecimal operator -(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x256C660", Offset = "0x256AC60", VA = "0x18256C660")]
	public static SqlDecimal operator *(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x256B5D0", Offset = "0x2569BD0", VA = "0x18256B5D0")]
	public static SqlDecimal operator /(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x256C1E0", Offset = "0x256A7E0", VA = "0x18256C1E0")]
	public static implicit operator SqlDecimal(SqlByte x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x256BFE0", Offset = "0x256A5E0", VA = "0x18256BFE0")]
	public static implicit operator SqlDecimal(SqlInt16 x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x256C3B0", Offset = "0x256A9B0", VA = "0x18256C3B0")]
	public static implicit operator SqlDecimal(SqlInt32 x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x256C0C0", Offset = "0x256A6C0", VA = "0x18256C0C0")]
	public static implicit operator SqlDecimal(SqlInt64 x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x256C2C0", Offset = "0x256A8C0", VA = "0x18256C2C0")]
	public static implicit operator SqlDecimal(SqlMoney x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x2569A50", Offset = "0x2568050", VA = "0x182569A50")]
	private static void ZeroToMaxLen(uint[] rgulData, int cUI4sCur)
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x2566AA0", Offset = "0x25650A0", VA = "0x182566AA0")]
	private bool FZero()
	{
		return default(bool);
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x2566A10", Offset = "0x2565010", VA = "0x182566A10")]
	private bool FGt10_38()
	{
		return default(bool);
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x2566A50", Offset = "0x2565050", VA = "0x182566A50")]
	private bool FGt10_38(uint[] rglData)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x2565420", Offset = "0x2563A20", VA = "0x182565420")]
	private static byte BGetPrecUI4(uint value)
	{
		return default(byte);
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x25655C0", Offset = "0x2563BC0", VA = "0x1825655C0")]
	private static byte BGetPrecUI8(ulong dwlVal)
	{
		return default(byte);
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x2564E00", Offset = "0x2563400", VA = "0x182564E00")]
	private void AddULong(uint ulAdd)
	{
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x2567DB0", Offset = "0x25663B0", VA = "0x182567DB0")]
	private void MultByULong(uint uiMultiplier)
	{
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x2566440", Offset = "0x2564A40", VA = "0x182566440")]
	private uint DivByULong(uint iDivisor)
	{
		return default(uint);
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x2565060", Offset = "0x2563660", VA = "0x182565060")]
	internal void AdjustScale(int digits, bool fRound)
	{
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x2566D10", Offset = "0x2565310", VA = "0x182566D10")]
	private int LAbsCmp(SqlDecimal snumOp)
	{
		return default(int);
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x2567C00", Offset = "0x2566200", VA = "0x182567C00")]
	private static void MpMove(uint[] rgulS, int ciulS, uint[] rgulD, out int ciulD)
	{
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x2567D80", Offset = "0x2566380", VA = "0x182567D80")]
	private static void MpSet(uint[] rgulD, out int ciulD, uint iulN)
	{
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x2567D40", Offset = "0x2566340", VA = "0x182567D40")]
	private static void MpNormalize(uint[] rgulU, ref int ciulU)
	{
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x2567C60", Offset = "0x2566260", VA = "0x182567C60")]
	private static void MpMul1(uint[] piulD, ref int ciulD, uint iulX)
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x2566F30", Offset = "0x2565530", VA = "0x182566F30")]
	private static void MpDiv1(uint[] rgulU, ref int ciulU, uint iulD, out uint iulR)
	{
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x2566430", Offset = "0x2564A30", VA = "0x182566430")]
	internal static ulong DWL(uint lo, uint hi)
	{
		return default(ulong);
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x1B31180", Offset = "0x1B2F780", VA = "0x181B31180")]
	private static uint HI(ulong x)
	{
		return default(uint);
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	private static uint LO(ulong x)
	{
		return default(uint);
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x2567020", Offset = "0x2565620", VA = "0x182567020")]
	private static void MpDiv(uint[] rgulU, int ciulU, uint[] rgulD, int ciulD, uint[] rgulQ, out int ciulQ, uint[] rgulR, out int ciulR)
	{
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x2565E80", Offset = "0x2564480", VA = "0x182565E80")]
	private EComparison CompareNm(SqlDecimal snumOp)
	{
		return default(EComparison);
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x2565DA0", Offset = "0x25643A0", VA = "0x182565DA0")]
	private static void CheckValidPrecScale(byte bPrec, byte bScale)
	{
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x256BC10", Offset = "0x256A210", VA = "0x18256BC10")]
	public static SqlBoolean operator ==(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x256C4C0", Offset = "0x256AAC0", VA = "0x18256C4C0")]
	public static SqlBoolean operator <(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x256BDB0", Offset = "0x256A3B0", VA = "0x18256BDB0")]
	public static SqlBoolean operator >(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x2566EB0", Offset = "0x25654B0", VA = "0x182566EB0")]
	public static SqlBoolean LessThan(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x2566C90", Offset = "0x2565290", VA = "0x182566C90")]
	public static SqlBoolean GreaterThan(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x2569010", Offset = "0x2567610", VA = "0x182569010")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x25691E0", Offset = "0x25677E0", VA = "0x1825691E0")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x2569260", Offset = "0x2567860", VA = "0x182569260")]
	public SqlMoney ToSqlMoney()
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x2565D90", Offset = "0x2564390", VA = "0x182565D90")]
	private static char ChFromDigit(uint uiDigit)
	{
		return default(char);
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x2568930", Offset = "0x2566F30", VA = "0x182568930")]
	private void StoreFromWorkingArray(uint[] rguiData)
	{
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x25688C0", Offset = "0x2566EC0", VA = "0x1825688C0")]
	private void SetToZero()
	{
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x2566300", Offset = "0x2564900", VA = "0x182566300", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x2566060", Offset = "0x2564660", VA = "0x182566060")]
	public int CompareTo(SqlDecimal value)
	{
		return default(int);
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x2566620", Offset = "0x2564C20", VA = "0x182566620", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x2566AC0", Offset = "0x25650C0", VA = "0x182566AC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x2568980", Offset = "0x2566F80", VA = "0x182568980", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x2568B10", Offset = "0x2567110", VA = "0x182568B10", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x2566C20", Offset = "0x2565220", VA = "0x182566C20")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
