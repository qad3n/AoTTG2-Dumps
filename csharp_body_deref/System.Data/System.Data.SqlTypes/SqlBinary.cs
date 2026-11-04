// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.SqlTypes.SqlBinary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Xml;
using System.Xml.Schema;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.SqlTypes;

[Serializable]
[Token(Token = "0x20000A9")]
[DefaultMember("Item")]
[XmlSchemaProvider("GetXsdType")]
public struct SqlBinary : INullable, IComparable, IXmlSerializable
{
	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x0")]
	private byte[] _value;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SqlBinary Null;

	[Token(Token = "0x17000174")]
	public bool IsNull
	{
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x187E270", Offset = "0x187C870", VA = "0x18187E270", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000175")]
	public byte[] Value
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x254B1E0", Offset = "0x25497E0", VA = "0x18254B1E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x254B140", Offset = "0x2549740", VA = "0x18254B140")]
	private SqlBinary(bool fNull)
	{
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x254B150", Offset = "0x2549750", VA = "0x18254B150")]
	public SqlBinary(byte[] value)
	{
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x254B4B0", Offset = "0x2549AB0", VA = "0x18254B4B0")]
	public static implicit operator SqlBinary(byte[] x)
	{
		return default(SqlBinary);
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x254AFD0", Offset = "0x25495D0", VA = "0x18254AFD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x254AC60", Offset = "0x2549260", VA = "0x18254AC60")]
	private static EComparison PerformCompareByte(byte[] x, byte[] y)
	{
		return default(EComparison);
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x254B2B0", Offset = "0x25498B0", VA = "0x18254B2B0")]
	public static SqlBoolean operator ==(SqlBinary x, SqlBinary y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x254B550", Offset = "0x2549B50", VA = "0x18254B550")]
	public static SqlBoolean operator <(SqlBinary x, SqlBinary y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x254B3B0", Offset = "0x25499B0", VA = "0x18254B3B0")]
	public static SqlBoolean operator >(SqlBinary x, SqlBinary y)
	{
		return default(SqlBoolean);
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x254A700", Offset = "0x2548D00", VA = "0x18254A700", Slot = "5")]
	public int CompareTo(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x254A3C0", Offset = "0x25489C0", VA = "0x18254A3C0")]
	public int CompareTo(SqlBinary value)
	{
		return default(int);
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x254A810", Offset = "0x2548E10", VA = "0x18254A810", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x254ABF0", Offset = "0x25491F0", VA = "0x18254ABF0")]
	internal static int HashByteArray(byte[] rgbValue, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x254AA90", Offset = "0x2549090", VA = "0x18254AA90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	private XmlSchema System_002EXml_002ESerialization_002EIXmlSerializable_002EGetSchema()
	{
		return null;
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x254AD50", Offset = "0x2549350", VA = "0x18254AD50", Slot = "7")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EReadXml(XmlReader reader)
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x254AEB0", Offset = "0x25494B0", VA = "0x18254AEB0", Slot = "8")]
	private void System_002EXml_002ESerialization_002EIXmlSerializable_002EWriteXml(XmlWriter writer)
	{
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x254AB80", Offset = "0x2549180", VA = "0x18254AB80")]
	public static XmlQualifiedName GetXsdType(XmlSchemaSet schemaSet)
	{
		return null;
	}
}
