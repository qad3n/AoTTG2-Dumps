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
		[Address(RVA = "0x5F08070", Offset = "0x5F07070", VA = "0x5F08070", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000199")]
	public long Value
	{
		[Token(Token = "0x6000A63")]
		[Address(RVA = "0x5F08080", Offset = "0x5F07080", VA = "0x5F08080")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x5F19E50", Offset = "0x5F18E50", VA = "0x5F19E50")]
	private SqlInt64(bool fNull)
	{
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x5F19E60", Offset = "0x5F18E60", VA = "0x5F19E60")]
	public SqlInt64(long value)
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x5F19E70", Offset = "0x5F18E70", VA = "0x5F19E70")]
	public static implicit operator SqlInt64(long x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x5F19E80", Offset = "0x5F18E80", VA = "0x5F19E80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x5F19EF0", Offset = "0x5F18EF0", VA = "0x5F19EF0")]
	public static SqlInt64 operator -(SqlInt64 x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x5F19F80", Offset = "0x5F18F80", VA = "0x5F19F80")]
	public static SqlInt64 operator +(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x5F1A0D0", Offset = "0x5F190D0", VA = "0x5F1A0D0")]
	public static SqlInt64 operator -(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x5F1A220", Offset = "0x5F19220", VA = "0x5F1A220")]
	public static SqlInt64 operator *(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x5F1A3E0", Offset = "0x5F193E0", VA = "0x5F1A3E0")]
	public static SqlInt64 operator /(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x5F1A550", Offset = "0x5F19550", VA = "0x5F1A550")]
	public static SqlInt64 operator %(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x5F085D0", Offset = "0x5F075D0", VA = "0x5F085D0")]
	public static implicit operator SqlInt64(SqlByte x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x5F17FD0", Offset = "0x5F16FD0", VA = "0x5F17FD0")]
	public static implicit operator SqlInt64(SqlInt16 x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x5F19620", Offset = "0x5F18620", VA = "0x5F19620")]
	public static implicit operator SqlInt64(SqlInt32 x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x5F13240", Offset = "0x5F12240", VA = "0x5F13240")]
	public static explicit operator SqlInt64(SqlDecimal x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x5F1A0C0", Offset = "0x5F190C0", VA = "0x5F1A0C0")]
	private static bool SameSignLong(long x, long y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x5F1A6C0", Offset = "0x5F196C0", VA = "0x5F1A6C0")]
	public static SqlBoolean operator ==(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x5F1A7B0", Offset = "0x5F197B0", VA = "0x5F1A7B0")]
	public static SqlBoolean operator <(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x5F1A8A0", Offset = "0x5F198A0", VA = "0x5F1A8A0")]
	public static SqlBoolean operator >(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x5F1A990", Offset = "0x5F19990", VA = "0x5F1A990")]
	public static SqlBoolean LessThan(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x5F1AA00", Offset = "0x5F19A00", VA = "0x5F1AA00")]
	public static SqlBoolean GreaterThan(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x5F1AA70", Offset = "0x5F19A70", VA = "0x5F1AA70")]
	public SqlByte ToSqlByte()
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x5F1AAD0", Offset = "0x5F19AD0", VA = "0x5F1AAD0")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x5F1AB30", Offset = "0x5F19B30", VA = "0x5F1AB30")]
	public SqlInt16 ToSqlInt16()
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x5F1AB90", Offset = "0x5F19B90", VA = "0x5F1AB90")]
	public SqlInt32 ToSqlInt32()
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x5F1ABF0", Offset = "0x5F19BF0", VA = "0x5F1ABF0")]
	public SqlDecimal ToSqlDecimal()
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x5F1AC70", Offset = "0x5F19C70", VA = "0x5F1AC70", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x5F1AD70", Offset = "0x5F19D70", VA = "0x5F1AD70")]
	public int CompareTo(SqlInt64 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x5F1AF10", Offset = "0x5F19F10", VA = "0x5F1AF10", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x5F1B060", Offset = "0x5F1A060", VA = "0x5F1B060", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x5F1B130", Offset = "0x5F1A130", VA = "0x5F1B130", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x5F1B140", Offset = "0x5F1A140", VA = "0x5F1B140", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x5F1B240", Offset = "0x5F1A240", VA = "0x5F1B240", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x5F1B380", Offset = "0x5F1A380", VA = "0x5F1B380")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
