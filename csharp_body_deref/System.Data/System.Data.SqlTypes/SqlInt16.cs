using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000A9")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlInt16 : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x2")]
	private short m_value;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_MASKI2;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x4")]
	public static readonly SqlInt16 Null;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SqlInt16 Zero;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0xC")]
	public static readonly SqlInt16 MinValue;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlInt16 MaxValue;

	[Token(Token = "0x17000191")]
	public bool IsNull
	{
		[Token(Token = "0x6000A07")]
		[Address(RVA = "0x42D0CC0", Offset = "0x42D0CC0", VA = "0x42D0CC0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000192")]
	public short Value
	{
		[Token(Token = "0x6000A08")]
		[Address(RVA = "0x42D0CD0", Offset = "0x42D0CD0", VA = "0x42D0CD0")]
		get
		{
			return default(short);
		}
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x42D63E0", Offset = "0x42D63E0", VA = "0x42D63E0")]
	private SqlInt16(bool fNull)
	{
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x42D63F0", Offset = "0x42D63F0", VA = "0x42D63F0")]
	public SqlInt16(short value)
	{
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x42D6400", Offset = "0x42D6400", VA = "0x42D6400")]
	public static implicit operator SqlInt16(short x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x42D6410", Offset = "0x42D6410", VA = "0x42D6410", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x42D6480", Offset = "0x42D6480", VA = "0x42D6480")]
	public static SqlInt16 operator -(SqlInt16 x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x42D6520", Offset = "0x42D6520", VA = "0x42D6520")]
	public static SqlInt16 operator +(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x42D6640", Offset = "0x42D6640", VA = "0x42D6640")]
	public static SqlInt16 operator -(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x42D6760", Offset = "0x42D6760", VA = "0x42D6760")]
	public static SqlInt16 operator *(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x42D68D0", Offset = "0x42D68D0", VA = "0x42D68D0")]
	public static SqlInt16 operator /(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x42D6A40", Offset = "0x42D6A40", VA = "0x42D6A40")]
	public static implicit operator SqlInt16(SqlByte x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x42D6B10", Offset = "0x42D6B10", VA = "0x42D6B10")]
	public static explicit operator SqlInt16(SqlInt64 x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x42D6C30", Offset = "0x42D6C30", VA = "0x42D6C30")]
	public static SqlBoolean operator ==(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x42D6D10", Offset = "0x42D6D10", VA = "0x42D6D10")]
	public static SqlBoolean operator <(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x42D6DF0", Offset = "0x42D6DF0", VA = "0x42D6DF0")]
	public static SqlBoolean operator >(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x42D6ED0", Offset = "0x42D6ED0", VA = "0x42D6ED0")]
	public static SqlBoolean LessThan(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x42D6F20", Offset = "0x42D6F20", VA = "0x42D6F20")]
	public static SqlBoolean GreaterThan(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x42D6F70", Offset = "0x42D6F70", VA = "0x42D6F70")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x42D6FC0", Offset = "0x42D6FC0", VA = "0x42D6FC0")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x42D70D0", Offset = "0x42D70D0", VA = "0x42D70D0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x42D71B0", Offset = "0x42D71B0", VA = "0x42D71B0")]
	public int CompareTo(SqlInt16 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x42D7300", Offset = "0x42D7300", VA = "0x42D7300", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x42D7430", Offset = "0x42D7430", VA = "0x42D7430", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x42D74F0", Offset = "0x42D74F0", VA = "0x42D74F0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x42D7500", Offset = "0x42D7500", VA = "0x42D7500", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x42D7610", Offset = "0x42D7610", VA = "0x42D7610", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x42D7750", Offset = "0x42D7750", VA = "0x42D7750")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
