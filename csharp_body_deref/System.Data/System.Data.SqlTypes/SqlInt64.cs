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
		[Address(RVA = "0x4604C00", Offset = "0x4604C00", VA = "0x4604C00", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000196")]
	public long Value
	{
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x4604C10", Offset = "0x4604C10", VA = "0x4604C10")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x4616590", Offset = "0x4616590", VA = "0x4616590")]
	private SqlInt64(bool fNull)
	{
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x46165A0", Offset = "0x46165A0", VA = "0x46165A0")]
	public SqlInt64(long value)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x46165B0", Offset = "0x46165B0", VA = "0x46165B0")]
	public static implicit operator SqlInt64(long x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x46165C0", Offset = "0x46165C0", VA = "0x46165C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x4616630", Offset = "0x4616630", VA = "0x4616630")]
	public static SqlInt64 operator -(SqlInt64 x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x46166C0", Offset = "0x46166C0", VA = "0x46166C0")]
	public static SqlInt64 operator +(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x4616840", Offset = "0x4616840", VA = "0x4616840")]
	public static SqlInt64 operator -(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x46169A0", Offset = "0x46169A0", VA = "0x46169A0")]
	public static SqlInt64 operator *(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x4616B70", Offset = "0x4616B70", VA = "0x4616B70")]
	public static SqlInt64 operator /(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x4616CD0", Offset = "0x4616CD0", VA = "0x4616CD0")]
	public static SqlInt64 operator %(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x4605160", Offset = "0x4605160", VA = "0x4605160")]
	public static implicit operator SqlInt64(SqlByte x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x4614770", Offset = "0x4614770", VA = "0x4614770")]
	public static implicit operator SqlInt64(SqlInt16 x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x4615D80", Offset = "0x4615D80", VA = "0x4615D80")]
	public static implicit operator SqlInt64(SqlInt32 x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x460FA50", Offset = "0x460FA50", VA = "0x460FA50")]
	public static explicit operator SqlInt64(SqlDecimal x)
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x4616830", Offset = "0x4616830", VA = "0x4616830")]
	private static bool SameSignLong(long x, long y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x4616E20", Offset = "0x4616E20", VA = "0x4616E20")]
	public static SqlBoolean operator ==(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x4616F10", Offset = "0x4616F10", VA = "0x4616F10")]
	public static SqlBoolean operator <(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x4617000", Offset = "0x4617000", VA = "0x4617000")]
	public static SqlBoolean operator >(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x46170F0", Offset = "0x46170F0", VA = "0x46170F0")]
	public static SqlBoolean LessThan(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x4617160", Offset = "0x4617160", VA = "0x4617160")]
	public static SqlBoolean GreaterThan(SqlInt64 x, SqlInt64 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x46171D0", Offset = "0x46171D0", VA = "0x46171D0")]
	public SqlByte ToSqlByte()
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x4617230", Offset = "0x4617230", VA = "0x4617230")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x4617290", Offset = "0x4617290", VA = "0x4617290")]
	public SqlInt16 ToSqlInt16()
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x46172F0", Offset = "0x46172F0", VA = "0x46172F0")]
	public SqlInt32 ToSqlInt32()
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x4617350", Offset = "0x4617350", VA = "0x4617350")]
	public SqlDecimal ToSqlDecimal()
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x46173D0", Offset = "0x46173D0", VA = "0x46173D0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x46174C0", Offset = "0x46174C0", VA = "0x46174C0")]
	public int CompareTo(SqlInt64 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x4617630", Offset = "0x4617630", VA = "0x4617630", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x4617780", Offset = "0x4617780", VA = "0x4617780", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x4617840", Offset = "0x4617840", VA = "0x4617840", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x4617850", Offset = "0x4617850", VA = "0x4617850", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x4617950", Offset = "0x4617950", VA = "0x4617950", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x4617A90", Offset = "0x4617A90", VA = "0x4617A90")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
