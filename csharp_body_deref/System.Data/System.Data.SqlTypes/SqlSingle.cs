using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000AD")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlSingle : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x0")]
	private bool _fNotNull;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x4")]
	private float _value;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlSingle Null;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SqlSingle Zero;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlSingle MinValue;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x18")]
	public static readonly SqlSingle MaxValue;

	[Token(Token = "0x17000199")]
	public bool IsNull
	{
		[Token(Token = "0x6000A8E")]
		[Address(RVA = "0x42D4560", Offset = "0x42D4560", VA = "0x42D4560", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019A")]
	public float Value
	{
		[Token(Token = "0x6000A8F")]
		[Address(RVA = "0x42D4570", Offset = "0x42D4570", VA = "0x42D4570")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x42DC160", Offset = "0x42DC160", VA = "0x42DC160")]
	private SqlSingle(bool fNull)
	{
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x42DC170", Offset = "0x42DC170", VA = "0x42DC170")]
	public SqlSingle(float value)
	{
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x42DC1E0", Offset = "0x42DC1E0", VA = "0x42DC1E0")]
	public SqlSingle(double value)
	{
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x42DC2A0", Offset = "0x42DC2A0", VA = "0x42DC2A0")]
	public static implicit operator SqlSingle(float x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x42DC310", Offset = "0x42DC310", VA = "0x42DC310", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x42DC380", Offset = "0x42DC380", VA = "0x42DC380")]
	public static SqlSingle operator -(SqlSingle x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x42DC480", Offset = "0x42DC480", VA = "0x42DC480")]
	public static SqlSingle operator +(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x42DC610", Offset = "0x42DC610", VA = "0x42DC610")]
	public static SqlSingle operator -(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x42DC7A0", Offset = "0x42DC7A0", VA = "0x42DC7A0")]
	public static SqlSingle operator *(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x42DC930", Offset = "0x42DC930", VA = "0x42DC930")]
	public static SqlSingle operator /(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x42DCB00", Offset = "0x42DCB00", VA = "0x42DCB00")]
	public static implicit operator SqlSingle(SqlByte x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x42DCC30", Offset = "0x42DCC30", VA = "0x42DCC30")]
	public static implicit operator SqlSingle(SqlInt16 x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x42DCD60", Offset = "0x42DCD60", VA = "0x42DCD60")]
	public static implicit operator SqlSingle(SqlInt32 x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x42DCE90", Offset = "0x42DCE90", VA = "0x42DCE90")]
	public static implicit operator SqlSingle(SqlInt64 x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x42DCFB0", Offset = "0x42DCFB0", VA = "0x42DCFB0")]
	public static implicit operator SqlSingle(SqlMoney x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x42DD090", Offset = "0x42DD090", VA = "0x42DD090")]
	public static implicit operator SqlSingle(SqlDecimal x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x42D4BD0", Offset = "0x42D4BD0", VA = "0x42D4BD0")]
	public static explicit operator SqlSingle(SqlDouble x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x42DD1F0", Offset = "0x42DD1F0", VA = "0x42DD1F0")]
	public static SqlBoolean operator ==(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x42DD2F0", Offset = "0x42DD2F0", VA = "0x42DD2F0")]
	public static SqlBoolean operator <(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x42DD3F0", Offset = "0x42DD3F0", VA = "0x42DD3F0")]
	public static SqlBoolean operator >(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x42DD4F0", Offset = "0x42DD4F0", VA = "0x42DD4F0")]
	public static SqlBoolean LessThan(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x42DD540", Offset = "0x42DD540", VA = "0x42DD540")]
	public static SqlBoolean GreaterThan(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x42DD590", Offset = "0x42DD590", VA = "0x42DD590")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x42DD5E0", Offset = "0x42DD5E0", VA = "0x42DD5E0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x42DD6D0", Offset = "0x42DD6D0", VA = "0x42DD6D0")]
	public int CompareTo(SqlSingle value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x42DD820", Offset = "0x42DD820", VA = "0x42DD820", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x42DD960", Offset = "0x42DD960", VA = "0x42DD960", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x42DDA20", Offset = "0x42DDA20", VA = "0x42DDA20", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x42DDA30", Offset = "0x42DDA30", VA = "0x42DDA30", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x42DDB40", Offset = "0x42DDB40", VA = "0x42DDB40", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x42DDC90", Offset = "0x42DDC90", VA = "0x42DDC90")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
