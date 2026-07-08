using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000A8")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlGuid : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int s_sizeOfGuid;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int[] s_rgiGuidOrder;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x0")]
	private byte[] m_value;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x10")]
	public static readonly SqlGuid Null;

	[Token(Token = "0x1700018F")]
	public bool IsNull
	{
		[Token(Token = "0x60009F4")]
		[Address(RVA = "0x42D5560", Offset = "0x42D5560", VA = "0x42D5560", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000190")]
	public Guid Value
	{
		[Token(Token = "0x60009F5")]
		[Address(RVA = "0x42D5570", Offset = "0x42D5570", VA = "0x42D5570")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x60009F2")]
	[Address(RVA = "0x42D5520", Offset = "0x42D5520", VA = "0x42D5520")]
	private SqlGuid(bool fNull)
	{
	}

	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x42D5530", Offset = "0x42D5530", VA = "0x42D5530")]
	public SqlGuid(Guid g)
	{
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x42D5630", Offset = "0x42D5630", VA = "0x42D5630")]
	public static implicit operator SqlGuid(Guid x)
	{
		return default(SqlGuid);
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x42D5670", Offset = "0x42D5670", VA = "0x42D5670", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x42D56F0", Offset = "0x42D56F0", VA = "0x42D56F0")]
	private static EComparison Compare(SqlGuid x, SqlGuid y)
	{
		return default(EComparison);
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x42D5880", Offset = "0x42D5880", VA = "0x42D5880")]
	public static SqlBoolean operator ==(SqlGuid x, SqlGuid y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x42D59A0", Offset = "0x42D59A0", VA = "0x42D59A0")]
	public static SqlBoolean operator <(SqlGuid x, SqlGuid y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x42D5AC0", Offset = "0x42D5AC0", VA = "0x42D5AC0")]
	public static SqlBoolean operator >(SqlGuid x, SqlGuid y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x42D5BE0", Offset = "0x42D5BE0", VA = "0x42D5BE0", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x42D5CD0", Offset = "0x42D5CD0", VA = "0x42D5CD0")]
	public int CompareTo(SqlGuid value)
	{
		return default(int);
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x42D5E20", Offset = "0x42D5E20", VA = "0x42D5E20", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x42D5F60", Offset = "0x42D5F60", VA = "0x42D5F60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x42D5FF0", Offset = "0x42D5FF0", VA = "0x42D5FF0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x42D6000", Offset = "0x42D6000", VA = "0x42D6000", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x42D6130", Offset = "0x42D6130", VA = "0x42D6130", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x42D6290", Offset = "0x42D6290", VA = "0x42D6290")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
