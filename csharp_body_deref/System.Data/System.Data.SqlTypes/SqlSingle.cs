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
[Token(Token = "0x20000B7")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlSingle : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x0")]
	private bool _fNotNull;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x4")]
	private float _value;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlSingle Null;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SqlSingle Zero;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlSingle MinValue;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x18")]
	public static readonly SqlSingle MaxValue;

	[Token(Token = "0x1700019C")]
	public bool IsNull
	{
		[Token(Token = "0x6000AAD")]
		[Address(RVA = "0x12906C0", Offset = "0x128ECC0", VA = "0x1812906C0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019D")]
	public float Value
	{
		[Token(Token = "0x6000AAE")]
		[Address(RVA = "0x2579370", Offset = "0x2577970", VA = "0x182579370")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x2572C50", Offset = "0x2571250", VA = "0x182572C50")]
	private SqlSingle(bool fNull)
	{
	}

	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x25792F0", Offset = "0x25778F0", VA = "0x1825792F0")]
	public SqlSingle(float value)
	{
	}

	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x2579290", Offset = "0x2577890", VA = "0x182579290")]
	public SqlSingle(double value)
	{
	}

	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x257A110", Offset = "0x2578710", VA = "0x18257A110")]
	public static implicit operator SqlSingle(float x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x2579040", Offset = "0x2577640", VA = "0x182579040", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x257A6F0", Offset = "0x2578CF0", VA = "0x18257A6F0")]
	public static SqlSingle operator -(SqlSingle x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x25793D0", Offset = "0x25779D0", VA = "0x1825793D0")]
	public static SqlSingle operator +(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x257A560", Offset = "0x2578B60", VA = "0x18257A560")]
	public static SqlSingle operator -(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x257A3D0", Offset = "0x25789D0", VA = "0x18257A3D0")]
	public static SqlSingle operator *(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x2579560", Offset = "0x2577B60", VA = "0x182579560")]
	public static SqlSingle operator /(SqlSingle x, SqlSingle y)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x2579FF0", Offset = "0x25785F0", VA = "0x182579FF0")]
	public static implicit operator SqlSingle(SqlByte x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x2579ED0", Offset = "0x25784D0", VA = "0x182579ED0")]
	public static implicit operator SqlSingle(SqlInt16 x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x257A1A0", Offset = "0x25787A0", VA = "0x18257A1A0")]
	public static implicit operator SqlSingle(SqlInt32 x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x2579D70", Offset = "0x2578370", VA = "0x182579D70")]
	public static implicit operator SqlSingle(SqlInt64 x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x2579A60", Offset = "0x2578060", VA = "0x182579A60")]
	public static implicit operator SqlSingle(SqlMoney x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x2579BC0", Offset = "0x25781C0", VA = "0x182579BC0")]
	public static implicit operator SqlSingle(SqlDecimal x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x25797F0", Offset = "0x2577DF0", VA = "0x1825797F0")]
	public static explicit operator SqlSingle(SqlDouble x)
	{
		return default(SqlSingle);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x25796F0", Offset = "0x2577CF0", VA = "0x1825796F0")]
	public static SqlBoolean operator ==(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000ABE")]
	[Address(RVA = "0x257A2F0", Offset = "0x25788F0", VA = "0x18257A2F0")]
	public static SqlBoolean operator <(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x2579980", Offset = "0x2577F80", VA = "0x182579980")]
	public static SqlBoolean operator >(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x2578C30", Offset = "0x2577230", VA = "0x182578C30")]
	public static SqlBoolean LessThan(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x2578BD0", Offset = "0x25771D0", VA = "0x182578BD0")]
	public static SqlBoolean GreaterThan(SqlSingle x, SqlSingle y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x2578ED0", Offset = "0x25774D0", VA = "0x182578ED0")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x2578780", Offset = "0x2576D80", VA = "0x182578780", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x2578610", Offset = "0x2576C10", VA = "0x182578610")]
	public int CompareTo(SqlSingle value)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x2578890", Offset = "0x2576E90", VA = "0x182578890", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x2578AA0", Offset = "0x25770A0", VA = "0x182578AA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x2578C90", Offset = "0x2577290", VA = "0x182578C90", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x2578DB0", Offset = "0x25773B0", VA = "0x182578DB0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x2578B60", Offset = "0x2577160", VA = "0x182578B60")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
