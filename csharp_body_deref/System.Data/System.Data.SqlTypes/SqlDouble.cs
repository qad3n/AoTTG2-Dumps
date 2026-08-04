// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlDouble
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
		[Address(RVA = "0x4610F30", Offset = "0x4610F30", VA = "0x4610F30", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700018E")]
	public double Value
	{
		[Token(Token = "0x60009D4")]
		[Address(RVA = "0x4610F40", Offset = "0x4610F40", VA = "0x4610F40")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x60009D1")]
	[Address(RVA = "0x4610EB0", Offset = "0x4610EB0", VA = "0x4610EB0")]
	private SqlDouble(bool fNull)
	{
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x4610EC0", Offset = "0x4610EC0", VA = "0x4610EC0")]
	public SqlDouble(double value)
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x4610F90", Offset = "0x4610F90", VA = "0x4610F90")]
	public static implicit operator SqlDouble(double x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x4611000", Offset = "0x4611000", VA = "0x4611000", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x4611070", Offset = "0x4611070", VA = "0x4611070")]
	public static SqlDouble operator -(SqlDouble x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x4611180", Offset = "0x4611180", VA = "0x4611180")]
	public static SqlDouble operator +(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x4611310", Offset = "0x4611310", VA = "0x4611310")]
	public static SqlDouble operator -(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x46114A0", Offset = "0x46114A0", VA = "0x46114A0")]
	public static SqlDouble operator *(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x4611630", Offset = "0x4611630", VA = "0x4611630")]
	public static SqlDouble operator /(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x4604FF0", Offset = "0x4604FF0", VA = "0x4604FF0")]
	public static implicit operator SqlDouble(SqlByte x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x4611830", Offset = "0x4611830", VA = "0x4611830")]
	public static implicit operator SqlDouble(SqlInt16 x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x4611950", Offset = "0x4611950", VA = "0x4611950")]
	public static implicit operator SqlDouble(SqlInt32 x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x4611A70", Offset = "0x4611A70", VA = "0x4611A70")]
	public static implicit operator SqlDouble(SqlInt64 x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x4611B80", Offset = "0x4611B80", VA = "0x4611B80")]
	public static implicit operator SqlDouble(SqlSingle x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x4611D20", Offset = "0x4611D20", VA = "0x4611D20")]
	public static implicit operator SqlDouble(SqlMoney x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009E2")]
	[Address(RVA = "0x460F840", Offset = "0x460F840", VA = "0x460F840")]
	public static implicit operator SqlDouble(SqlDecimal x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009E3")]
	[Address(RVA = "0x4611ED0", Offset = "0x4611ED0", VA = "0x4611ED0")]
	public static SqlBoolean operator ==(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E4")]
	[Address(RVA = "0x4611FD0", Offset = "0x4611FD0", VA = "0x4611FD0")]
	public static SqlBoolean operator <(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x46120D0", Offset = "0x46120D0", VA = "0x46120D0")]
	public static SqlBoolean operator >(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x46121D0", Offset = "0x46121D0", VA = "0x46121D0")]
	public static SqlBoolean LessThan(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x4612250", Offset = "0x4612250", VA = "0x4612250")]
	public static SqlBoolean GreaterThan(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x46122D0", Offset = "0x46122D0", VA = "0x46122D0")]
	public SqlSingle ToSqlSingle()
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x4612410", Offset = "0x4612410", VA = "0x4612410", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x4612510", Offset = "0x4612510", VA = "0x4612510")]
	public int CompareTo(SqlDouble value)
	{
		return default(int);
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x46126A0", Offset = "0x46126A0", VA = "0x46126A0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x4612800", Offset = "0x4612800", VA = "0x4612800", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x46128F0", Offset = "0x46128F0", VA = "0x46128F0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x4612900", Offset = "0x4612900", VA = "0x4612900", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x4612A10", Offset = "0x4612A10", VA = "0x4612A10", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x4612B60", Offset = "0x4612B60", VA = "0x4612B60")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
