// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlGuid
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
[Token(Token = "0x20000B2")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlGuid : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_sizeOfGuid;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int[] s_rgiGuidOrder;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0x0")]
	private byte[] m_value;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlGuid Null;

	[Token(Token = "0x17000192")]
	public bool IsNull
	{
		[Token(Token = "0x6000A13")]
		[Address(RVA = "0x5F16560", Offset = "0x5F15560", VA = "0x5F16560", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000193")]
	public Guid Value
	{
		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x5F16570", Offset = "0x5F15570", VA = "0x5F16570")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x5F16520", Offset = "0x5F15520", VA = "0x5F16520")]
	private SqlGuid(bool fNull)
	{
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x5F16530", Offset = "0x5F15530", VA = "0x5F16530")]
	public SqlGuid(Guid g)
	{
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x5F16630", Offset = "0x5F15630", VA = "0x5F16630")]
	public static implicit operator SqlGuid(Guid x)
	{
		return default(SqlGuid);
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x5F16670", Offset = "0x5F15670", VA = "0x5F16670", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x5F166F0", Offset = "0x5F156F0", VA = "0x5F166F0")]
	private static EComparison Compare(SqlGuid x, SqlGuid y)
	{
		return default(EComparison);
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x5F16890", Offset = "0x5F15890", VA = "0x5F16890")]
	public static SqlBoolean operator ==(SqlGuid x, SqlGuid y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x5F16990", Offset = "0x5F15990", VA = "0x5F16990")]
	public static SqlBoolean operator <(SqlGuid x, SqlGuid y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x5F16A90", Offset = "0x5F15A90", VA = "0x5F16A90")]
	public static SqlBoolean operator >(SqlGuid x, SqlGuid y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x5F16B90", Offset = "0x5F15B90", VA = "0x5F16B90", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x5F16C80", Offset = "0x5F15C80", VA = "0x5F16C80")]
	public int CompareTo(SqlGuid value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x5F16DF0", Offset = "0x5F15DF0", VA = "0x5F16DF0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x5F16F20", Offset = "0x5F15F20", VA = "0x5F16F20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x5F16FC0", Offset = "0x5F15FC0", VA = "0x5F16FC0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x5F16FD0", Offset = "0x5F15FD0", VA = "0x5F16FD0", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x5F17100", Offset = "0x5F16100", VA = "0x5F17100", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x5F17260", Offset = "0x5F16260", VA = "0x5F17260")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
