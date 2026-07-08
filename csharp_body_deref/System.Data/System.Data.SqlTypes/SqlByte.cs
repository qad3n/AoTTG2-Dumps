using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000A1")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlByte : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x400034E")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x1")]
	private byte m_value;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_iBitNotByteMax;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x4")]
	public static readonly SqlByte Null;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x6")]
	public static readonly SqlByte Zero;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SqlByte MinValue;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0xA")]
	public static readonly SqlByte MaxValue;

	[Token(Token = "0x17000178")]
	public bool IsNull
	{
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x42C6D90", Offset = "0x42C6D90", VA = "0x42C6D90", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000179")]
	public byte Value
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x42C6DA0", Offset = "0x42C6DA0", VA = "0x42C6DA0")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x42C6D70", Offset = "0x42C6D70", VA = "0x42C6D70")]
	private SqlByte(bool fNull)
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x42C6D80", Offset = "0x42C6D80", VA = "0x42C6D80")]
	public SqlByte(byte value)
	{
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x42C6E20", Offset = "0x42C6E20", VA = "0x42C6E20")]
	public static implicit operator SqlByte(byte x)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x42C6E30", Offset = "0x42C6E30", VA = "0x42C6E30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x42C6EA0", Offset = "0x42C6EA0", VA = "0x42C6EA0")]
	public static SqlByte operator +(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x42C6FD0", Offset = "0x42C6FD0", VA = "0x42C6FD0")]
	public static SqlByte operator -(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x42C7100", Offset = "0x42C7100", VA = "0x42C7100")]
	public static SqlByte operator *(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x42C7230", Offset = "0x42C7230", VA = "0x42C7230")]
	public static SqlByte operator /(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x42C7340", Offset = "0x42C7340", VA = "0x42C7340")]
	public static explicit operator SqlByte(SqlInt64 x)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x42C7500", Offset = "0x42C7500", VA = "0x42C7500")]
	public static SqlBoolean operator ==(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x42C75E0", Offset = "0x42C75E0", VA = "0x42C75E0")]
	public static SqlBoolean operator <(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x42C76C0", Offset = "0x42C76C0", VA = "0x42C76C0")]
	public static SqlBoolean operator >(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x42C77A0", Offset = "0x42C77A0", VA = "0x42C77A0")]
	public static SqlBoolean LessThan(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x42C77F0", Offset = "0x42C77F0", VA = "0x42C77F0")]
	public static SqlBoolean GreaterThan(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x42C7840", Offset = "0x42C7840", VA = "0x42C7840")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x42C79B0", Offset = "0x42C79B0", VA = "0x42C79B0")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x42C7AB0", Offset = "0x42C7AB0", VA = "0x42C7AB0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x42C7B90", Offset = "0x42C7B90", VA = "0x42C7B90")]
	public int CompareTo(SqlByte value)
	{
		return default(int);
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x42C7E00", Offset = "0x42C7E00", VA = "0x42C7E00", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x42C7F30", Offset = "0x42C7F30", VA = "0x42C7F30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x42C7FF0", Offset = "0x42C7FF0", VA = "0x42C7FF0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x42C8000", Offset = "0x42C8000", VA = "0x42C8000", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x42C8100", Offset = "0x42C8100", VA = "0x42C8100", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x42C8240", Offset = "0x42C8240", VA = "0x42C8240")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
