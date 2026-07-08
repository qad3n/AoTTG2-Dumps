using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000A7")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlDouble : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x8")]
	private double m_value;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlDouble Null;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlDouble Zero;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x20")]
	public static readonly SqlDouble MinValue;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x30")]
	public static readonly SqlDouble MaxValue;

	[Token(Token = "0x1700018D")]
	public bool IsNull
	{
		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x42D37D0", Offset = "0x42D37D0", VA = "0x42D37D0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018E")]
	public double Value
	{
		[Token(Token = "0x60009D4")]
		[Address(RVA = "0x42D37E0", Offset = "0x42D37E0", VA = "0x42D37E0")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x42D3750", Offset = "0x42D3750", VA = "0x42D3750")]
	private SqlDouble(bool fNull)
	{
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x42D3760", Offset = "0x42D3760", VA = "0x42D3760")]
	public SqlDouble(double value)
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x42D3830", Offset = "0x42D3830", VA = "0x42D3830")]
	public static implicit operator SqlDouble(double x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x42D38A0", Offset = "0x42D38A0", VA = "0x42D38A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x42D3910", Offset = "0x42D3910", VA = "0x42D3910")]
	public static SqlDouble operator -(SqlDouble x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x42D3A20", Offset = "0x42D3A20", VA = "0x42D3A20")]
	public static SqlDouble operator +(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x42D3BB0", Offset = "0x42D3BB0", VA = "0x42D3BB0")]
	public static SqlDouble operator -(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x42D3D40", Offset = "0x42D3D40", VA = "0x42D3D40")]
	public static SqlDouble operator *(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x42D3ED0", Offset = "0x42D3ED0", VA = "0x42D3ED0")]
	public static SqlDouble operator /(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x42C7890", Offset = "0x42C7890", VA = "0x42C7890")]
	public static implicit operator SqlDouble(SqlByte x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x42D40D0", Offset = "0x42D40D0", VA = "0x42D40D0")]
	public static implicit operator SqlDouble(SqlInt16 x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x42D41F0", Offset = "0x42D41F0", VA = "0x42D41F0")]
	public static implicit operator SqlDouble(SqlInt32 x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x42D4310", Offset = "0x42D4310", VA = "0x42D4310")]
	public static implicit operator SqlDouble(SqlInt64 x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x42D4420", Offset = "0x42D4420", VA = "0x42D4420")]
	public static implicit operator SqlDouble(SqlSingle x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x42D45C0", Offset = "0x42D45C0", VA = "0x42D45C0")]
	public static implicit operator SqlDouble(SqlMoney x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x42D20E0", Offset = "0x42D20E0", VA = "0x42D20E0")]
	public static implicit operator SqlDouble(SqlDecimal x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x42D4770", Offset = "0x42D4770", VA = "0x42D4770")]
	public static SqlBoolean operator ==(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x42D4870", Offset = "0x42D4870", VA = "0x42D4870")]
	public static SqlBoolean operator <(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x42D4970", Offset = "0x42D4970", VA = "0x42D4970")]
	public static SqlBoolean operator >(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x42D4A70", Offset = "0x42D4A70", VA = "0x42D4A70")]
	public static SqlBoolean LessThan(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x42D4AF0", Offset = "0x42D4AF0", VA = "0x42D4AF0")]
	public static SqlBoolean GreaterThan(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x42D4B70", Offset = "0x42D4B70", VA = "0x42D4B70")]
	public SqlSingle ToSqlSingle()
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x42D4CB0", Offset = "0x42D4CB0", VA = "0x42D4CB0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x42D4DB0", Offset = "0x42D4DB0", VA = "0x42D4DB0")]
	public int CompareTo(SqlDouble value)
	{
		return default(int);
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x42D4F40", Offset = "0x42D4F40", VA = "0x42D4F40", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x42D50A0", Offset = "0x42D50A0", VA = "0x42D50A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x42D5190", Offset = "0x42D5190", VA = "0x42D5190", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x42D51A0", Offset = "0x42D51A0", VA = "0x42D51A0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x42D52B0", Offset = "0x42D52B0", VA = "0x42D52B0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x42D5400", Offset = "0x42D5400", VA = "0x42D5400")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
