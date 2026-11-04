// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlInt64
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
[Token(Token = "0x20000B5")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlInt64 : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x8")]
	private long m_value;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly long s_lLowIntMask;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x8")]
	private static readonly long s_lHighIntMask;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlInt64 Null;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x20")]
	public static readonly SqlInt64 Zero;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x30")]
	public static readonly SqlInt64 MinValue;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x40")]
	public static readonly SqlInt64 MaxValue;

	[Token(Token = "0x17000198")]
	public bool IsNull
	{
		[Token(Token = "0x6000A62")]
		[Address(RVA = "0x12906C0", Offset = "0x128ECC0", VA = "0x1812906C0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000199")]
	public long Value
	{
		[Token(Token = "0x6000A63")]
		[Address(RVA = "0x2574B90", Offset = "0x2573190", VA = "0x182574B90")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x256E800", Offset = "0x256CE00", VA = "0x18256E800")]
	private SqlInt64(bool fNull)
	{
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0xAE2650", Offset = "0xAE0C50", VA = "0x180AE2650")]
	public SqlInt64(long value)
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x25755D0", Offset = "0x2573BD0", VA = "0x1825755D0")]
	public static implicit operator SqlInt64(long x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x2574A40", Offset = "0x2573040", VA = "0x182574A40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x2575CD0", Offset = "0x25742D0", VA = "0x182575CD0")]
	public static SqlInt64 operator -(SqlInt64 x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x2574BF0", Offset = "0x25731F0", VA = "0x182574BF0")]
	public static SqlInt64 operator +(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x2575B70", Offset = "0x2574170", VA = "0x182575B70")]
	public static SqlInt64 operator -(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x2575850", Offset = "0x2573E50", VA = "0x182575850")]
	public static SqlInt64 operator *(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x2574D60", Offset = "0x2573360", VA = "0x182574D60")]
	public static SqlInt64 operator /(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x25756C0", Offset = "0x2573CC0", VA = "0x1825756C0")]
	public static SqlInt64 operator %(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x2575500", Offset = "0x2573B00", VA = "0x182575500")]
	public static implicit operator SqlInt64(SqlByte x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x2575430", Offset = "0x2573A30", VA = "0x182575430")]
	public static implicit operator SqlInt64(SqlInt16 x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x2575330", Offset = "0x2573930", VA = "0x182575330")]
	public static implicit operator SqlInt64(SqlInt32 x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x2574FC0", Offset = "0x25735C0", VA = "0x182574FC0")]
	public static explicit operator SqlInt64(SqlDecimal x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x2574250", Offset = "0x2572850", VA = "0x182574250")]
	private static bool SameSignLong(long x, long y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x2574EF0", Offset = "0x25734F0", VA = "0x182574EF0")]
	public static SqlBoolean operator ==(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x25755F0", Offset = "0x2573BF0", VA = "0x1825755F0")]
	public static SqlBoolean operator <(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x2575260", Offset = "0x2573860", VA = "0x182575260")]
	public static SqlBoolean operator >(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x2574100", Offset = "0x2572700", VA = "0x182574100")]
	public static SqlBoolean LessThan(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x2573FB0", Offset = "0x25725B0", VA = "0x182573FB0")]
	public static SqlBoolean GreaterThan(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x25744B0", Offset = "0x2572AB0", VA = "0x1825744B0")]
	public SqlByte ToSqlByte()
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x2574630", Offset = "0x2572C30", VA = "0x182574630")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x25747A0", Offset = "0x2572DA0", VA = "0x1825747A0")]
	public SqlInt16 ToSqlInt16()
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x25748F0", Offset = "0x2572EF0", VA = "0x1825748F0")]
	public SqlInt32 ToSqlInt32()
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x2574510", Offset = "0x2572B10", VA = "0x182574510")]
	public SqlDecimal ToSqlDecimal()
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x2573B40", Offset = "0x2572140", VA = "0x182573B40", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x25738D0", Offset = "0x2571ED0", VA = "0x1825738D0")]
	public int CompareTo(SqlInt64 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x2573C70", Offset = "0x2572270", VA = "0x182573C70", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x2573E80", Offset = "0x2572480", VA = "0x182573E80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x2574270", Offset = "0x2572870", VA = "0x182574270", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x2574390", Offset = "0x2572990", VA = "0x182574390", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x2573F40", Offset = "0x2572540", VA = "0x182573F40")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
