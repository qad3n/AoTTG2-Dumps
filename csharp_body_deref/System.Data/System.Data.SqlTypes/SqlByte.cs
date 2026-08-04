// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlByte
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
		[Address(RVA = "0x46044F0", Offset = "0x46044F0", VA = "0x46044F0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000179")]
	public byte Value
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x4604500", Offset = "0x4604500", VA = "0x4604500")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x46044D0", Offset = "0x46044D0", VA = "0x46044D0")]
	private SqlByte(bool fNull)
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x46044E0", Offset = "0x46044E0", VA = "0x46044E0")]
	public SqlByte(byte value)
	{
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x4604580", Offset = "0x4604580", VA = "0x4604580")]
	public static implicit operator SqlByte(byte x)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x4604590", Offset = "0x4604590", VA = "0x4604590", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x4604600", Offset = "0x4604600", VA = "0x4604600")]
	public static SqlByte operator +(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x4604730", Offset = "0x4604730", VA = "0x4604730")]
	public static SqlByte operator -(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x4604860", Offset = "0x4604860", VA = "0x4604860")]
	public static SqlByte operator *(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x4604990", Offset = "0x4604990", VA = "0x4604990")]
	public static SqlByte operator /(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x4604AA0", Offset = "0x4604AA0", VA = "0x4604AA0")]
	public static explicit operator SqlByte(SqlInt64 x)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x4604C60", Offset = "0x4604C60", VA = "0x4604C60")]
	public static SqlBoolean operator ==(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x4604D40", Offset = "0x4604D40", VA = "0x4604D40")]
	public static SqlBoolean operator <(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x4604E20", Offset = "0x4604E20", VA = "0x4604E20")]
	public static SqlBoolean operator >(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x4604F00", Offset = "0x4604F00", VA = "0x4604F00")]
	public static SqlBoolean LessThan(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x4604F50", Offset = "0x4604F50", VA = "0x4604F50")]
	public static SqlBoolean GreaterThan(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x4604FA0", Offset = "0x4604FA0", VA = "0x4604FA0")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x4605110", Offset = "0x4605110", VA = "0x4605110")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x4605210", Offset = "0x4605210", VA = "0x4605210", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x46052F0", Offset = "0x46052F0", VA = "0x46052F0")]
	public int CompareTo(SqlByte value)
	{
		return default(int);
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x4605560", Offset = "0x4605560", VA = "0x4605560", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x4605690", Offset = "0x4605690", VA = "0x4605690", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x4605750", Offset = "0x4605750", VA = "0x4605750", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x4605760", Offset = "0x4605760", VA = "0x4605760", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x4605860", Offset = "0x4605860", VA = "0x4605860", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x46059A0", Offset = "0x46059A0", VA = "0x46059A0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
