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
		[Address(RVA = "0x5F14760", Offset = "0x5F13760", VA = "0x5F14760", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000191")]
	public double Value
	{
		[Token(Token = "0x60009F3")]
		[Address(RVA = "0x5F14770", Offset = "0x5F13770", VA = "0x5F14770")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x5F146E0", Offset = "0x5F136E0", VA = "0x5F146E0")]
	private SqlDouble(bool fNull)
	{
	}

	[Token(Token = "0x60009F1")]
	[Address(RVA = "0x5F146F0", Offset = "0x5F136F0", VA = "0x5F146F0")]
	public SqlDouble(double value)
	{
	}

	[Token(Token = "0x60009F4")]
	[Address(RVA = "0x5F147C0", Offset = "0x5F137C0", VA = "0x5F147C0")]
	public static implicit operator SqlDouble(double x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x5F14830", Offset = "0x5F13830", VA = "0x5F14830", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x5F148A0", Offset = "0x5F138A0", VA = "0x5F148A0")]
	public static SqlDouble operator -(SqlDouble x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x5F149B0", Offset = "0x5F139B0", VA = "0x5F149B0")]
	public static SqlDouble operator +(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x5F14B30", Offset = "0x5F13B30", VA = "0x5F14B30")]
	public static SqlDouble operator -(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x5F14CB0", Offset = "0x5F13CB0", VA = "0x5F14CB0")]
	public static SqlDouble operator *(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x5F14E30", Offset = "0x5F13E30", VA = "0x5F14E30")]
	public static SqlDouble operator /(SqlDouble x, SqlDouble y)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x5F08460", Offset = "0x5F07460", VA = "0x5F08460")]
	public static implicit operator SqlDouble(SqlByte x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x5F15010", Offset = "0x5F14010", VA = "0x5F15010")]
	public static implicit operator SqlDouble(SqlInt16 x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x5F15130", Offset = "0x5F14130", VA = "0x5F15130")]
	public static implicit operator SqlDouble(SqlInt32 x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x5F15250", Offset = "0x5F14250", VA = "0x5F15250")]
	public static implicit operator SqlDouble(SqlInt64 x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x5F15360", Offset = "0x5F14360", VA = "0x5F15360")]
	public static implicit operator SqlDouble(SqlSingle x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x5F15500", Offset = "0x5F14500", VA = "0x5F15500")]
	public static implicit operator SqlDouble(SqlMoney x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x5F13030", Offset = "0x5F12030", VA = "0x5F13030")]
	public static implicit operator SqlDouble(SqlDecimal x)
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x5F15760", Offset = "0x5F14760", VA = "0x5F15760")]
	public static SqlBoolean operator ==(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x5F15860", Offset = "0x5F14860", VA = "0x5F15860")]
	public static SqlBoolean operator <(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x5F15960", Offset = "0x5F14960", VA = "0x5F15960")]
	public static SqlBoolean operator >(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x5F15A60", Offset = "0x5F14A60", VA = "0x5F15A60")]
	public static SqlBoolean LessThan(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x5F15AE0", Offset = "0x5F14AE0", VA = "0x5F15AE0")]
	public static SqlBoolean GreaterThan(SqlDouble x, SqlDouble y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x5F15B60", Offset = "0x5F14B60", VA = "0x5F15B60")]
	public SqlSingle ToSqlSingle()
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x5F15CA0", Offset = "0x5F14CA0", VA = "0x5F15CA0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x5F15DA0", Offset = "0x5F14DA0", VA = "0x5F15DA0")]
	public int CompareTo(SqlDouble value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x5F15F50", Offset = "0x5F14F50", VA = "0x5F15F50", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x5F160B0", Offset = "0x5F150B0", VA = "0x5F160B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x5F16190", Offset = "0x5F15190", VA = "0x5F16190", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x5F161A0", Offset = "0x5F151A0", VA = "0x5F161A0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x5F162B0", Offset = "0x5F152B0", VA = "0x5F162B0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x5F16400", Offset = "0x5F15400", VA = "0x5F16400")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
