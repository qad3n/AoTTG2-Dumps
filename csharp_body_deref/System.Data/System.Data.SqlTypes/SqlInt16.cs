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
[Token(Token = "0x20000B3")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlInt16 : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0x2")]
	private short m_value;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_MASKI2;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0x4")]
	public static readonly SqlInt16 Null;

	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SqlInt16 Zero;

	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0xC")]
	public static readonly SqlInt16 MinValue;

	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlInt16 MaxValue;

	[Token(Token = "0x17000194")]
	public bool IsNull
	{
		[Token(Token = "0x6000A26")]
		[Address(RVA = "0x12906C0", Offset = "0x128ECC0", VA = "0x1812906C0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000195")]
	public short Value
	{
		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x25714B0", Offset = "0x256FAB0", VA = "0x1825714B0")]
		get
		{
			return default(short);
		}
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x25714A0", Offset = "0x256FAA0", VA = "0x1825714A0")]
	private SqlInt16(bool fNull)
	{
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0xAE2680", Offset = "0xAE0C80", VA = "0x180AE2680")]
	public SqlInt16(short value)
	{
	}

	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x2571B80", Offset = "0x2570180", VA = "0x182571B80")]
	public static implicit operator SqlInt16(short x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x2571380", Offset = "0x256F980", VA = "0x182571380", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x2571F00", Offset = "0x2570500", VA = "0x182571F00")]
	public static SqlInt16 operator -(SqlInt16 x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x2571510", Offset = "0x256FB10", VA = "0x182571510")]
	public static SqlInt16 operator +(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x2571DE0", Offset = "0x25703E0", VA = "0x182571DE0")]
	public static SqlInt16 operator -(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x2571C80", Offset = "0x2570280", VA = "0x182571C80")]
	public static SqlInt16 operator *(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x2571630", Offset = "0x256FC30", VA = "0x182571630")]
	public static SqlInt16 operator /(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x2571AC0", Offset = "0x25700C0", VA = "0x182571AC0")]
	public static implicit operator SqlInt16(SqlByte x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x2571890", Offset = "0x256FE90", VA = "0x182571890")]
	public static explicit operator SqlInt16(SqlInt64 x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x25717B0", Offset = "0x256FDB0", VA = "0x1825717B0")]
	public static SqlBoolean operator ==(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x2571BA0", Offset = "0x25701A0", VA = "0x182571BA0")]
	public static SqlBoolean operator <(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x25719E0", Offset = "0x256FFE0", VA = "0x1825719E0")]
	public static SqlBoolean operator >(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x2570E60", Offset = "0x256F460", VA = "0x182570E60")]
	public static SqlBoolean LessThan(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x2570E00", Offset = "0x256F400", VA = "0x182570E00")]
	public static SqlBoolean GreaterThan(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x2571100", Offset = "0x256F700", VA = "0x182571100")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x2571270", Offset = "0x256F870", VA = "0x182571270")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x2570850", Offset = "0x256EE50", VA = "0x182570850", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x2570960", Offset = "0x256EF60", VA = "0x182570960")]
	public int CompareTo(SqlInt16 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x2570AD0", Offset = "0x256F0D0", VA = "0x182570AD0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x2570CD0", Offset = "0x256F2D0", VA = "0x182570CD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x2570EC0", Offset = "0x256F4C0", VA = "0x182570EC0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x2570FE0", Offset = "0x256F5E0", VA = "0x182570FE0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x2570D90", Offset = "0x256F390", VA = "0x182570D90")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
