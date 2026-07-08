using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000A6")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlDecimal : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x0")]
	internal byte _bStatus;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x1")]
	internal byte _bLen;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x2")]
	internal byte _bPrec;

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x3")]
	internal byte _bScale;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x4")]
	internal uint _data1;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x8")]
	internal uint _data2;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0xC")]
	internal uint _data3;

	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x10")]
	internal uint _data4;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x0")]
	private static readonly byte s_NUMERIC_MAX_PRECISION;

	[Token(Token = "0x4000389")]
	[FieldOffset(Offset = "0x1")]
	public static readonly byte MaxPrecision;

	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0x2")]
	public static readonly byte MaxScale;

	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x3")]
	private static readonly byte s_bNullMask;

	[Token(Token = "0x400038C")]
	[FieldOffset(Offset = "0x4")]
	private static readonly byte s_bIsNull;

	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x5")]
	private static readonly byte s_bNotNull;

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x6")]
	private static readonly byte s_bReverseNullMask;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x7")]
	private static readonly byte s_bSignMask;

	[Token(Token = "0x4000390")]
	[FieldOffset(Offset = "0x8")]
	private static readonly byte s_bPositive;

	[Token(Token = "0x4000391")]
	[FieldOffset(Offset = "0x9")]
	private static readonly byte s_bNegative;

	[Token(Token = "0x4000392")]
	[FieldOffset(Offset = "0xA")]
	private static readonly byte s_bReverseSignMask;

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0xC")]
	private static readonly uint s_uiZero;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int s_cNumeMax;

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x18")]
	private static readonly long s_lInt32Base;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ulong s_ulInt32Base;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x28")]
	private static readonly ulong s_ulInt32BaseForMod;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x30")]
	internal static readonly ulong s_llMax;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x38")]
	private static readonly uint s_ulBase10;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x40")]
	private static readonly double s_DUINT_BASE;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x48")]
	private static readonly double s_DUINT_BASE2;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x50")]
	private static readonly double s_DUINT_BASE3;

	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x58")]
	private static readonly double s_DMAX_NUME;

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x60")]
	private static readonly uint s_DBL_DIG;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x64")]
	private static readonly byte s_cNumeDivScaleMin;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x68")]
	private static readonly uint[] s_rgulShiftBase;

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x70")]
	private static readonly uint[] s_decimalHelpersLo;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x78")]
	private static readonly uint[] s_decimalHelpersMid;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x80")]
	private static readonly uint[] s_decimalHelpersHi;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x88")]
	private static readonly uint[] s_decimalHelpersHiHi;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x90")]
	private static readonly byte[] s_rgCLenFromPrec;

	[Token(Token = "0x40003A6")]
	[FieldOffset(Offset = "0x98")]
	private static readonly uint s_ulT1;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0x9C")]
	private static readonly uint s_ulT2;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0xA0")]
	private static readonly uint s_ulT3;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0xA4")]
	private static readonly uint s_ulT4;

	[Token(Token = "0x40003AA")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly uint s_ulT5;

	[Token(Token = "0x40003AB")]
	[FieldOffset(Offset = "0xAC")]
	private static readonly uint s_ulT6;

	[Token(Token = "0x40003AC")]
	[FieldOffset(Offset = "0xB0")]
	private static readonly uint s_ulT7;

	[Token(Token = "0x40003AD")]
	[FieldOffset(Offset = "0xB4")]
	private static readonly uint s_ulT8;

	[Token(Token = "0x40003AE")]
	[FieldOffset(Offset = "0xB8")]
	private static readonly uint s_ulT9;

	[Token(Token = "0x40003AF")]
	[FieldOffset(Offset = "0xC0")]
	private static readonly ulong s_dwlT10;

	[Token(Token = "0x40003B0")]
	[FieldOffset(Offset = "0xC8")]
	private static readonly ulong s_dwlT11;

	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0xD0")]
	private static readonly ulong s_dwlT12;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0xD8")]
	private static readonly ulong s_dwlT13;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0xE0")]
	private static readonly ulong s_dwlT14;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0xE8")]
	private static readonly ulong s_dwlT15;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0xF0")]
	private static readonly ulong s_dwlT16;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0xF8")]
	private static readonly ulong s_dwlT17;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x100")]
	private static readonly ulong s_dwlT18;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x108")]
	private static readonly ulong s_dwlT19;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x110")]
	public static readonly SqlDecimal Null;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x124")]
	public static readonly SqlDecimal MinValue;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x138")]
	public static readonly SqlDecimal MaxValue;

	[Token(Token = "0x17000188")]
	public bool IsNull
	{
		[Token(Token = "0x6000990")]
		[Address(RVA = "0x42CC1A0", Offset = "0x42CC1A0", VA = "0x42CC1A0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000189")]
	public decimal Value
	{
		[Token(Token = "0x6000991")]
		[Address(RVA = "0x42CC200", Offset = "0x42CC200", VA = "0x42CC200")]
		get
		{
			return default(decimal);
		}
	}

	[Token(Token = "0x1700018A")]
	public bool IsPositive
	{
		[Token(Token = "0x6000992")]
		[Address(RVA = "0x42CC440", Offset = "0x42CC440", VA = "0x42CC440")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018B")]
	public byte Scale
	{
		[Token(Token = "0x6000995")]
		[Address(RVA = "0x42CC600", Offset = "0x42CC600", VA = "0x42CC600")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x1700018C")]
	public int[] Data
	{
		[Token(Token = "0x6000996")]
		[Address(RVA = "0x42CC700", Offset = "0x42CC700", VA = "0x42CC700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x42CB2C0", Offset = "0x42CB2C0", VA = "0x42CB2C0")]
	private byte CalculatePrecision()
	{
		return default(byte);
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x42CB4F0", Offset = "0x42CB4F0", VA = "0x42CB4F0")]
	private bool VerifyPrecision(byte precision)
	{
		return default(bool);
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x42CB700", Offset = "0x42CB700", VA = "0x42CB700")]
	private SqlDecimal(bool fNull)
	{
	}

	[Token(Token = "0x600098C")]
	[Address(RVA = "0x42CB770", Offset = "0x42CB770", VA = "0x42CB770")]
	public SqlDecimal(decimal value)
	{
	}

	[Token(Token = "0x600098D")]
	[Address(RVA = "0x42CB8C0", Offset = "0x42CB8C0", VA = "0x42CB8C0")]
	public SqlDecimal(int value)
	{
	}

	[Token(Token = "0x600098E")]
	[Address(RVA = "0x42CBAC0", Offset = "0x42CBAC0", VA = "0x42CBAC0")]
	public SqlDecimal(long value)
	{
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x42CBE70", Offset = "0x42CBE70", VA = "0x42CBE70")]
	private SqlDecimal(uint[] rglData, byte bLen, byte bPrec, byte bScale, bool fPositive)
	{
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x42CC140", Offset = "0x42CC140", VA = "0x42CC140")]
	private void SetPositive()
	{
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x42CC580", Offset = "0x42CC580", VA = "0x42CC580")]
	private void SetSignBit(bool fPositive)
	{
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x42CC890", Offset = "0x42CC890", VA = "0x42CC890", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x42CCDE0", Offset = "0x42CCDE0", VA = "0x42CCDE0")]
	public static SqlDecimal Parse(string s)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x42CD900", Offset = "0x42CD900", VA = "0x42CD900")]
	public double ToDouble()
	{
		return default(double);
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x42CC260", Offset = "0x42CC260", VA = "0x42CC260")]
	private decimal ToDecimal()
	{
		return default(decimal);
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x42CDB10", Offset = "0x42CDB10", VA = "0x42CDB10")]
	public static implicit operator SqlDecimal(decimal x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x42CDB30", Offset = "0x42CDB30", VA = "0x42CDB30")]
	public static implicit operator SqlDecimal(long x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x42CDB70", Offset = "0x42CDB70", VA = "0x42CDB70")]
	public static SqlDecimal operator -(SqlDecimal x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x42CDDA0", Offset = "0x42CDDA0", VA = "0x42CDDA0")]
	public static SqlDecimal operator +(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x42CEAF0", Offset = "0x42CEAF0", VA = "0x42CEAF0")]
	public static SqlDecimal operator -(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x42CEBE0", Offset = "0x42CEBE0", VA = "0x42CEBE0")]
	public static SqlDecimal operator *(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x42CF8A0", Offset = "0x42CF8A0", VA = "0x42CF8A0")]
	public static SqlDecimal operator /(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x42D0B00", Offset = "0x42D0B00", VA = "0x42D0B00")]
	public static implicit operator SqlDecimal(SqlByte x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x42D0BE0", Offset = "0x42D0BE0", VA = "0x42D0BE0")]
	public static implicit operator SqlDecimal(SqlInt16 x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x42D0D20", Offset = "0x42D0D20", VA = "0x42D0D20")]
	public static implicit operator SqlDecimal(SqlInt32 x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x42D0EB0", Offset = "0x42D0EB0", VA = "0x42D0EB0")]
	public static implicit operator SqlDecimal(SqlInt64 x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x42D0F90", Offset = "0x42D0F90", VA = "0x42D0F90")]
	public static implicit operator SqlDecimal(SqlMoney x)
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x42D0A90", Offset = "0x42D0A90", VA = "0x42D0A90")]
	private static void ZeroToMaxLen(uint[] rgulData, int cUI4sCur)
	{
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x42CC120", Offset = "0x42CC120", VA = "0x42CC120")]
	private bool FZero()
	{
		return default(bool);
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x42CEAB0", Offset = "0x42CEAB0", VA = "0x42CEAB0")]
	private bool FGt10_38()
	{
		return default(bool);
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x42D11B0", Offset = "0x42D11B0", VA = "0x42D11B0")]
	private bool FGt10_38(uint[] rglData)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x42CB990", Offset = "0x42CB990", VA = "0x42CB990")]
	private static byte BGetPrecUI4(uint value)
	{
		return default(byte);
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x42CBB90", Offset = "0x42CBB90", VA = "0x42CBB90")]
	private static byte BGetPrecUI8(ulong dwlVal)
	{
		return default(byte);
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x42CD6D0", Offset = "0x42CD6D0", VA = "0x42CD6D0")]
	private void AddULong(uint ulAdd)
	{
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x42CD430", Offset = "0x42CD430", VA = "0x42CD430")]
	private void MultByULong(uint uiMultiplier)
	{
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x42D1240", Offset = "0x42D1240", VA = "0x42D1240")]
	private uint DivByULong(uint iDivisor)
	{
		return default(uint);
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x42CE590", Offset = "0x42CE590", VA = "0x42CE590")]
	internal void AdjustScale(int digits, bool fRound)
	{
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x42CE960", Offset = "0x42CE960", VA = "0x42CE960")]
	private int LAbsCmp(SqlDecimal snumOp)
	{
		return default(int);
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x42D1450", Offset = "0x42D1450", VA = "0x42D1450")]
	private static void MpMove(uint[] rgulS, int ciulS, uint[] rgulD, out int ciulD)
	{
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x42D14A0", Offset = "0x42D14A0", VA = "0x42D14A0")]
	private static void MpSet(uint[] rgulD, out int ciulD, uint iulN)
	{
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x42D14D0", Offset = "0x42D14D0", VA = "0x42D14D0")]
	private static void MpNormalize(uint[] rgulU, ref int ciulU)
	{
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x42D1510", Offset = "0x42D1510", VA = "0x42D1510")]
	private static void MpMul1(uint[] piulD, ref int ciulD, uint iulX)
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x42CCCC0", Offset = "0x42CCCC0", VA = "0x42CCCC0")]
	private static void MpDiv1(uint[] rgulU, ref int ciulU, uint iulD, out uint iulR)
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x42D1610", Offset = "0x42D1610", VA = "0x42D1610")]
	internal static ulong DWL(uint lo, uint hi)
	{
		return default(ulong);
	}

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x42D15F0", Offset = "0x42D15F0", VA = "0x42D15F0")]
	private static uint HI(ulong x)
	{
		return default(uint);
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x42D1600", Offset = "0x42D1600", VA = "0x42D1600")]
	private static uint LO(ulong x)
	{
		return default(uint);
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x42CFEE0", Offset = "0x42CFEE0", VA = "0x42CFEE0")]
	private static void MpDiv(uint[] rgulU, int ciulU, uint[] rgulD, int ciulD, uint[] rgulQ, out int ciulQ, uint[] rgulR, out int ciulR)
	{
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x42D1620", Offset = "0x42D1620", VA = "0x42D1620")]
	private EComparison CompareNm(SqlDecimal snumOp)
	{
		return default(EComparison);
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x42CC060", Offset = "0x42CC060", VA = "0x42CC060")]
	private static void CheckValidPrecScale(byte bPrec, byte bScale)
	{
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x42D18A0", Offset = "0x42D18A0", VA = "0x42D18A0")]
	public static SqlBoolean operator ==(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x42D1AD0", Offset = "0x42D1AD0", VA = "0x42D1AD0")]
	public static SqlBoolean operator <(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x42D1D00", Offset = "0x42D1D00", VA = "0x42D1D00")]
	public static SqlBoolean operator >(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009C0")]
	[Address(RVA = "0x42D1F30", Offset = "0x42D1F30", VA = "0x42D1F30")]
	public static SqlBoolean LessThan(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x42D1FD0", Offset = "0x42D1FD0", VA = "0x42D1FD0")]
	public static SqlBoolean GreaterThan(SqlDecimal x, SqlDecimal y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009C2")]
	[Address(RVA = "0x42D2070", Offset = "0x42D2070", VA = "0x42D2070")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x42D2280", Offset = "0x42D2280", VA = "0x42D2280")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x42D2530", Offset = "0x42D2530", VA = "0x42D2530")]
	public SqlMoney ToSqlMoney()
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x42CCDD0", Offset = "0x42CCDD0", VA = "0x42CCDD0")]
	private static char ChFromDigit(uint uiDigit)
	{
		return default(char);
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x42D1200", Offset = "0x42D1200", VA = "0x42D1200")]
	private void StoreFromWorkingArray(uint[] rguiData)
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x42CD3D0", Offset = "0x42CD3D0", VA = "0x42CD3D0")]
	private void SetToZero()
	{
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x42D2740", Offset = "0x42D2740", VA = "0x42D2740", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x42D2850", Offset = "0x42D2850", VA = "0x42D2850")]
	public int CompareTo(SqlDecimal value)
	{
		return default(int);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x42D2AE0", Offset = "0x42D2AE0", VA = "0x42D2AE0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x42D2E50", Offset = "0x42D2E50", VA = "0x42D2E50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x42D2FD0", Offset = "0x42D2FD0", VA = "0x42D2FD0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x42D2FE0", Offset = "0x42D2FE0", VA = "0x42D2FE0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x42D3130", Offset = "0x42D3130", VA = "0x42D3130", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x42D32E0", Offset = "0x42D32E0", VA = "0x42D32E0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
