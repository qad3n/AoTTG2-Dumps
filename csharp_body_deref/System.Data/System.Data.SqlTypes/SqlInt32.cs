using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000AA")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlInt32 : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0x4")]
	private int m_value;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly long s_iIntMin;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0x8")]
	private static readonly long s_lBitNotIntMax;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlInt32 Null;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x18")]
	public static readonly SqlInt32 Zero;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x20")]
	public static readonly SqlInt32 MinValue;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0x28")]
	public static readonly SqlInt32 MaxValue;

	[Token(Token = "0x17000193")]
	public bool IsNull
	{
		[Token(Token = "0x6000A24")]
		[Address(RVA = "0x42D0E10", Offset = "0x42D0E10", VA = "0x42D0E10", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000194")]
	public int Value
	{
		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x42D0E20", Offset = "0x42D0E20", VA = "0x42D0E20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x42D7830", Offset = "0x42D7830", VA = "0x42D7830")]
	private SqlInt32(bool fNull)
	{
	}

	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x42D7840", Offset = "0x42D7840", VA = "0x42D7840")]
	public SqlInt32(int value)
	{
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x42D7850", Offset = "0x42D7850", VA = "0x42D7850")]
	public static implicit operator SqlInt32(int x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x42D7860", Offset = "0x42D7860", VA = "0x42D7860", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x42D78D0", Offset = "0x42D78D0", VA = "0x42D78D0")]
	public static SqlInt32 operator -(SqlInt32 x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x42D7980", Offset = "0x42D7980", VA = "0x42D7980")]
	public static SqlInt32 operator +(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x42D7B00", Offset = "0x42D7B00", VA = "0x42D7B00")]
	public static SqlInt32 operator -(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x42D7C60", Offset = "0x42D7C60", VA = "0x42D7C60")]
	public static SqlInt32 operator *(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x42D7DD0", Offset = "0x42D7DD0", VA = "0x42D7DD0")]
	public static SqlInt32 operator /(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x42D7F50", Offset = "0x42D7F50", VA = "0x42D7F50")]
	public static implicit operator SqlInt32(SqlByte x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x42D8020", Offset = "0x42D8020", VA = "0x42D8020")]
	public static implicit operator SqlInt32(SqlInt16 x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x42D80F0", Offset = "0x42D80F0", VA = "0x42D80F0")]
	public static explicit operator SqlInt32(SqlInt64 x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x42D7AF0", Offset = "0x42D7AF0", VA = "0x42D7AF0")]
	private static bool SameSignInt(int x, int y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x42D8210", Offset = "0x42D8210", VA = "0x42D8210")]
	public static SqlBoolean operator ==(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x42D8300", Offset = "0x42D8300", VA = "0x42D8300")]
	public static SqlBoolean operator <(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x42D83F0", Offset = "0x42D83F0", VA = "0x42D83F0")]
	public static SqlBoolean operator >(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x42D84E0", Offset = "0x42D84E0", VA = "0x42D84E0")]
	public static SqlBoolean LessThan(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x42D8530", Offset = "0x42D8530", VA = "0x42D8530")]
	public static SqlBoolean GreaterThan(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x42D8580", Offset = "0x42D8580", VA = "0x42D8580")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x42D85D0", Offset = "0x42D85D0", VA = "0x42D85D0")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x42D86E0", Offset = "0x42D86E0", VA = "0x42D86E0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x42D87D0", Offset = "0x42D87D0", VA = "0x42D87D0")]
	public int CompareTo(SqlInt32 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x42D8920", Offset = "0x42D8920", VA = "0x42D8920", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x42D8A60", Offset = "0x42D8A60", VA = "0x42D8A60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x42D8AF0", Offset = "0x42D8AF0", VA = "0x42D8AF0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x42D8B00", Offset = "0x42D8B00", VA = "0x42D8B00", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x42D8C00", Offset = "0x42D8C00", VA = "0x42D8C00", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x42D8D40", Offset = "0x42D8D40", VA = "0x42D8D40")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
