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
		[Address(RVA = "0x4612CC0", Offset = "0x4612CC0", VA = "0x4612CC0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000190")]
	public Guid Value
	{
		[Token(Token = "0x60009F5")]
		[Address(RVA = "0x4612CD0", Offset = "0x4612CD0", VA = "0x4612CD0")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x60009F2")]
	[Address(RVA = "0x4612C80", Offset = "0x4612C80", VA = "0x4612C80")]
	private SqlGuid(bool fNull)
	{
	}

	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x4612C90", Offset = "0x4612C90", VA = "0x4612C90")]
	public SqlGuid(Guid g)
	{
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x4612D90", Offset = "0x4612D90", VA = "0x4612D90")]
	public static implicit operator SqlGuid(Guid x)
	{
		return default(SqlGuid);
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x4612DD0", Offset = "0x4612DD0", VA = "0x4612DD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x4612E50", Offset = "0x4612E50", VA = "0x4612E50")]
	private static EComparison Compare(SqlGuid x, SqlGuid y)
	{
		return default(EComparison);
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x4612FE0", Offset = "0x4612FE0", VA = "0x4612FE0")]
	public static SqlBoolean operator ==(SqlGuid x, SqlGuid y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x4613100", Offset = "0x4613100", VA = "0x4613100")]
	public static SqlBoolean operator <(SqlGuid x, SqlGuid y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x4613220", Offset = "0x4613220", VA = "0x4613220")]
	public static SqlBoolean operator >(SqlGuid x, SqlGuid y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x4613340", Offset = "0x4613340", VA = "0x4613340", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x4613430", Offset = "0x4613430", VA = "0x4613430")]
	public int CompareTo(SqlGuid value)
	{
		return default(int);
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x4613580", Offset = "0x4613580", VA = "0x4613580", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x46136C0", Offset = "0x46136C0", VA = "0x46136C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x4613750", Offset = "0x4613750", VA = "0x4613750", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x4613760", Offset = "0x4613760", VA = "0x4613760", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x4613890", Offset = "0x4613890", VA = "0x4613890", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x46139F0", Offset = "0x46139F0", VA = "0x46139F0")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
