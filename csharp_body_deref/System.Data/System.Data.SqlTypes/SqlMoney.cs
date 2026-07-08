using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000AC")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlMoney : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x0")]
	private bool _fNotNull;

	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0x8")]
	private long _value;

	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int s_iMoneyScale;

	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x8")]
	private static readonly long s_lTickBase;

	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0x10")]
	private static readonly double s_dTickBase;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x18")]
	private static readonly long s_minLong;

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x20")]
	private static readonly long s_maxLong;

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x28")]
	public static readonly SqlMoney Null;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x38")]
	public static readonly SqlMoney Zero;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x48")]
	public static readonly SqlMoney MinValue;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x58")]
	public static readonly SqlMoney MaxValue;

	[Token(Token = "0x17000197")]
	public bool IsNull
	{
		[Token(Token = "0x6000A6A")]
		[Address(RVA = "0x42D1080", Offset = "0x42D1080", VA = "0x42D1080", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000198")]
	public decimal Value
	{
		[Token(Token = "0x6000A6B")]
		[Address(RVA = "0x42DA740", Offset = "0x42DA740", VA = "0x42DA740")]
		get
		{
			return default(decimal);
		}
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x42DA450", Offset = "0x42DA450", VA = "0x42DA450")]
	private SqlMoney(bool fNull)
	{
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x42DA460", Offset = "0x42DA460", VA = "0x42DA460")]
	internal SqlMoney(long value, int ignored)
	{
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x42DA470", Offset = "0x42DA470", VA = "0x42DA470")]
	public SqlMoney(int value)
	{
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x42DA4D0", Offset = "0x42DA4D0", VA = "0x42DA4D0")]
	public SqlMoney(long value)
	{
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x42DA5E0", Offset = "0x42DA5E0", VA = "0x42DA5E0")]
	public SqlMoney(decimal value)
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x42D1090", Offset = "0x42D1090", VA = "0x42D1090")]
	public decimal ToDecimal()
	{
		return default(decimal);
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x42D46E0", Offset = "0x42D46E0", VA = "0x42D46E0")]
	public double ToDouble()
	{
		return default(double);
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x42DA7D0", Offset = "0x42DA7D0", VA = "0x42DA7D0")]
	public static implicit operator SqlMoney(decimal x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x42DA800", Offset = "0x42DA800", VA = "0x42DA800")]
	public static implicit operator SqlMoney(long x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x42DA850", Offset = "0x42DA850", VA = "0x42DA850", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x42DA920", Offset = "0x42DA920", VA = "0x42DA920")]
	public static SqlMoney operator -(SqlMoney x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x42DAA00", Offset = "0x42DAA00", VA = "0x42DAA00")]
	public static SqlMoney operator +(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x42DABB0", Offset = "0x42DABB0", VA = "0x42DABB0")]
	public static SqlMoney operator -(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x42DAD60", Offset = "0x42DAD60", VA = "0x42DAD60")]
	public static SqlMoney operator *(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x42DAEC0", Offset = "0x42DAEC0", VA = "0x42DAEC0")]
	public static SqlMoney operator /(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x42DB020", Offset = "0x42DB020", VA = "0x42DB020")]
	public static implicit operator SqlMoney(SqlByte x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x42DB160", Offset = "0x42DB160", VA = "0x42DB160")]
	public static implicit operator SqlMoney(SqlInt16 x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x42DB270", Offset = "0x42DB270", VA = "0x42DB270")]
	public static implicit operator SqlMoney(SqlInt32 x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x42DB390", Offset = "0x42DB390", VA = "0x42DB390")]
	public static implicit operator SqlMoney(SqlInt64 x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x42D25A0", Offset = "0x42D25A0", VA = "0x42D25A0")]
	public static explicit operator SqlMoney(SqlDecimal x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x42DB460", Offset = "0x42DB460", VA = "0x42DB460")]
	public static SqlBoolean operator ==(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x42DB550", Offset = "0x42DB550", VA = "0x42DB550")]
	public static SqlBoolean operator <(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x42DB640", Offset = "0x42DB640", VA = "0x42DB640")]
	public static SqlBoolean operator >(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x42DB730", Offset = "0x42DB730", VA = "0x42DB730")]
	public static SqlBoolean LessThan(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x42DB7A0", Offset = "0x42DB7A0", VA = "0x42DB7A0")]
	public static SqlBoolean GreaterThan(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x42DB810", Offset = "0x42DB810", VA = "0x42DB810")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x42DB870", Offset = "0x42DB870", VA = "0x42DB870")]
	public SqlDecimal ToSqlDecimal()
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x42DB8F0", Offset = "0x42DB8F0", VA = "0x42DB8F0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x42DB9E0", Offset = "0x42DB9E0", VA = "0x42DB9E0")]
	public int CompareTo(SqlMoney value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A84")]
	[Address(RVA = "0x42DBB50", Offset = "0x42DBB50", VA = "0x42DBB50", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A85")]
	[Address(RVA = "0x42DBCA0", Offset = "0x42DBCA0", VA = "0x42DBCA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x42DBD10", Offset = "0x42DBD10", VA = "0x42DBD10", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x42DBD20", Offset = "0x42DBD20", VA = "0x42DBD20", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x42DBE80", Offset = "0x42DBE80", VA = "0x42DBE80", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x42DBFE0", Offset = "0x42DBFE0", VA = "0x42DBFE0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
