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
[Token(Token = "0x20000B1")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlDouble : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0x8")]
	private double m_value;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlDouble Null;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlDouble Zero;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x20")]
	public static readonly SqlDouble MinValue;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0x30")]
	public static readonly SqlDouble MaxValue;

	[Token(Token = "0x17000190")]
	public bool IsNull
	{
		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x12906C0", Offset = "0x128ECC0", VA = "0x1812906C0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000191")]
	public double Value
	{
		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x256E810", Offset = "0x256CE10", VA = "0x18256E810")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x256E800", Offset = "0x256CE00", VA = "0x18256E800")]
	private SqlDouble(bool fNull)
	{
	}

	[Token(Token = "0x60009F1")]
	[Address(RVA = "0x256E770", Offset = "0x256CD70", VA = "0x18256E770")]
	public SqlDouble(double value)
	{
	}

	[Token(Token = "0x60009F4")]
	[Address(RVA = "0x256F040", Offset = "0x256D640", VA = "0x18256F040")]
	public static implicit operator SqlDouble(double x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x256E500", Offset = "0x256CB00", VA = "0x18256E500", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x256F750", Offset = "0x256DD50", VA = "0x18256F750")]
	public static SqlDouble operator -(SqlDouble x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x256E870", Offset = "0x256CE70", VA = "0x18256E870")]
	public static SqlDouble operator +(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x256F600", Offset = "0x256DC00", VA = "0x18256F600")]
	public static SqlDouble operator -(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x256F4B0", Offset = "0x256DAB0", VA = "0x18256F4B0")]
	public static SqlDouble operator *(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x256E9C0", Offset = "0x256CFC0", VA = "0x18256E9C0")]
	public static SqlDouble operator /(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x256F300", Offset = "0x256D900", VA = "0x18256F300")]
	public static implicit operator SqlDouble(SqlByte x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x256F230", Offset = "0x256D830", VA = "0x18256F230")]
	public static implicit operator SqlDouble(SqlInt16 x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x256F060", Offset = "0x256D660", VA = "0x18256F060")]
	public static implicit operator SqlDouble(SqlInt32 x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x256ED40", Offset = "0x256D340", VA = "0x18256ED40")]
	public static implicit operator SqlDouble(SqlInt64 x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x256F160", Offset = "0x256D760", VA = "0x18256F160")]
	public static implicit operator SqlDouble(SqlSingle x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x256EF70", Offset = "0x256D570", VA = "0x18256EF70")]
	public static implicit operator SqlDouble(SqlMoney x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x256EE50", Offset = "0x256D450", VA = "0x18256EE50")]
	public static implicit operator SqlDouble(SqlDecimal x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x256EB70", Offset = "0x256D170", VA = "0x18256EB70")]
	public static SqlBoolean operator ==(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x256F3E0", Offset = "0x256D9E0", VA = "0x18256F3E0")]
	public static SqlBoolean operator <(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x256EC70", Offset = "0x256D270", VA = "0x18256EC70")]
	public static SqlBoolean operator >(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x256DFE0", Offset = "0x256C5E0", VA = "0x18256DFE0")]
	public static SqlBoolean LessThan(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x256DE90", Offset = "0x256C490", VA = "0x18256DE90")]
	public static SqlBoolean GreaterThan(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x256E370", Offset = "0x256C970", VA = "0x18256E370")]
	public SqlSingle ToSqlSingle()
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x256D790", Offset = "0x256BD90", VA = "0x18256D790", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x256D8C0", Offset = "0x256BEC0", VA = "0x18256D8C0")]
	public int CompareTo(SqlDouble value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x256DB30", Offset = "0x256C130", VA = "0x18256DB30", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x256DD50", Offset = "0x256C350", VA = "0x18256DD50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x256E130", Offset = "0x256C730", VA = "0x18256E130", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x256E250", Offset = "0x256C850", VA = "0x18256E250", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x256DE20", Offset = "0x256C420", VA = "0x18256DE20")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
