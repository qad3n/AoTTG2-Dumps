// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlInt32
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
[Token(Token = "0x20000B4")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlInt32 : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0x4")]
	private int m_value;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly long s_iIntMin;

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x8")]
	private static readonly long s_lBitNotIntMax;

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlInt32 Null;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x18")]
	public static readonly SqlInt32 Zero;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x20")]
	public static readonly SqlInt32 MinValue;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x28")]
	public static readonly SqlInt32 MaxValue;

	[Token(Token = "0x17000196")]
	public bool IsNull
	{
		[Token(Token = "0x6000A43")]
		[Address(RVA = "0x5F11CA0", Offset = "0x5F10CA0", VA = "0x5F11CA0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000197")]
	public int Value
	{
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x5F11CB0", Offset = "0x5F10CB0", VA = "0x5F11CB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x5F18830", Offset = "0x5F17830", VA = "0x5F18830")]
	private SqlInt32(bool fNull)
	{
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x5F18840", Offset = "0x5F17840", VA = "0x5F18840")]
	public SqlInt32(int value)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x5F18850", Offset = "0x5F17850", VA = "0x5F18850")]
	public static implicit operator SqlInt32(int x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x5F18860", Offset = "0x5F17860", VA = "0x5F18860", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x5F188D0", Offset = "0x5F178D0", VA = "0x5F188D0")]
	public static SqlInt32 operator -(SqlInt32 x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x5F18980", Offset = "0x5F17980", VA = "0x5F18980")]
	public static SqlInt32 operator +(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x5F18B00", Offset = "0x5F17B00", VA = "0x5F18B00")]
	public static SqlInt32 operator -(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x5F18C60", Offset = "0x5F17C60", VA = "0x5F18C60")]
	public static SqlInt32 operator *(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x5F18DD0", Offset = "0x5F17DD0", VA = "0x5F18DD0")]
	public static SqlInt32 operator /(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x5F18F50", Offset = "0x5F17F50", VA = "0x5F18F50")]
	public static implicit operator SqlInt32(SqlByte x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x5F19020", Offset = "0x5F18020", VA = "0x5F19020")]
	public static implicit operator SqlInt32(SqlInt16 x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x5F190F0", Offset = "0x5F180F0", VA = "0x5F190F0")]
	public static explicit operator SqlInt32(SqlInt64 x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x5F18AF0", Offset = "0x5F17AF0", VA = "0x5F18AF0")]
	private static bool SameSignInt(int x, int y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x5F19210", Offset = "0x5F18210", VA = "0x5F19210")]
	public static SqlBoolean operator ==(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x5F19300", Offset = "0x5F18300", VA = "0x5F19300")]
	public static SqlBoolean operator <(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x5F193F0", Offset = "0x5F183F0", VA = "0x5F193F0")]
	public static SqlBoolean operator >(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x5F194E0", Offset = "0x5F184E0", VA = "0x5F194E0")]
	public static SqlBoolean LessThan(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x5F19530", Offset = "0x5F18530", VA = "0x5F19530")]
	public static SqlBoolean GreaterThan(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x5F19580", Offset = "0x5F18580", VA = "0x5F19580")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x5F195D0", Offset = "0x5F185D0", VA = "0x5F195D0")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x5F196E0", Offset = "0x5F186E0", VA = "0x5F196E0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x5F197D0", Offset = "0x5F187D0", VA = "0x5F197D0")]
	public int CompareTo(SqlInt32 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x5F19940", Offset = "0x5F18940", VA = "0x5F19940", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x5F19A70", Offset = "0x5F18A70", VA = "0x5F19A70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x5F19B10", Offset = "0x5F18B10", VA = "0x5F19B10", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x5F19B20", Offset = "0x5F18B20", VA = "0x5F19B20", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x5F19C20", Offset = "0x5F18C20", VA = "0x5F19C20", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x5F19D60", Offset = "0x5F18D60", VA = "0x5F19D60")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
