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
		[Address(RVA = "0x12906C0", Offset = "0x128ECC0", VA = "0x1812906C0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700017C")]
	public byte Value
	{
		[Token(Token = "0x6000953")]
		[Address(RVA = "0x2560D50", Offset = "0x255F350", VA = "0x182560D50")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x2560D40", Offset = "0x255F340", VA = "0x182560D40")]
	private SqlByte(bool fNull)
	{
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0xAE26E0", Offset = "0xAE0CE0", VA = "0x180AE26E0")]
	public SqlByte(byte value)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x25613C0", Offset = "0x255F9C0", VA = "0x1825613C0")]
	public static implicit operator SqlByte(byte x)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x2560C20", Offset = "0x255F220", VA = "0x182560C20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x2560DB0", Offset = "0x255F3B0", VA = "0x182560DB0")]
	public static SqlByte operator +(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x25615E0", Offset = "0x255FBE0", VA = "0x1825615E0")]
	public static SqlByte operator -(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x25614B0", Offset = "0x255FAB0", VA = "0x1825614B0")]
	public static SqlByte operator *(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x2560EF0", Offset = "0x255F4F0", VA = "0x182560EF0")]
	public static SqlByte operator /(SqlByte x, SqlByte y)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x25610F0", Offset = "0x255F6F0", VA = "0x1825610F0")]
	public static explicit operator SqlByte(SqlInt64 x)
	{
		return default(SqlByte);
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x2561010", Offset = "0x255F610", VA = "0x182561010")]
	public static SqlBoolean operator ==(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x25613D0", Offset = "0x255F9D0", VA = "0x1825613D0")]
	public static SqlBoolean operator <(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x25612E0", Offset = "0x255F8E0", VA = "0x1825612E0")]
	public static SqlBoolean operator >(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x25606F0", Offset = "0x255ECF0", VA = "0x1825606F0")]
	public static SqlBoolean LessThan(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x2560690", Offset = "0x255EC90", VA = "0x182560690")]
	public static SqlBoolean GreaterThan(SqlByte x, SqlByte y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x2560990", Offset = "0x255EF90", VA = "0x182560990")]
	public SqlDouble ToSqlDouble()
	{
		return default(SqlDouble);
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x2560B10", Offset = "0x255F110", VA = "0x182560B10")]
	public SqlInt64 ToSqlInt64()
	{
		return default(SqlInt64);
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x2560240", Offset = "0x255E840", VA = "0x182560240", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x25600D0", Offset = "0x255E6D0", VA = "0x1825600D0")]
	public int CompareTo(SqlByte value)
	{
		return default(int);
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x2560350", Offset = "0x255E950", VA = "0x182560350", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x2560560", Offset = "0x255EB60", VA = "0x182560560", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x2560750", Offset = "0x255ED50", VA = "0x182560750", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x2560870", Offset = "0x255EE70", VA = "0x182560870", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x2560620", Offset = "0x255EC20", VA = "0x182560620")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
