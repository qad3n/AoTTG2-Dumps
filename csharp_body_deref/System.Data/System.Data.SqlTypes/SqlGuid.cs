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
		[Address(RVA = "0x187E270", Offset = "0x187C870", VA = "0x18187E270", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000193")]
	public Guid Value
	{
		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x2570490", Offset = "0x256EA90", VA = "0x182570490")]
		get
		{
			return default(Guid);
		}
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x254B140", Offset = "0x2549740", VA = "0x18254B140")]
	private SqlGuid(bool fNull)
	{
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x2570460", Offset = "0x256EA60", VA = "0x182570460")]
	public SqlGuid(Guid g)
	{
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x2570720", Offset = "0x256ED20", VA = "0x182570720")]
	public static implicit operator SqlGuid(Guid x)
	{
		return default(SqlGuid);
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x25702F0", Offset = "0x256E8F0", VA = "0x1825702F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x256FBF0", Offset = "0x256E1F0", VA = "0x18256FBF0")]
	private static EComparison Compare(SqlGuid x, SqlGuid y)
	{
		return default(EComparison);
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x2570540", Offset = "0x256EB40", VA = "0x182570540")]
	public static SqlBoolean operator ==(SqlGuid x, SqlGuid y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x2570760", Offset = "0x256ED60", VA = "0x182570760")]
	public static SqlBoolean operator <(SqlGuid x, SqlGuid y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x2570630", Offset = "0x256EC30", VA = "0x182570630")]
	public static SqlBoolean operator >(SqlGuid x, SqlGuid y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x256F800", Offset = "0x256DE00", VA = "0x18256F800", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x256F910", Offset = "0x256DF10", VA = "0x18256F910")]
	public int CompareTo(SqlGuid value)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x256FD10", Offset = "0x256E310", VA = "0x18256FD10", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x256FF00", Offset = "0x256E500", VA = "0x18256FF00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x2570080", Offset = "0x256E680", VA = "0x182570080", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x25701B0", Offset = "0x256E7B0", VA = "0x1825701B0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x2570010", Offset = "0x256E610", VA = "0x182570010")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
