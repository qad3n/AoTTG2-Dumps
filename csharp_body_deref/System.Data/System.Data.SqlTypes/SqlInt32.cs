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
		[Address(RVA = "0x12906C0", Offset = "0x128ECC0", VA = "0x1812906C0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000197")]
	public int Value
	{
		[Token(Token = "0x6000A44")]
		[Address(RVA = "0x2572C60", Offset = "0x2571260", VA = "0x182572C60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x2572C50", Offset = "0x2571250", VA = "0x182572C50")]
	private SqlInt32(bool fNull)
	{
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0xAE2660", Offset = "0xAE0C60", VA = "0x180AE2660")]
	public SqlInt32(int value)
	{
	}

	[Token(Token = "0x6000A45")]
	[Address(RVA = "0x25733D0", Offset = "0x25719D0", VA = "0x1825733D0")]
	public static implicit operator SqlInt32(int x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A46")]
	[Address(RVA = "0x2572B10", Offset = "0x2571110", VA = "0x182572B10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A47")]
	[Address(RVA = "0x2573830", Offset = "0x2571E30", VA = "0x182573830")]
	public static SqlInt32 operator -(SqlInt32 x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A48")]
	[Address(RVA = "0x2572CF0", Offset = "0x25712F0", VA = "0x182572CF0")]
	public static SqlInt32 operator +(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A49")]
	[Address(RVA = "0x25736F0", Offset = "0x2571CF0", VA = "0x1825736F0")]
	public static SqlInt32 operator -(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A4A")]
	[Address(RVA = "0x2573590", Offset = "0x2571B90", VA = "0x182573590")]
	public static SqlInt32 operator *(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x2572E50", Offset = "0x2571450", VA = "0x182572E50")]
	public static SqlInt32 operator /(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x2573310", Offset = "0x2571910", VA = "0x182573310")]
	public static implicit operator SqlInt32(SqlByte x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x25733F0", Offset = "0x25719F0", VA = "0x1825733F0")]
	public static implicit operator SqlInt32(SqlInt16 x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A4E")]
	[Address(RVA = "0x25730D0", Offset = "0x25716D0", VA = "0x1825730D0")]
	public static explicit operator SqlInt32(SqlInt64 x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x25725E0", Offset = "0x2570BE0", VA = "0x1825725E0")]
	private static bool SameSignInt(int x, int y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A50")]
	[Address(RVA = "0x2572FF0", Offset = "0x25715F0", VA = "0x182572FF0")]
	public static SqlBoolean operator ==(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A51")]
	[Address(RVA = "0x25734B0", Offset = "0x2571AB0", VA = "0x1825734B0")]
	public static SqlBoolean operator <(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A52")]
	[Address(RVA = "0x2573230", Offset = "0x2571830", VA = "0x182573230")]
	public static SqlBoolean operator >(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A53")]
	[Address(RVA = "0x2572580", Offset = "0x2570B80", VA = "0x182572580")]
	public static SqlBoolean LessThan(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A54")]
	[Address(RVA = "0x2572520", Offset = "0x2570B20", VA = "0x182572520")]
	public static SqlBoolean GreaterThan(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x2572830", Offset = "0x2570E30", VA = "0x182572830")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x25729D0", Offset = "0x2570FD0", VA = "0x1825729D0")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x2572110", Offset = "0x2570710", VA = "0x182572110", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x2571FA0", Offset = "0x25705A0", VA = "0x182571FA0")]
	public int CompareTo(SqlInt32 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x2572220", Offset = "0x2570820", VA = "0x182572220", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x2572420", Offset = "0x2570A20", VA = "0x182572420", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x25725F0", Offset = "0x2570BF0", VA = "0x1825725F0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x2572710", Offset = "0x2570D10", VA = "0x182572710", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x25724B0", Offset = "0x2570AB0", VA = "0x1825724B0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
