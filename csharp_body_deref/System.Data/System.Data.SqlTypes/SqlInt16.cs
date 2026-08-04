// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlInt16
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
		[Address(RVA = "0x460E420", Offset = "0x460E420", VA = "0x460E420", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000192")]
	public short Value
	{
		[Token(Token = "0x6000A08")]
		[Address(RVA = "0x460E430", Offset = "0x460E430", VA = "0x460E430")]
		get
		{
			return default(short);
		}
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x4613B40", Offset = "0x4613B40", VA = "0x4613B40")]
	private SqlInt16(bool fNull)
	{
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x4613B50", Offset = "0x4613B50", VA = "0x4613B50")]
	public SqlInt16(short value)
	{
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x4613B60", Offset = "0x4613B60", VA = "0x4613B60")]
	public static implicit operator SqlInt16(short x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x4613B70", Offset = "0x4613B70", VA = "0x4613B70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x4613BE0", Offset = "0x4613BE0", VA = "0x4613BE0")]
	public static SqlInt16 operator -(SqlInt16 x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x4613C80", Offset = "0x4613C80", VA = "0x4613C80")]
	public static SqlInt16 operator +(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x4613DA0", Offset = "0x4613DA0", VA = "0x4613DA0")]
	public static SqlInt16 operator -(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x4613EC0", Offset = "0x4613EC0", VA = "0x4613EC0")]
	public static SqlInt16 operator *(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x4614030", Offset = "0x4614030", VA = "0x4614030")]
	public static SqlInt16 operator /(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x46141A0", Offset = "0x46141A0", VA = "0x46141A0")]
	public static implicit operator SqlInt16(SqlByte x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x4614270", Offset = "0x4614270", VA = "0x4614270")]
	public static explicit operator SqlInt16(SqlInt64 x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x4614390", Offset = "0x4614390", VA = "0x4614390")]
	public static SqlBoolean operator ==(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x4614470", Offset = "0x4614470", VA = "0x4614470")]
	public static SqlBoolean operator <(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x4614550", Offset = "0x4614550", VA = "0x4614550")]
	public static SqlBoolean operator >(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x4614630", Offset = "0x4614630", VA = "0x4614630")]
	public static SqlBoolean LessThan(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x4614680", Offset = "0x4614680", VA = "0x4614680")]
	public static SqlBoolean GreaterThan(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x46146D0", Offset = "0x46146D0", VA = "0x46146D0")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x4614720", Offset = "0x4614720", VA = "0x4614720")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x4614830", Offset = "0x4614830", VA = "0x4614830", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x4614910", Offset = "0x4614910", VA = "0x4614910")]
	public int CompareTo(SqlInt16 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x4614A60", Offset = "0x4614A60", VA = "0x4614A60", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x4614B90", Offset = "0x4614B90", VA = "0x4614B90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x4614C50", Offset = "0x4614C50", VA = "0x4614C50", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x4614C60", Offset = "0x4614C60", VA = "0x4614C60", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x4614D70", Offset = "0x4614D70", VA = "0x4614D70", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x4614EB0", Offset = "0x4614EB0", VA = "0x4614EB0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
