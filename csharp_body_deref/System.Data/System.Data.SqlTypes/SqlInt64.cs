using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000AB")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlInt64 : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0x8")]
	private long m_value;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly long s_lLowIntMask;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x8")]
	private static readonly long s_lHighIntMask;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlInt64 Null;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0x20")]
	public static readonly SqlInt64 Zero;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0x30")]
	public static readonly SqlInt64 MinValue;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0x40")]
	public static readonly SqlInt64 MaxValue;

	[Token(Token = "0x17000195")]
	public bool IsNull
	{
		[Token(Token = "0x6000A43")]
		[Address(RVA = "0x42C74A0", Offset = "0x42C74A0", VA = "0x42C74A0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000196")]
	public long Value
	{
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x42C74B0", Offset = "0x42C74B0", VA = "0x42C74B0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x42D8E30", Offset = "0x42D8E30", VA = "0x42D8E30")]
	private SqlInt64(bool fNull)
	{
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x42D8E40", Offset = "0x42D8E40", VA = "0x42D8E40")]
	public SqlInt64(long value)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x42D8E50", Offset = "0x42D8E50", VA = "0x42D8E50")]
	public static implicit operator SqlInt64(long x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x42D8E60", Offset = "0x42D8E60", VA = "0x42D8E60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x42D8ED0", Offset = "0x42D8ED0", VA = "0x42D8ED0")]
	public static SqlInt64 operator -(SqlInt64 x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x42D8F60", Offset = "0x42D8F60", VA = "0x42D8F60")]
	public static SqlInt64 operator +(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x42D90E0", Offset = "0x42D90E0", VA = "0x42D90E0")]
	public static SqlInt64 operator -(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x42D9240", Offset = "0x42D9240", VA = "0x42D9240")]
	public static SqlInt64 operator *(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x42D9410", Offset = "0x42D9410", VA = "0x42D9410")]
	public static SqlInt64 operator /(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x42D9570", Offset = "0x42D9570", VA = "0x42D9570")]
	public static SqlInt64 operator %(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x42C7A00", Offset = "0x42C7A00", VA = "0x42C7A00")]
	public static implicit operator SqlInt64(SqlByte x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x42D7010", Offset = "0x42D7010", VA = "0x42D7010")]
	public static implicit operator SqlInt64(SqlInt16 x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x42D8620", Offset = "0x42D8620", VA = "0x42D8620")]
	public static implicit operator SqlInt64(SqlInt32 x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x42D22F0", Offset = "0x42D22F0", VA = "0x42D22F0")]
	public static explicit operator SqlInt64(SqlDecimal x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x42D90D0", Offset = "0x42D90D0", VA = "0x42D90D0")]
	private static bool SameSignLong(long x, long y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x42D96C0", Offset = "0x42D96C0", VA = "0x42D96C0")]
	public static SqlBoolean operator ==(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x42D97B0", Offset = "0x42D97B0", VA = "0x42D97B0")]
	public static SqlBoolean operator <(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x42D98A0", Offset = "0x42D98A0", VA = "0x42D98A0")]
	public static SqlBoolean operator >(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x42D9990", Offset = "0x42D9990", VA = "0x42D9990")]
	public static SqlBoolean LessThan(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x42D9A00", Offset = "0x42D9A00", VA = "0x42D9A00")]
	public static SqlBoolean GreaterThan(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x42D9A70", Offset = "0x42D9A70", VA = "0x42D9A70")]
	public SqlByte ToSqlByte()
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x42D9AD0", Offset = "0x42D9AD0", VA = "0x42D9AD0")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x42D9B30", Offset = "0x42D9B30", VA = "0x42D9B30")]
	public SqlInt16 ToSqlInt16()
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x42D9B90", Offset = "0x42D9B90", VA = "0x42D9B90")]
	public SqlInt32 ToSqlInt32()
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x42D9BF0", Offset = "0x42D9BF0", VA = "0x42D9BF0")]
	public SqlDecimal ToSqlDecimal()
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x42D9C70", Offset = "0x42D9C70", VA = "0x42D9C70", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x42D9D60", Offset = "0x42D9D60", VA = "0x42D9D60")]
	public int CompareTo(SqlInt64 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x42D9ED0", Offset = "0x42D9ED0", VA = "0x42D9ED0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x42DA020", Offset = "0x42DA020", VA = "0x42DA020", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x42DA0E0", Offset = "0x42DA0E0", VA = "0x42DA0E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x42DA0F0", Offset = "0x42DA0F0", VA = "0x42DA0F0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x42DA1F0", Offset = "0x42DA1F0", VA = "0x42DA1F0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x42DA330", Offset = "0x42DA330", VA = "0x42DA330")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
