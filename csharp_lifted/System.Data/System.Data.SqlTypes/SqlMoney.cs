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
		[Address(RVA = "0x5F11F10", Offset = "0x5F10F10", VA = "0x5F11F10", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019B")]
	public decimal Value
	{
		[Token(Token = "0x6000A8A")]
		[Address(RVA = "0x5F1B790", Offset = "0x5F1A790", VA = "0x5F1B790")]
		get
		{
			return 0m;
		}
	}

	[Token(Token = "0x6000A84")]
	[Address(RVA = "0x5F1B4A0", Offset = "0x5F1A4A0", VA = "0x5F1B4A0")]
	private SqlMoney(bool fNull)
	{
	}

	[Token(Token = "0x6000A85")]
	[Address(RVA = "0x5F1B4B0", Offset = "0x5F1A4B0", VA = "0x5F1B4B0")]
	internal SqlMoney(long value, int ignored)
	{
	}

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x5F1B4C0", Offset = "0x5F1A4C0", VA = "0x5F1B4C0")]
	public SqlMoney(int value)
	{
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x5F1B520", Offset = "0x5F1A520", VA = "0x5F1B520")]
	public SqlMoney(long value)
	{
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x5F1B630", Offset = "0x5F1A630", VA = "0x5F1B630")]
	public SqlMoney(decimal value)
	{
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x5F11F20", Offset = "0x5F10F20", VA = "0x5F11F20")]
	public decimal ToDecimal()
	{
		return 0m;
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x5F156D0", Offset = "0x5F146D0", VA = "0x5F156D0")]
	public double ToDouble()
	{
		return default(double);
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x5F1B820", Offset = "0x5F1A820", VA = "0x5F1B820")]
	public static implicit operator SqlMoney(decimal x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x5F1B850", Offset = "0x5F1A850", VA = "0x5F1B850")]
	public static implicit operator SqlMoney(long x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x5F1B8A0", Offset = "0x5F1A8A0", VA = "0x5F1B8A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x5F1B990", Offset = "0x5F1A990", VA = "0x5F1B990")]
	public static SqlMoney operator -(SqlMoney x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x5F1BA90", Offset = "0x5F1AA90", VA = "0x5F1BA90")]
	public static SqlMoney operator +(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x5F1BC40", Offset = "0x5F1AC40", VA = "0x5F1BC40")]
	public static SqlMoney operator -(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x5F1BDF0", Offset = "0x5F1ADF0", VA = "0x5F1BDF0")]
	public static SqlMoney operator *(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x5F1BF40", Offset = "0x5F1AF40", VA = "0x5F1BF40")]
	public static SqlMoney operator /(SqlMoney x, SqlMoney y)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x5F1C090", Offset = "0x5F1B090", VA = "0x5F1C090")]
	public static implicit operator SqlMoney(SqlByte x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x5F1C1D0", Offset = "0x5F1B1D0", VA = "0x5F1C1D0")]
	public static implicit operator SqlMoney(SqlInt16 x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x5F1C2E0", Offset = "0x5F1B2E0", VA = "0x5F1C2E0")]
	public static implicit operator SqlMoney(SqlInt32 x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x5F1C400", Offset = "0x5F1B400", VA = "0x5F1C400")]
	public static implicit operator SqlMoney(SqlInt64 x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x5F13510", Offset = "0x5F12510", VA = "0x5F13510")]
	public static explicit operator SqlMoney(SqlDecimal x)
	{
		return default(SqlMoney);
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x5F1C4D0", Offset = "0x5F1B4D0", VA = "0x5F1C4D0")]
	public static SqlBoolean operator ==(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x5F1C5C0", Offset = "0x5F1B5C0", VA = "0x5F1C5C0")]
	public static SqlBoolean operator <(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x5F1C6B0", Offset = "0x5F1B6B0", VA = "0x5F1C6B0")]
	public static SqlBoolean operator >(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x5F1C7A0", Offset = "0x5F1B7A0", VA = "0x5F1C7A0")]
	public static SqlBoolean LessThan(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x5F1C810", Offset = "0x5F1B810", VA = "0x5F1C810")]
	public static SqlBoolean GreaterThan(SqlMoney x, SqlMoney y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x5F1C880", Offset = "0x5F1B880", VA = "0x5F1C880")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x5F1C8E0", Offset = "0x5F1B8E0", VA = "0x5F1C8E0")]
	public SqlDecimal ToSqlDecimal()
	{
		return default(SqlDecimal);
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x5F1C960", Offset = "0x5F1B960", VA = "0x5F1C960", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x5F1CA60", Offset = "0x5F1BA60", VA = "0x5F1CA60")]
	public int CompareTo(SqlMoney value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x5F1CC00", Offset = "0x5F1BC00", VA = "0x5F1CC00", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x5F1CD50", Offset = "0x5F1BD50", VA = "0x5F1CD50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x5F1CDC0", Offset = "0x5F1BDC0", VA = "0x5F1CDC0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x5F1CDD0", Offset = "0x5F1BDD0", VA = "0x5F1CDD0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x5F1CF30", Offset = "0x5F1BF30", VA = "0x5F1CF30", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x5F1D090", Offset = "0x5F1C090", VA = "0x5F1D090")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
