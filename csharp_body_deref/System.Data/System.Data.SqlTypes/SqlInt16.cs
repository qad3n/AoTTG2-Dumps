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
		[Address(RVA = "0x5F11B50", Offset = "0x5F10B50", VA = "0x5F11B50", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000195")]
	public short Value
	{
		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x5F11B60", Offset = "0x5F10B60", VA = "0x5F11B60")]
		get
		{
			return default(short);
		}
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x5F173B0", Offset = "0x5F163B0", VA = "0x5F173B0")]
	private SqlInt16(bool fNull)
	{
	}

	[Token(Token = "0x6000A25")]
	[Address(RVA = "0x5F173C0", Offset = "0x5F163C0", VA = "0x5F173C0")]
	public SqlInt16(short value)
	{
	}

	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x5F173D0", Offset = "0x5F163D0", VA = "0x5F173D0")]
	public static implicit operator SqlInt16(short x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x5F173E0", Offset = "0x5F163E0", VA = "0x5F173E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x5F17450", Offset = "0x5F16450", VA = "0x5F17450")]
	public static SqlInt16 operator -(SqlInt16 x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x5F174F0", Offset = "0x5F164F0", VA = "0x5F174F0")]
	public static SqlInt16 operator +(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x5F17610", Offset = "0x5F16610", VA = "0x5F17610")]
	public static SqlInt16 operator -(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x5F17730", Offset = "0x5F16730", VA = "0x5F17730")]
	public static SqlInt16 operator *(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x5F178A0", Offset = "0x5F168A0", VA = "0x5F178A0")]
	public static SqlInt16 operator /(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x5F17A00", Offset = "0x5F16A00", VA = "0x5F17A00")]
	public static implicit operator SqlInt16(SqlByte x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x5F17AD0", Offset = "0x5F16AD0", VA = "0x5F17AD0")]
	public static explicit operator SqlInt16(SqlInt64 x)
	{
		return default(SqlInt16);
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x5F17BF0", Offset = "0x5F16BF0", VA = "0x5F17BF0")]
	public static SqlBoolean operator ==(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x5F17CD0", Offset = "0x5F16CD0", VA = "0x5F17CD0")]
	public static SqlBoolean operator <(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x5F17DB0", Offset = "0x5F16DB0", VA = "0x5F17DB0")]
	public static SqlBoolean operator >(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x5F17E90", Offset = "0x5F16E90", VA = "0x5F17E90")]
	public static SqlBoolean LessThan(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x5F17EE0", Offset = "0x5F16EE0", VA = "0x5F17EE0")]
	public static SqlBoolean GreaterThan(SqlInt16 x, SqlInt16 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x5F17F30", Offset = "0x5F16F30", VA = "0x5F17F30")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x5F17F80", Offset = "0x5F16F80", VA = "0x5F17F80")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x5F18090", Offset = "0x5F17090", VA = "0x5F18090", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x5F18180", Offset = "0x5F17180", VA = "0x5F18180")]
	public int CompareTo(SqlInt16 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x5F182F0", Offset = "0x5F172F0", VA = "0x5F182F0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x5F18420", Offset = "0x5F17420", VA = "0x5F18420", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x5F184F0", Offset = "0x5F174F0", VA = "0x5F184F0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x5F18500", Offset = "0x5F17500", VA = "0x5F18500", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x5F18610", Offset = "0x5F17610", VA = "0x5F18610", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x5F18750", Offset = "0x5F17750", VA = "0x5F18750")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
