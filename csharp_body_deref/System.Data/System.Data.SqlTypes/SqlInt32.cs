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
[Token(Token = "0x20000AA")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlInt32 : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0x4")]
	private int m_value;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly long s_iIntMin;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0x8")]
	private static readonly long s_lBitNotIntMax;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlInt32 Null;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0x18")]
	public static readonly SqlInt32 Zero;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0x20")]
	public static readonly SqlInt32 MinValue;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0x28")]
	public static readonly SqlInt32 MaxValue;

	[Token(Token = "0x17000193")]
	public bool IsNull
	{
		[Token(Token = "0x6000A24")]
		[Address(RVA = "0x460E570", Offset = "0x460E570", VA = "0x460E570", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000194")]
	public int Value
	{
		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x460E580", Offset = "0x460E580", VA = "0x460E580")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x4614F90", Offset = "0x4614F90", VA = "0x4614F90")]
	private SqlInt32(bool fNull)
	{
	}

	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x4614FA0", Offset = "0x4614FA0", VA = "0x4614FA0")]
	public SqlInt32(int value)
	{
	}

	[Token(Token = "0x6000A26")]
	[Address(RVA = "0x4614FB0", Offset = "0x4614FB0", VA = "0x4614FB0")]
	public static implicit operator SqlInt32(int x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A27")]
	[Address(RVA = "0x4614FC0", Offset = "0x4614FC0", VA = "0x4614FC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x4615030", Offset = "0x4615030", VA = "0x4615030")]
	public static SqlInt32 operator -(SqlInt32 x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x46150E0", Offset = "0x46150E0", VA = "0x46150E0")]
	public static SqlInt32 operator +(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x4615260", Offset = "0x4615260", VA = "0x4615260")]
	public static SqlInt32 operator -(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x46153C0", Offset = "0x46153C0", VA = "0x46153C0")]
	public static SqlInt32 operator *(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x4615530", Offset = "0x4615530", VA = "0x4615530")]
	public static SqlInt32 operator /(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x46156B0", Offset = "0x46156B0", VA = "0x46156B0")]
	public static implicit operator SqlInt32(SqlByte x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x4615780", Offset = "0x4615780", VA = "0x4615780")]
	public static implicit operator SqlInt32(SqlInt16 x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x4615850", Offset = "0x4615850", VA = "0x4615850")]
	public static explicit operator SqlInt32(SqlInt64 x)
	{
		return default(SqlInt32);
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x4615250", Offset = "0x4615250", VA = "0x4615250")]
	private static bool SameSignInt(int x, int y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x4615970", Offset = "0x4615970", VA = "0x4615970")]
	public static SqlBoolean operator ==(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x4615A60", Offset = "0x4615A60", VA = "0x4615A60")]
	public static SqlBoolean operator <(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x4615B50", Offset = "0x4615B50", VA = "0x4615B50")]
	public static SqlBoolean operator >(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x4615C40", Offset = "0x4615C40", VA = "0x4615C40")]
	public static SqlBoolean LessThan(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x4615C90", Offset = "0x4615C90", VA = "0x4615C90")]
	public static SqlBoolean GreaterThan(SqlInt32 x, SqlInt32 y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A36")]
	[Address(RVA = "0x4615CE0", Offset = "0x4615CE0", VA = "0x4615CE0")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000A37")]
	[Address(RVA = "0x4615D30", Offset = "0x4615D30", VA = "0x4615D30")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000A38")]
	[Address(RVA = "0x4615E40", Offset = "0x4615E40", VA = "0x4615E40", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A39")]
	[Address(RVA = "0x4615F30", Offset = "0x4615F30", VA = "0x4615F30")]
	public int CompareTo(SqlInt32 value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x4616080", Offset = "0x4616080", VA = "0x4616080", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x46161C0", Offset = "0x46161C0", VA = "0x46161C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x4616250", Offset = "0x4616250", VA = "0x4616250", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x4616260", Offset = "0x4616260", VA = "0x4616260", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x4616360", Offset = "0x4616360", VA = "0x4616360", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x46164A0", Offset = "0x46164A0", VA = "0x46164A0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
