// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlByte
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
[Token(Token = "0x20000AB")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlByte : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x0")]
	private bool m_fNotNull;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x1")]
	private byte m_value;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_iBitNotByteMax;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x4")]
	public static readonly SqlByte Null;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x6")]
	public static readonly SqlByte Zero;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SqlByte MinValue;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0xA")]
	public static readonly SqlByte MaxValue;

	[Token(Token = "0x1700017B")]
	public bool IsNull
	{
		[Token(Token = "0x6000952")]
		[Address(RVA = "0x5F07970", Offset = "0x5F06970", VA = "0x5F07970", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017C")]
	public byte Value
	{
		[Token(Token = "0x6000953")]
		[Address(RVA = "0x5F07980", Offset = "0x5F06980", VA = "0x5F07980")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x5F07950", Offset = "0x5F06950", VA = "0x5F07950")]
	private SqlByte(bool fNull)
	{
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x5F07960", Offset = "0x5F06960", VA = "0x5F07960")]
	public SqlByte(byte value)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x5F07A00", Offset = "0x5F06A00", VA = "0x5F07A00")]
	public static implicit operator SqlByte(byte x)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x5F07A10", Offset = "0x5F06A10", VA = "0x5F07A10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x5F07A80", Offset = "0x5F06A80", VA = "0x5F07A80")]
	public static SqlByte operator +(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x5F07BB0", Offset = "0x5F06BB0", VA = "0x5F07BB0")]
	public static SqlByte operator -(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x5F07CD0", Offset = "0x5F06CD0", VA = "0x5F07CD0")]
	public static SqlByte operator *(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x5F07E00", Offset = "0x5F06E00", VA = "0x5F07E00")]
	public static SqlByte operator /(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x5F07F10", Offset = "0x5F06F10", VA = "0x5F07F10")]
	public static explicit operator SqlByte(SqlInt64 x)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x5F080D0", Offset = "0x5F070D0", VA = "0x5F080D0")]
	public static SqlBoolean operator ==(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x5F081B0", Offset = "0x5F071B0", VA = "0x5F081B0")]
	public static SqlBoolean operator <(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x5F08290", Offset = "0x5F07290", VA = "0x5F08290")]
	public static SqlBoolean operator >(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x5F08370", Offset = "0x5F07370", VA = "0x5F08370")]
	public static SqlBoolean LessThan(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x5F083C0", Offset = "0x5F073C0", VA = "0x5F083C0")]
	public static SqlBoolean GreaterThan(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x5F08410", Offset = "0x5F07410", VA = "0x5F08410")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x5F08580", Offset = "0x5F07580", VA = "0x5F08580")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x5F08680", Offset = "0x5F07680", VA = "0x5F08680", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x5F08770", Offset = "0x5F07770", VA = "0x5F08770")]
	public int CompareTo(SqlByte value)
	{
		return default(int);
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x5F088E0", Offset = "0x5F078E0", VA = "0x5F088E0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x5F08A10", Offset = "0x5F07A10", VA = "0x5F08A10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x5F08AE0", Offset = "0x5F07AE0", VA = "0x5F08AE0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x5F08AF0", Offset = "0x5F07AF0", VA = "0x5F08AF0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x5F08BF0", Offset = "0x5F07BF0", VA = "0x5F08BF0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x5F08D30", Offset = "0x5F07D30", VA = "0x5F08D30")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
