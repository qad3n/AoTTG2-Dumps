// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlMoney
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
[Token(Token = "0x20000B6")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlMoney : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x0")]
	private bool _fNotNull;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x8")]
	private long _value;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int s_iMoneyScale;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x8")]
	private static readonly long s_lTickBase;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x10")]
	private static readonly double s_dTickBase;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0x18")]
	private static readonly long s_minLong;

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x20")]
	private static readonly long s_maxLong;

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x28")]
	public static readonly SqlMoney Null;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x38")]
	public static readonly SqlMoney Zero;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x48")]
	public static readonly SqlMoney MinValue;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x58")]
	public static readonly SqlMoney MaxValue;

	[Token(Token = "0x1700019A")]
	public bool IsNull
	{
		[Token(Token = "0x6000A89")]
		[Address(RVA = "0x12906C0", Offset = "0x128ECC0", VA = "0x1812906C0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019B")]
	public decimal Value
	{
		[Token(Token = "0x6000A8A")]
		[Address(RVA = "0x25773D0", Offset = "0x25759D0", VA = "0x1825773D0")]
		get
		{
			return 0m;
		}
	}

	[Token(Token = "0x6000A84")]
	[Address(RVA = "0x256E800", Offset = "0x256CE00", VA = "0x18256E800")]
	private SqlMoney(bool fNull)
	{
	}

	[Token(Token = "0x6000A85")]
	[Address(RVA = "0xAE2650", Offset = "0xAE0C50", VA = "0x180AE2650")]
	internal SqlMoney(long value, int ignored)
	{
	}

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x2577180", Offset = "0x2575780", VA = "0x182577180")]
	public SqlMoney(int value)
	{
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x2577080", Offset = "0x2575680", VA = "0x182577080")]
	public SqlMoney(long value)
	{
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x25771F0", Offset = "0x25757F0", VA = "0x1825771F0")]
	public SqlMoney(decimal value)
	{
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x2576970", Offset = "0x2574F70", VA = "0x182576970")]
	public decimal ToDecimal()
	{
		return 0m;
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x2576A70", Offset = "0x2575070", VA = "0x182576A70")]
	public double ToDouble()
	{
		return default(double);
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x2577B60", Offset = "0x2576160", VA = "0x182577B60")]
	public static implicit operator SqlMoney(decimal x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x2577D60", Offset = "0x2576360", VA = "0x182577D60")]
	public static implicit operator SqlMoney(long x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x2576E30", Offset = "0x2575430", VA = "0x182576E30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x2578290", Offset = "0x2576890", VA = "0x182578290")]
	public static SqlMoney operator -(SqlMoney x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x2577480", Offset = "0x2575A80", VA = "0x182577480")]
	public static SqlMoney operator +(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x2578100", Offset = "0x2576700", VA = "0x182578100")]
	public static SqlMoney operator -(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x2577F90", Offset = "0x2576590", VA = "0x182577F90")]
	public static SqlMoney operator *(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x2577610", Offset = "0x2575C10", VA = "0x182577610")]
	public static SqlMoney operator /(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x2577C90", Offset = "0x2576290", VA = "0x182577C90")]
	public static implicit operator SqlMoney(SqlByte x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x2577A90", Offset = "0x2576090", VA = "0x182577A90")]
	public static implicit operator SqlMoney(SqlInt16 x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x2577B90", Offset = "0x2576190", VA = "0x182577B90")]
	public static implicit operator SqlMoney(SqlInt32 x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x2577DB0", Offset = "0x25763B0", VA = "0x182577DB0")]
	public static implicit operator SqlMoney(SqlInt64 x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x2577850", Offset = "0x2575E50", VA = "0x182577850")]
	public static explicit operator SqlMoney(SqlDecimal x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x2577780", Offset = "0x2575D80", VA = "0x182577780")]
	public static SqlBoolean operator ==(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x2577EC0", Offset = "0x25764C0", VA = "0x182577EC0")]
	public static SqlBoolean operator <(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x25779C0", Offset = "0x2575FC0", VA = "0x1825779C0")]
	public static SqlBoolean operator >(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x2576550", Offset = "0x2574B50", VA = "0x182576550")]
	public static SqlBoolean LessThan(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x2576400", Offset = "0x2574A00", VA = "0x182576400")]
	public static SqlBoolean GreaterThan(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x2576C40", Offset = "0x2575240", VA = "0x182576C40")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x2576B00", Offset = "0x2575100", VA = "0x182576B00")]
	public SqlDecimal ToSqlDecimal()
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x2575FF0", Offset = "0x25745F0", VA = "0x182575FF0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x2575D80", Offset = "0x2574380", VA = "0x182575D80")]
	public int CompareTo(SqlMoney value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x2576120", Offset = "0x2574720", VA = "0x182576120", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x2576330", Offset = "0x2574930", VA = "0x182576330", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x25766A0", Offset = "0x2574CA0", VA = "0x1825766A0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x2576820", Offset = "0x2574E20", VA = "0x182576820", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x2576390", Offset = "0x2574990", VA = "0x182576390")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
