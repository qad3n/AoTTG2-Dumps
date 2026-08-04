// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlSingle
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
[Token(Token = "0x20000AD")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlSingle : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x0")]
	private bool _fNotNull;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x4")]
	private float _value;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlSingle Null;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SqlSingle Zero;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlSingle MinValue;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x18")]
	public static readonly SqlSingle MaxValue;

	[Token(Token = "0x17000199")]
	public bool IsNull
	{
		[Token(Token = "0x6000A8E")]
		[Address(RVA = "0x4611CC0", Offset = "0x4611CC0", VA = "0x4611CC0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019A")]
	public float Value
	{
		[Token(Token = "0x6000A8F")]
		[Address(RVA = "0x4611CD0", Offset = "0x4611CD0", VA = "0x4611CD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x46198C0", Offset = "0x46198C0", VA = "0x46198C0")]
	private SqlSingle(bool fNull)
	{
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x46198D0", Offset = "0x46198D0", VA = "0x46198D0")]
	public SqlSingle(float value)
	{
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x4619940", Offset = "0x4619940", VA = "0x4619940")]
	public SqlSingle(double value)
	{
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x4619A00", Offset = "0x4619A00", VA = "0x4619A00")]
	public static implicit operator SqlSingle(float x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x4619A70", Offset = "0x4619A70", VA = "0x4619A70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x4619AE0", Offset = "0x4619AE0", VA = "0x4619AE0")]
	public static SqlSingle operator -(SqlSingle x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x4619BE0", Offset = "0x4619BE0", VA = "0x4619BE0")]
	public static SqlSingle operator +(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x4619D70", Offset = "0x4619D70", VA = "0x4619D70")]
	public static SqlSingle operator -(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x4619F00", Offset = "0x4619F00", VA = "0x4619F00")]
	public static SqlSingle operator *(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x461A090", Offset = "0x461A090", VA = "0x461A090")]
	public static SqlSingle operator /(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x461A260", Offset = "0x461A260", VA = "0x461A260")]
	public static implicit operator SqlSingle(SqlByte x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x461A390", Offset = "0x461A390", VA = "0x461A390")]
	public static implicit operator SqlSingle(SqlInt16 x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x461A4C0", Offset = "0x461A4C0", VA = "0x461A4C0")]
	public static implicit operator SqlSingle(SqlInt32 x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x461A5F0", Offset = "0x461A5F0", VA = "0x461A5F0")]
	public static implicit operator SqlSingle(SqlInt64 x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x461A710", Offset = "0x461A710", VA = "0x461A710")]
	public static implicit operator SqlSingle(SqlMoney x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x461A7F0", Offset = "0x461A7F0", VA = "0x461A7F0")]
	public static implicit operator SqlSingle(SqlDecimal x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x4612330", Offset = "0x4612330", VA = "0x4612330")]
	public static explicit operator SqlSingle(SqlDouble x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x461A950", Offset = "0x461A950", VA = "0x461A950")]
	public static SqlBoolean operator ==(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x461AA50", Offset = "0x461AA50", VA = "0x461AA50")]
	public static SqlBoolean operator <(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x461AB50", Offset = "0x461AB50", VA = "0x461AB50")]
	public static SqlBoolean operator >(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x461AC50", Offset = "0x461AC50", VA = "0x461AC50")]
	public static SqlBoolean LessThan(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x461ACA0", Offset = "0x461ACA0", VA = "0x461ACA0")]
	public static SqlBoolean GreaterThan(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x461ACF0", Offset = "0x461ACF0", VA = "0x461ACF0")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x461AD40", Offset = "0x461AD40", VA = "0x461AD40", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x461AE30", Offset = "0x461AE30", VA = "0x461AE30")]
	public int CompareTo(SqlSingle value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x461AF80", Offset = "0x461AF80", VA = "0x461AF80", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x461B0C0", Offset = "0x461B0C0", VA = "0x461B0C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x461B180", Offset = "0x461B180", VA = "0x461B180", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x461B190", Offset = "0x461B190", VA = "0x461B190", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x461B2A0", Offset = "0x461B2A0", VA = "0x461B2A0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x461B3F0", Offset = "0x461B3F0", VA = "0x461B3F0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
