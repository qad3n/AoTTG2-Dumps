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
[Token(Token = "0x20000AC")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlMoney : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x0")]
	private bool _fNotNull;

	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0x8")]
	private long _value;

	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int s_iMoneyScale;

	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x8")]
	private static readonly long s_lTickBase;

	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0x10")]
	private static readonly double s_dTickBase;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x18")]
	private static readonly long s_minLong;

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x20")]
	private static readonly long s_maxLong;

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x28")]
	public static readonly SqlMoney Null;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x38")]
	public static readonly SqlMoney Zero;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x48")]
	public static readonly SqlMoney MinValue;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x58")]
	public static readonly SqlMoney MaxValue;

	[Token(Token = "0x17000197")]
	public bool IsNull
	{
		[Token(Token = "0x6000A6A")]
		[Address(RVA = "0x460E7E0", Offset = "0x460E7E0", VA = "0x460E7E0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000198")]
	public decimal Value
	{
		[Token(Token = "0x6000A6B")]
		[Address(RVA = "0x4617EA0", Offset = "0x4617EA0", VA = "0x4617EA0")]
		get
		{
			return default(decimal);
		}
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x4617BB0", Offset = "0x4617BB0", VA = "0x4617BB0")]
	private SqlMoney(bool fNull)
	{
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x4617BC0", Offset = "0x4617BC0", VA = "0x4617BC0")]
	internal SqlMoney(long value, int ignored)
	{
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x4617BD0", Offset = "0x4617BD0", VA = "0x4617BD0")]
	public SqlMoney(int value)
	{
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x4617C30", Offset = "0x4617C30", VA = "0x4617C30")]
	public SqlMoney(long value)
	{
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x4617D40", Offset = "0x4617D40", VA = "0x4617D40")]
	public SqlMoney(decimal value)
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x460E7F0", Offset = "0x460E7F0", VA = "0x460E7F0")]
	public decimal ToDecimal()
	{
		return default(decimal);
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x4611E40", Offset = "0x4611E40", VA = "0x4611E40")]
	public double ToDouble()
	{
		return default(double);
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x4617F30", Offset = "0x4617F30", VA = "0x4617F30")]
	public static implicit operator SqlMoney(decimal x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x4617F60", Offset = "0x4617F60", VA = "0x4617F60")]
	public static implicit operator SqlMoney(long x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x4617FB0", Offset = "0x4617FB0", VA = "0x4617FB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x4618080", Offset = "0x4618080", VA = "0x4618080")]
	public static SqlMoney operator -(SqlMoney x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x4618160", Offset = "0x4618160", VA = "0x4618160")]
	public static SqlMoney operator +(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x4618310", Offset = "0x4618310", VA = "0x4618310")]
	public static SqlMoney operator -(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x46184C0", Offset = "0x46184C0", VA = "0x46184C0")]
	public static SqlMoney operator *(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x4618620", Offset = "0x4618620", VA = "0x4618620")]
	public static SqlMoney operator /(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x4618780", Offset = "0x4618780", VA = "0x4618780")]
	public static implicit operator SqlMoney(SqlByte x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x46188C0", Offset = "0x46188C0", VA = "0x46188C0")]
	public static implicit operator SqlMoney(SqlInt16 x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x46189D0", Offset = "0x46189D0", VA = "0x46189D0")]
	public static implicit operator SqlMoney(SqlInt32 x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x4618AF0", Offset = "0x4618AF0", VA = "0x4618AF0")]
	public static implicit operator SqlMoney(SqlInt64 x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x460FD00", Offset = "0x460FD00", VA = "0x460FD00")]
	public static explicit operator SqlMoney(SqlDecimal x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x4618BC0", Offset = "0x4618BC0", VA = "0x4618BC0")]
	public static SqlBoolean operator ==(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x4618CB0", Offset = "0x4618CB0", VA = "0x4618CB0")]
	public static SqlBoolean operator <(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x4618DA0", Offset = "0x4618DA0", VA = "0x4618DA0")]
	public static SqlBoolean operator >(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A7E")]
	[Address(RVA = "0x4618E90", Offset = "0x4618E90", VA = "0x4618E90")]
	public static SqlBoolean LessThan(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x4618F00", Offset = "0x4618F00", VA = "0x4618F00")]
	public static SqlBoolean GreaterThan(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x4618F70", Offset = "0x4618F70", VA = "0x4618F70")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x4618FD0", Offset = "0x4618FD0", VA = "0x4618FD0")]
	public SqlDecimal ToSqlDecimal()
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x4619050", Offset = "0x4619050", VA = "0x4619050", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x4619140", Offset = "0x4619140", VA = "0x4619140")]
	public int CompareTo(SqlMoney value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A84")]
	[Address(RVA = "0x46192B0", Offset = "0x46192B0", VA = "0x46192B0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A85")]
	[Address(RVA = "0x4619400", Offset = "0x4619400", VA = "0x4619400", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x4619470", Offset = "0x4619470", VA = "0x4619470", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x4619480", Offset = "0x4619480", VA = "0x4619480", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x46195E0", Offset = "0x46195E0", VA = "0x46195E0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x4619740", Offset = "0x4619740", VA = "0x4619740")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
